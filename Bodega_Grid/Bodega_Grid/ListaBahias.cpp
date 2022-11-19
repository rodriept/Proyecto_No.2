#include "ListaBahias.h"
int ListaBahias::GetPesoMax()
{
	return PesoMaximoBahia;
}
System::String^ ListaBahias::GetID()
{
	return ID;
}
System::String^ ListaBahias::GetTipo()
{
	return TipoProducto;
}
int ListaBahias::GetPesoUtilizado()
{
	return PesoUtilizado;
}

void ListaBahias::SetPesoUtilizado(int _Peso)
{
	PesoUtilizado = _Peso;
}