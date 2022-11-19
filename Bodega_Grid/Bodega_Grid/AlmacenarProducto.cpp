#include "AlmacenarProducto.h"
System::String^ AlmacenarProducto::GetTipoProducto()
{
	return TipoProducto;
}
int AlmacenarProducto::GetCantUnidades()
{
	return CantUnidades;
}
System::String^ AlmacenarProducto::GetFechaAlmacenaje()
{
	return FechaAlmacenaje;
}
System::String^ AlmacenarProducto::GetNombreResponsable()
{
	return NombreResponsable;
}
int AlmacenarProducto::GetPesoProducto()
{
	return PesoProducto;
}