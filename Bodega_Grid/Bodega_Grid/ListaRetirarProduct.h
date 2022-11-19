#pragma once
ref class ListaRetirarProduct
{
private:
	System::String^ TipoProducto;
	int CantUnidadesRetiro;
	int FechaRetiro;
	System::String^ NombreResponsable;
	System::String^ ID;
public:
	ListaRetirarProduct(System::String^ _TipoProducto, System::String^ _NombreResponsable, System::String^ _UnID, int _CanRetiro, int _UnaFecha)
	{
		TipoProducto = _TipoProducto;
		NombreResponsable = _TipoProducto;
		ID = _UnID;
		CantUnidadesRetiro = _CanRetiro;
		FechaRetiro = _UnaFecha;
	}
	System::String^ GetTipoProducto();
	System::String^ GetID();
	System::String^ GetNombreResponsable();
	int GetFecha();
	int GetCantRetiro();
		
};

