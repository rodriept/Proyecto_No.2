#pragma once
ref class ListaBahias
{
private:
	System::String^ TipoProducto;
	int PesoMaximoBahia;
	System::String^ ID;
	int PesoUtilizado = 0;
	int CantidadUnidades = 0;
public:
	ListaBahias(System::String^ _TipoProducto, int _PesoMax, System::String^ _ID)
	{
		TipoProducto = _TipoProducto;
		PesoMaximoBahia = _PesoMax;
		ID = _ID;
	}
	void SetPesoUtilizado(int _Peso);
	void SetCantUnidades(int _Unidades);
	int GetCantUnidades();
	int GetPesoUtilizado();
	int GetPesoMax();
	System::String^ GetID();
	System::String^ GetTipo();

};

