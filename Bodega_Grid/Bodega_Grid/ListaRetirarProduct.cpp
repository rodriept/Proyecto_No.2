#include "ListaRetirarProduct.h"
System::String^ ListaRetirarProduct::GetTipoProducto()
{
	return TipoProducto;
}
System::String^ ListaRetirarProduct::GetNombreResponsable()
{
	return NombreResponsable;
}
System::String^ ListaRetirarProduct::GetID()
{
	return ID;
}
int ListaRetirarProduct::GetCantRetiro()
{
	return CantUnidadesRetiro;
}
int ListaRetirarProduct::GetFecha()
{
	return FechaRetiro;
}