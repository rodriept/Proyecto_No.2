#pragma once
ref class AlmacenarProducto
{
private:
	System::String^ TipoProducto;
	int CantUnidades;
	int PesoProducto;
	System::String^ FechaAlmacenaje;
	System::String^ NombreResponsable;

public:
	AlmacenarProducto(System::String^ _Tipo, int _CantidadUnidades, int _PesoProducto, System::String^ _Fecha, System::String^ _NombreResponsable)
	{
		TipoProducto = _Tipo;
		CantUnidades = _CantidadUnidades;
		FechaAlmacenaje = _Fecha;
		NombreResponsable = _NombreResponsable;
		PesoProducto = _PesoProducto;
	}
	int GetCantUnidades();
	int GetPesoProducto();
	System::String^ GetTipoProducto();
	System::String^ GetFechaAlmacenaje();
	System::String^ GetNombreResponsable();
};

