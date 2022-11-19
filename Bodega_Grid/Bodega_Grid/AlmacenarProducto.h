#pragma once
ref class AlmacenarProducto
{
private:
	System::String^ TipoProducto;
	int CantUnidades;
	int PesoUtilizado;
	System::String^ FechaAlmacenaje;
	System::String^ NombreResponsable;
public:
	AlmacenarProducto(System::String^ _Tipo, int _CantidadUnidades, int _PesoUtilizado, System::String^ _Fecha, System::String^ _NombreResponsable)
	{
		TipoProducto = _Tipo;
		CantUnidades = _CantidadUnidades;
		FechaAlmacenaje = _Fecha;
		NombreResponsable = _NombreResponsable;
	}
	System::String^ GetTipoProducto();
	int GetCantUnidades();
	int GetPesoUtilizado();
	System::String^ GetFechaAlmacenaje();
	System::String^ GetNombreResponsable();
};

