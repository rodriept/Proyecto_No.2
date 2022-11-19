#pragma once
#include "ListaBahias.h"
#include "AlmacenarProducto.h"
namespace BodegaGrid {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Bodega
	/// </summary>
	public ref class Bodega : public System::Windows::Forms::Form
	{
	
	public:
		Bodega(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Bodega()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ DGVBodega;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ TBBodegaFila;
	private: System::Windows::Forms::TextBox^ TBBodegaColumn;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ BIngresarBodega;
	private: System::Windows::Forms::Label^ LCrearBahia;
	private: System::Windows::Forms::Label^ LCrerBahiaFila;
	private: System::Windows::Forms::Label^ LCrerBahiaColumn;
	private: System::Windows::Forms::TextBox^ TBCrearColumnaBahia;

	private: System::Windows::Forms::TextBox^ TBCrearBahiaFila;

	private: System::Windows::Forms::Label^ LCrerBahiaProduct;
	private: System::Windows::Forms::TextBox^ TBCrearBahiaProducto;
	private: System::Windows::Forms::Label^ LCrearBahiaPeso;
	private: System::Windows::Forms::TextBox^ TBCrearBahiaPesoMax;
	private: System::Windows::Forms::Button^ BCrearBahiaIngresar;

	private: System::Windows::Forms::Button^ BCrearBahiaOtroProduct;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ TBAlmacenarCodigoAlmacen;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ TBAlmacenarProductoTipo;


	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ TBAlmacenarPesoProducto;


	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ TBAlmacenarCantUnidades;


	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TabControl^ TBCMenuOpciones;

	private: System::Windows::Forms::TabPage^ TPCrearBahia;
	private: System::Windows::Forms::TabPage^ TBAlmacenarProduct;
	private: System::Windows::Forms::TabPage^ TBRetirar;
	private: System::Windows::Forms::TabPage^ TPEliminar;
	private: System::Windows::Forms::TabPage^ TPInventario;
	private: System::Windows::Forms::TabPage^ TPBodega;
	private: System::Windows::Forms::TextBox^ TBAlmacenarFechaAlmacenaje;

	private: System::Windows::Forms::Button^ BAlmacenarProduct;
	private: System::Windows::Forms::Label^ label11;


	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ TBRetirarNombResponsable;

	private: System::Windows::Forms::TextBox^ TBRetirarTipoProduct;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ TBRetirarFechaRetiro;

	private: System::Windows::Forms::TextBox^ TBRetirarCantidades;

	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Button^ BRetirarProducto;

	private: System::Windows::Forms::Button^ BEliminarBahia;
	private: System::Windows::Forms::TextBox^ TBEliminarFila;
	private: System::Windows::Forms::TextBox^ TBEliminarColumn;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ BInventarioOrdenar;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Button^ BCrearBahiaNuevaBahia;

	private: System::Windows::Forms::Button^ BCrearBahiaNoIngresar;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::TextBox^ TBAlmacenarNombreRespon;
private: System::Windows::Forms::Label^ label21;


	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->DGVBodega = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->TBBodegaFila = (gcnew System::Windows::Forms::TextBox());
			this->TBBodegaColumn = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->BIngresarBodega = (gcnew System::Windows::Forms::Button());
			this->LCrearBahia = (gcnew System::Windows::Forms::Label());
			this->LCrerBahiaFila = (gcnew System::Windows::Forms::Label());
			this->LCrerBahiaColumn = (gcnew System::Windows::Forms::Label());
			this->TBCrearColumnaBahia = (gcnew System::Windows::Forms::TextBox());
			this->TBCrearBahiaFila = (gcnew System::Windows::Forms::TextBox());
			this->LCrerBahiaProduct = (gcnew System::Windows::Forms::Label());
			this->TBCrearBahiaProducto = (gcnew System::Windows::Forms::TextBox());
			this->LCrearBahiaPeso = (gcnew System::Windows::Forms::Label());
			this->TBCrearBahiaPesoMax = (gcnew System::Windows::Forms::TextBox());
			this->BCrearBahiaIngresar = (gcnew System::Windows::Forms::Button());
			this->BCrearBahiaOtroProduct = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->TBAlmacenarCodigoAlmacen = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->TBAlmacenarProductoTipo = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->TBAlmacenarPesoProducto = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->TBAlmacenarCantUnidades = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->TBCMenuOpciones = (gcnew System::Windows::Forms::TabControl());
			this->TPCrearBahia = (gcnew System::Windows::Forms::TabPage());
			this->BCrearBahiaNoIngresar = (gcnew System::Windows::Forms::Button());
			this->BCrearBahiaNuevaBahia = (gcnew System::Windows::Forms::Button());
			this->TBAlmacenarProduct = (gcnew System::Windows::Forms::TabPage());
			this->TBAlmacenarNombreRespon = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->BAlmacenarProduct = (gcnew System::Windows::Forms::Button());
			this->TBAlmacenarFechaAlmacenaje = (gcnew System::Windows::Forms::TextBox());
			this->TBRetirar = (gcnew System::Windows::Forms::TabPage());
			this->BRetirarProducto = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->TBRetirarNombResponsable = (gcnew System::Windows::Forms::TextBox());
			this->TBRetirarTipoProduct = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->TBRetirarFechaRetiro = (gcnew System::Windows::Forms::TextBox());
			this->TBRetirarCantidades = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->TPEliminar = (gcnew System::Windows::Forms::TabPage());
			this->BEliminarBahia = (gcnew System::Windows::Forms::Button());
			this->TBEliminarFila = (gcnew System::Windows::Forms::TextBox());
			this->TBEliminarColumn = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->TPInventario = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->BInventarioOrdenar = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->TPBodega = (gcnew System::Windows::Forms::TabPage());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGVBodega))->BeginInit();
			this->TBCMenuOpciones->SuspendLayout();
			this->TPCrearBahia->SuspendLayout();
			this->TBAlmacenarProduct->SuspendLayout();
			this->TBRetirar->SuspendLayout();
			this->TPEliminar->SuspendLayout();
			this->TPInventario->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(94, 14);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(435, 64);
			this->label1->TabIndex = 0;
			this->label1->Text = L"BODEGA GRID";
			// 
			// DGVBodega
			// 
			this->DGVBodega->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->DGVBodega->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DGVBodega->Location = System::Drawing::Point(24, 546);
			this->DGVBodega->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->DGVBodega->Name = L"DGVBodega";
			this->DGVBodega->ReadOnly = true;
			this->DGVBodega->RowHeadersWidth = 45;
			this->DGVBodega->Size = System::Drawing::Size(693, 466);
			this->DGVBodega->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(0, 118);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(237, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Ingrese el tamaño de la bodega:";
			// 
			// TBBodegaFila
			// 
			this->TBBodegaFila->Location = System::Drawing::Point(248, 115);
			this->TBBodegaFila->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->TBBodegaFila->Name = L"TBBodegaFila";
			this->TBBodegaFila->Size = System::Drawing::Size(68, 26);
			this->TBBodegaFila->TabIndex = 4;
			// 
			// TBBodegaColumn
			// 
			this->TBBodegaColumn->Location = System::Drawing::Point(342, 115);
			this->TBBodegaColumn->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->TBBodegaColumn->Name = L"TBBodegaColumn";
			this->TBBodegaColumn->Size = System::Drawing::Size(68, 26);
			this->TBBodegaColumn->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(248, 91);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 20);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Filas:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(338, 91);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(84, 20);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Columnas:";
			// 
			// BIngresarBodega
			// 
			this->BIngresarBodega->Location = System::Drawing::Point(430, 111);
			this->BIngresarBodega->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->BIngresarBodega->Name = L"BIngresarBodega";
			this->BIngresarBodega->Size = System::Drawing::Size(112, 35);
			this->BIngresarBodega->TabIndex = 8;
			this->BIngresarBodega->Text = L"Ingresar";
			this->BIngresarBodega->UseVisualStyleBackColor = true;
			this->BIngresarBodega->Click += gcnew System::EventHandler(this, &Bodega::button1_Click);
			// 
			// LCrearBahia
			// 
			this->LCrearBahia->AutoSize = true;
			this->LCrearBahia->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->LCrearBahia->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LCrearBahia->ForeColor = System::Drawing::SystemColors::ControlText;
			this->LCrearBahia->Location = System::Drawing::Point(24, 22);
			this->LCrearBahia->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LCrearBahia->Name = L"LCrearBahia";
			this->LCrearBahia->Size = System::Drawing::Size(160, 31);
			this->LCrearBahia->TabIndex = 9;
			this->LCrearBahia->Text = L"Crear Bahía:";
			// 
			// LCrerBahiaFila
			// 
			this->LCrerBahiaFila->AutoSize = true;
			this->LCrerBahiaFila->Location = System::Drawing::Point(246, 22);
			this->LCrerBahiaFila->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LCrerBahiaFila->Name = L"LCrerBahiaFila";
			this->LCrerBahiaFila->Size = System::Drawing::Size(38, 20);
			this->LCrerBahiaFila->TabIndex = 10;
			this->LCrerBahiaFila->Text = L"Fila:";
			// 
			// LCrerBahiaColumn
			// 
			this->LCrerBahiaColumn->AutoSize = true;
			this->LCrerBahiaColumn->Location = System::Drawing::Point(308, 22);
			this->LCrerBahiaColumn->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LCrerBahiaColumn->Name = L"LCrerBahiaColumn";
			this->LCrerBahiaColumn->Size = System::Drawing::Size(76, 20);
			this->LCrerBahiaColumn->TabIndex = 11;
			this->LCrerBahiaColumn->Text = L"Columna:";
			// 
			// TBCrearColumnaBahia
			// 
			this->TBCrearColumnaBahia->Location = System::Drawing::Point(324, 46);
			this->TBCrearColumnaBahia->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->TBCrearColumnaBahia->Name = L"TBCrearColumnaBahia";
			this->TBCrearColumnaBahia->Size = System::Drawing::Size(68, 26);
			this->TBCrearColumnaBahia->TabIndex = 12;
			// 
			// TBCrearBahiaFila
			// 
			this->TBCrearBahiaFila->Location = System::Drawing::Point(244, 46);
			this->TBCrearBahiaFila->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->TBCrearBahiaFila->Name = L"TBCrearBahiaFila";
			this->TBCrearBahiaFila->Size = System::Drawing::Size(68, 26);
			this->TBCrearBahiaFila->TabIndex = 13;
			// 
			// LCrerBahiaProduct
			// 
			this->LCrerBahiaProduct->AutoSize = true;
			this->LCrerBahiaProduct->Location = System::Drawing::Point(252, 82);
			this->LCrerBahiaProduct->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LCrerBahiaProduct->Name = L"LCrerBahiaProduct";
			this->LCrerBahiaProduct->Size = System::Drawing::Size(132, 20);
			this->LCrerBahiaProduct->TabIndex = 14;
			this->LCrerBahiaProduct->Text = L"Tipo de producto:";
			// 
			// TBCrearBahiaProducto
			// 
			this->TBCrearBahiaProducto->Location = System::Drawing::Point(210, 106);
			this->TBCrearBahiaProducto->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->TBCrearBahiaProducto->Name = L"TBCrearBahiaProducto";
			this->TBCrearBahiaProducto->Size = System::Drawing::Size(148, 26);
			this->TBCrearBahiaProducto->TabIndex = 15;
			// 
			// LCrearBahiaPeso
			// 
			this->LCrearBahiaPeso->AutoSize = true;
			this->LCrearBahiaPeso->Location = System::Drawing::Point(268, 146);
			this->LCrearBahiaPeso->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LCrearBahiaPeso->Name = L"LCrearBahiaPeso";
			this->LCrearBahiaPeso->Size = System::Drawing::Size(107, 20);
			this->LCrearBahiaPeso->TabIndex = 16;
			this->LCrearBahiaPeso->Text = L"Peso Máximo:";
			// 
			// TBCrearBahiaPesoMax
			// 
			this->TBCrearBahiaPesoMax->Location = System::Drawing::Point(260, 171);
			this->TBCrearBahiaPesoMax->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->TBCrearBahiaPesoMax->Name = L"TBCrearBahiaPesoMax";
			this->TBCrearBahiaPesoMax->Size = System::Drawing::Size(116, 26);
			this->TBCrearBahiaPesoMax->TabIndex = 17;
			// 
			// BCrearBahiaIngresar
			// 
			this->BCrearBahiaIngresar->Enabled = false;
			this->BCrearBahiaIngresar->Location = System::Drawing::Point(196, 211);
			this->BCrearBahiaIngresar->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->BCrearBahiaIngresar->Name = L"BCrearBahiaIngresar";
			this->BCrearBahiaIngresar->Size = System::Drawing::Size(132, 35);
			this->BCrearBahiaIngresar->TabIndex = 18;
			this->BCrearBahiaIngresar->Text = L"Ingresar Bahía";
			this->BCrearBahiaIngresar->UseVisualStyleBackColor = true;
			this->BCrearBahiaIngresar->Click += gcnew System::EventHandler(this, &Bodega::BCrearBahiaIngresar_Click);
			// 
			// BCrearBahiaOtroProduct
			// 
			this->BCrearBahiaOtroProduct->Location = System::Drawing::Point(387, 92);
			this->BCrearBahiaOtroProduct->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->BCrearBahiaOtroProduct->Name = L"BCrearBahiaOtroProduct";
			this->BCrearBahiaOtroProduct->Size = System::Drawing::Size(166, 55);
			this->BCrearBahiaOtroProduct->TabIndex = 19;
			this->BCrearBahiaOtroProduct->Text = L"Ingresar otro producto a la bahía";
			this->BCrearBahiaOtroProduct->UseVisualStyleBackColor = true;
			this->BCrearBahiaOtroProduct->Click += gcnew System::EventHandler(this, &Bodega::BCrearBahiaOtroProduct_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(4, 5);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(255, 31);
			this->label5->TabIndex = 20;
			this->label5->Text = L"Almacenar producto:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(28, 52);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(186, 20);
			this->label6->TabIndex = 21;
			this->label6->Text = L"Código Almacenamiento:";
			// 
			// TBAlmacenarCodigoAlmacen
			// 
			this->TBAlmacenarCodigoAlmacen->Location = System::Drawing::Point(224, 52);
			this->TBAlmacenarCodigoAlmacen->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->TBAlmacenarCodigoAlmacen->Name = L"TBAlmacenarCodigoAlmacen";
			this->TBAlmacenarCodigoAlmacen->Size = System::Drawing::Size(148, 26);
			this->TBAlmacenarCodigoAlmacen->TabIndex = 22;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(28, 105);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(132, 20);
			this->label7->TabIndex = 23;
			this->label7->Text = L"Tipo de producto:";
			// 
			// TBAlmacenarProductoTipo
			// 
			this->TBAlmacenarProductoTipo->Location = System::Drawing::Point(174, 100);
			this->TBAlmacenarProductoTipo->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->TBAlmacenarProductoTipo->Name = L"TBAlmacenarProductoTipo";
			this->TBAlmacenarProductoTipo->Size = System::Drawing::Size(148, 26);
			this->TBAlmacenarProductoTipo->TabIndex = 24;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(28, 149);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(141, 20);
			this->label8->TabIndex = 25;
			this->label8->Text = L"Peso del producto:";
			// 
			// TBAlmacenarPesoProducto
			// 
			this->TBAlmacenarPesoProducto->Location = System::Drawing::Point(182, 145);
			this->TBAlmacenarPesoProducto->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->TBAlmacenarPesoProducto->Name = L"TBAlmacenarPesoProducto";
			this->TBAlmacenarPesoProducto->Size = System::Drawing::Size(68, 26);
			this->TBAlmacenarPesoProducto->TabIndex = 26;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(28, 195);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(168, 20);
			this->label9->TabIndex = 27;
			this->label9->Text = L"Cantidad de unidades:";
			// 
			// TBAlmacenarCantUnidades
			// 
			this->TBAlmacenarCantUnidades->Location = System::Drawing::Point(200, 191);
			this->TBAlmacenarCantUnidades->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->TBAlmacenarCantUnidades->Name = L"TBAlmacenarCantUnidades";
			this->TBAlmacenarCantUnidades->Size = System::Drawing::Size(68, 26);
			this->TBAlmacenarCantUnidades->TabIndex = 28;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(30, 234);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(165, 20);
			this->label10->TabIndex = 29;
			this->label10->Text = L"Fecha de almacenaje:";
			// 
			// TBCMenuOpciones
			// 
			this->TBCMenuOpciones->Controls->Add(this->TPCrearBahia);
			this->TBCMenuOpciones->Controls->Add(this->TBAlmacenarProduct);
			this->TBCMenuOpciones->Controls->Add(this->TBRetirar);
			this->TBCMenuOpciones->Controls->Add(this->TPEliminar);
			this->TBCMenuOpciones->Controls->Add(this->TPInventario);
			this->TBCMenuOpciones->Controls->Add(this->TPBodega);
			this->TBCMenuOpciones->Enabled = false;
			this->TBCMenuOpciones->Location = System::Drawing::Point(18, 163);
			this->TBCMenuOpciones->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->TBCMenuOpciones->Name = L"TBCMenuOpciones";
			this->TBCMenuOpciones->SelectedIndex = 0;
			this->TBCMenuOpciones->Size = System::Drawing::Size(705, 374);
			this->TBCMenuOpciones->TabIndex = 30;
			// 
			// TPCrearBahia
			// 
			this->TPCrearBahia->Controls->Add(this->BCrearBahiaNoIngresar);
			this->TPCrearBahia->Controls->Add(this->BCrearBahiaNuevaBahia);
			this->TPCrearBahia->Controls->Add(this->LCrearBahia);
			this->TPCrearBahia->Controls->Add(this->LCrerBahiaFila);
			this->TPCrearBahia->Controls->Add(this->LCrerBahiaColumn);
			this->TPCrearBahia->Controls->Add(this->TBCrearColumnaBahia);
			this->TPCrearBahia->Controls->Add(this->TBCrearBahiaFila);
			this->TPCrearBahia->Controls->Add(this->LCrerBahiaProduct);
			this->TPCrearBahia->Controls->Add(this->TBCrearBahiaProducto);
			this->TPCrearBahia->Controls->Add(this->LCrearBahiaPeso);
			this->TPCrearBahia->Controls->Add(this->TBCrearBahiaPesoMax);
			this->TPCrearBahia->Controls->Add(this->BCrearBahiaIngresar);
			this->TPCrearBahia->Controls->Add(this->BCrearBahiaOtroProduct);
			this->TPCrearBahia->Location = System::Drawing::Point(4, 29);
			this->TPCrearBahia->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->TPCrearBahia->Name = L"TPCrearBahia";
			this->TPCrearBahia->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->TPCrearBahia->Size = System::Drawing::Size(697, 341);
			this->TPCrearBahia->TabIndex = 0;
			this->TPCrearBahia->Text = L"Crear Bahía";
			this->TPCrearBahia->UseVisualStyleBackColor = true;
			// 
			// BCrearBahiaNoIngresar
			// 
			this->BCrearBahiaNoIngresar->Location = System::Drawing::Point(562, 103);
			this->BCrearBahiaNoIngresar->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->BCrearBahiaNoIngresar->Name = L"BCrearBahiaNoIngresar";
			this->BCrearBahiaNoIngresar->Size = System::Drawing::Size(112, 35);
			this->BCrearBahiaNoIngresar->TabIndex = 21;
			this->BCrearBahiaNoIngresar->Text = L"No ingresar";
			this->BCrearBahiaNoIngresar->UseVisualStyleBackColor = true;
			this->BCrearBahiaNoIngresar->Click += gcnew System::EventHandler(this, &Bodega::button3_Click);
			// 
			// BCrearBahiaNuevaBahia
			// 
			this->BCrearBahiaNuevaBahia->Enabled = false;
			this->BCrearBahiaNuevaBahia->Location = System::Drawing::Point(338, 211);
			this->BCrearBahiaNuevaBahia->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->BCrearBahiaNuevaBahia->Name = L"BCrearBahiaNuevaBahia";
			this->BCrearBahiaNuevaBahia->Size = System::Drawing::Size(165, 35);
			this->BCrearBahiaNuevaBahia->TabIndex = 20;
			this->BCrearBahiaNuevaBahia->Text = L"Crear nueva Bahía";
			this->BCrearBahiaNuevaBahia->UseVisualStyleBackColor = true;
			this->BCrearBahiaNuevaBahia->Click += gcnew System::EventHandler(this, &Bodega::button2_Click);
			// 
			// TBAlmacenarProduct
			// 
			this->TBAlmacenarProduct->Controls->Add(this->TBAlmacenarNombreRespon);
			this->TBAlmacenarProduct->Controls->Add(this->label21);
			this->TBAlmacenarProduct->Controls->Add(this->label20);
			this->TBAlmacenarProduct->Controls->Add(this->BAlmacenarProduct);
			this->TBAlmacenarProduct->Controls->Add(this->TBAlmacenarFechaAlmacenaje);
			this->TBAlmacenarProduct->Controls->Add(this->label5);
			this->TBAlmacenarProduct->Controls->Add(this->label10);
			this->TBAlmacenarProduct->Controls->Add(this->label6);
			this->TBAlmacenarProduct->Controls->Add(this->TBAlmacenarCantUnidades);
			this->TBAlmacenarProduct->Controls->Add(this->TBAlmacenarCodigoAlmacen);
			this->TBAlmacenarProduct->Controls->Add(this->label9);
			this->TBAlmacenarProduct->Controls->Add(this->label7);
			this->TBAlmacenarProduct->Controls->Add(this->TBAlmacenarPesoProducto);
			this->TBAlmacenarProduct->Controls->Add(this->TBAlmacenarProductoTipo);
			this->TBAlmacenarProduct->Controls->Add(this->label8);
			this->TBAlmacenarProduct->Location = System::Drawing::Point(4, 29);
			this->TBAlmacenarProduct->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->TBAlmacenarProduct->Name = L"TBAlmacenarProduct";
			this->TBAlmacenarProduct->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->TBAlmacenarProduct->Size = System::Drawing::Size(697, 341);
			this->TBAlmacenarProduct->TabIndex = 1;
			this->TBAlmacenarProduct->Text = L"Almacenar producto";
			this->TBAlmacenarProduct->UseVisualStyleBackColor = true;
			// 
			// TBAlmacenarNombreRespon
			// 
			this->TBAlmacenarNombreRespon->Location = System::Drawing::Point(424, 229);
			this->TBAlmacenarNombreRespon->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->TBAlmacenarNombreRespon->Name = L"TBAlmacenarNombreRespon";
			this->TBAlmacenarNombreRespon->Size = System::Drawing::Size(241, 26);
			this->TBAlmacenarNombreRespon->TabIndex = 34;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(345, 234);
			this->label21->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(69, 20);
			this->label21->TabIndex = 33;
			this->label21->Text = L"Nombre:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(382, 52);
			this->label20->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(56, 20);
			this->label20->TabIndex = 32;
			this->label20->Text = L"Ej. A-1";
			// 
			// BAlmacenarProduct
			// 
			this->BAlmacenarProduct->Location = System::Drawing::Point(98, 269);
			this->BAlmacenarProduct->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->BAlmacenarProduct->Name = L"BAlmacenarProduct";
			this->BAlmacenarProduct->Size = System::Drawing::Size(196, 42);
			this->BAlmacenarProduct->TabIndex = 31;
			this->BAlmacenarProduct->Text = L"Almacenar Producto";
			this->BAlmacenarProduct->UseVisualStyleBackColor = true;
			this->BAlmacenarProduct->Click += gcnew System::EventHandler(this, &Bodega::BAlmacenarProduct_Click);
			// 
			// TBAlmacenarFechaAlmacenaje
			// 
			this->TBAlmacenarFechaAlmacenaje->Location = System::Drawing::Point(200, 229);
			this->TBAlmacenarFechaAlmacenaje->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->TBAlmacenarFechaAlmacenaje->Name = L"TBAlmacenarFechaAlmacenaje";
			this->TBAlmacenarFechaAlmacenaje->Size = System::Drawing::Size(134, 26);
			this->TBAlmacenarFechaAlmacenaje->TabIndex = 30;
			// 
			// TBRetirar
			// 
			this->TBRetirar->Controls->Add(this->BRetirarProducto);
			this->TBRetirar->Controls->Add(this->label13);
			this->TBRetirar->Controls->Add(this->TBRetirarNombResponsable);
			this->TBRetirar->Controls->Add(this->TBRetirarTipoProduct);
			this->TBRetirar->Controls->Add(this->label14);
			this->TBRetirar->Controls->Add(this->label15);
			this->TBRetirar->Controls->Add(this->TBRetirarFechaRetiro);
			this->TBRetirar->Controls->Add(this->TBRetirarCantidades);
			this->TBRetirar->Controls->Add(this->label16);
			this->TBRetirar->Controls->Add(this->label11);
			this->TBRetirar->Location = System::Drawing::Point(4, 29);
			this->TBRetirar->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->TBRetirar->Name = L"TBRetirar";
			this->TBRetirar->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->TBRetirar->Size = System::Drawing::Size(697, 341);
			this->TBRetirar->TabIndex = 2;
			this->TBRetirar->Text = L"Retirar Producto";
			this->TBRetirar->UseVisualStyleBackColor = true;
			// 
			// BRetirarProducto
			// 
			this->BRetirarProducto->Location = System::Drawing::Point(70, 223);
			this->BRetirarProducto->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->BRetirarProducto->Name = L"BRetirarProducto";
			this->BRetirarProducto->Size = System::Drawing::Size(156, 35);
			this->BRetirarProducto->TabIndex = 39;
			this->BRetirarProducto->Text = L"Retirar Producto";
			this->BRetirarProducto->UseVisualStyleBackColor = true;
			this->BRetirarProducto->Click += gcnew System::EventHandler(this, &Bodega::button1_Click_1);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(10, 49);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(111, 20);
			this->label13->TabIndex = 31;
			this->label13->Text = L"Tipo Producto:";
			// 
			// TBRetirarNombResponsable
			// 
			this->TBRetirarNombResponsable->Location = System::Drawing::Point(200, 183);
			this->TBRetirarNombResponsable->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->TBRetirarNombResponsable->Name = L"TBRetirarNombResponsable";
			this->TBRetirarNombResponsable->Size = System::Drawing::Size(115, 26);
			this->TBRetirarNombResponsable->TabIndex = 38;
			// 
			// TBRetirarTipoProduct
			// 
			this->TBRetirarTipoProduct->Location = System::Drawing::Point(129, 49);
			this->TBRetirarTipoProduct->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->TBRetirarTipoProduct->Name = L"TBRetirarTipoProduct";
			this->TBRetirarTipoProduct->Size = System::Drawing::Size(148, 26);
			this->TBRetirarTipoProduct->TabIndex = 32;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(9, 188);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(185, 20);
			this->label14->TabIndex = 37;
			this->label14->Text = L"Nombre del responsable:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(9, 97);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(226, 20);
			this->label15->TabIndex = 33;
			this->label15->Text = L"Cantidad de unidades a retirar:";
			// 
			// TBRetirarFechaRetiro
			// 
			this->TBRetirarFechaRetiro->Location = System::Drawing::Point(129, 137);
			this->TBRetirarFechaRetiro->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->TBRetirarFechaRetiro->Name = L"TBRetirarFechaRetiro";
			this->TBRetirarFechaRetiro->Size = System::Drawing::Size(148, 26);
			this->TBRetirarFechaRetiro->TabIndex = 36;
			// 
			// TBRetirarCantidades
			// 
			this->TBRetirarCantidades->Location = System::Drawing::Point(238, 92);
			this->TBRetirarCantidades->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->TBRetirarCantidades->Name = L"TBRetirarCantidades";
			this->TBRetirarCantidades->Size = System::Drawing::Size(148, 26);
			this->TBRetirarCantidades->TabIndex = 34;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(9, 142);
			this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(120, 20);
			this->label16->TabIndex = 35;
			this->label16->Text = L"Fecha de retiro:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(9, 5);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(245, 35);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Retirar Producto";
			// 
			// TPEliminar
			// 
			this->TPEliminar->Controls->Add(this->BEliminarBahia);
			this->TPEliminar->Controls->Add(this->TBEliminarFila);
			this->TPEliminar->Controls->Add(this->TBEliminarColumn);
			this->TPEliminar->Controls->Add(this->label18);
			this->TPEliminar->Controls->Add(this->label17);
			this->TPEliminar->Controls->Add(this->label12);
			this->TPEliminar->Location = System::Drawing::Point(4, 29);
			this->TPEliminar->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->TPEliminar->Name = L"TPEliminar";
			this->TPEliminar->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->TPEliminar->Size = System::Drawing::Size(697, 341);
			this->TPEliminar->TabIndex = 3;
			this->TPEliminar->Text = L"Eliminar Bahía";
			this->TPEliminar->UseVisualStyleBackColor = true;
			// 
			// BEliminarBahia
			// 
			this->BEliminarBahia->Location = System::Drawing::Point(75, 125);
			this->BEliminarBahia->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->BEliminarBahia->Name = L"BEliminarBahia";
			this->BEliminarBahia->Size = System::Drawing::Size(112, 35);
			this->BEliminarBahia->TabIndex = 9;
			this->BEliminarBahia->Text = L"Ingresar";
			this->BEliminarBahia->UseVisualStyleBackColor = true;
			// 
			// TBEliminarFila
			// 
			this->TBEliminarFila->Location = System::Drawing::Point(20, 85);
			this->TBEliminarFila->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->TBEliminarFila->Name = L"TBEliminarFila";
			this->TBEliminarFila->Size = System::Drawing::Size(72, 26);
			this->TBEliminarFila->TabIndex = 4;
			// 
			// TBEliminarColumn
			// 
			this->TBEliminarColumn->Location = System::Drawing::Point(171, 85);
			this->TBEliminarColumn->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->TBEliminarColumn->Name = L"TBEliminarColumn";
			this->TBEliminarColumn->Size = System::Drawing::Size(72, 26);
			this->TBEliminarColumn->TabIndex = 3;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(166, 60);
			this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(76, 20);
			this->label18->TabIndex = 2;
			this->label18->Text = L"Columna:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(30, 60);
			this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(38, 20);
			this->label17->TabIndex = 1;
			this->label17->Text = L"Fila:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(9, 5);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(184, 31);
			this->label12->TabIndex = 0;
			this->label12->Text = L"Eliminar Bahía";
			// 
			// TPInventario
			// 
			this->TPInventario->Controls->Add(this->dataGridView1);
			this->TPInventario->Controls->Add(this->BInventarioOrdenar);
			this->TPInventario->Controls->Add(this->comboBox1);
			this->TPInventario->Controls->Add(this->label19);
			this->TPInventario->Location = System::Drawing::Point(4, 29);
			this->TPInventario->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->TPInventario->Name = L"TPInventario";
			this->TPInventario->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->TPInventario->Size = System::Drawing::Size(697, 341);
			this->TPInventario->TabIndex = 4;
			this->TPInventario->Text = L"Inventario";
			this->TPInventario->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(255, 32);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->Size = System::Drawing::Size(360, 231);
			this->dataGridView1->TabIndex = 3;
			// 
			// BInventarioOrdenar
			// 
			this->BInventarioOrdenar->Location = System::Drawing::Point(45, 105);
			this->BInventarioOrdenar->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->BInventarioOrdenar->Name = L"BInventarioOrdenar";
			this->BInventarioOrdenar->Size = System::Drawing::Size(112, 35);
			this->BInventarioOrdenar->TabIndex = 2;
			this->BInventarioOrdenar->Text = L"Ordenar";
			this->BInventarioOrdenar->UseVisualStyleBackColor = true;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Tipo de producto", L"Peso unitario", L"Fecha de ingreso del pedido" });
			this->comboBox1->Location = System::Drawing::Point(9, 63);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(180, 28);
			this->comboBox1->TabIndex = 1;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(9, 5);
			this->label19->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(164, 35);
			this->label19->TabIndex = 0;
			this->label19->Text = L"Inventario:";
			// 
			// TPBodega
			// 
			this->TPBodega->Location = System::Drawing::Point(4, 29);
			this->TPBodega->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->TPBodega->Name = L"TPBodega";
			this->TPBodega->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->TPBodega->Size = System::Drawing::Size(697, 341);
			this->TPBodega->TabIndex = 5;
			this->TPBodega->Text = L"Bodegas";
			this->TPBodega->UseVisualStyleBackColor = true;
			// 
			// Bodega
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(741, 1031);
			this->Controls->Add(this->TBCMenuOpciones);
			this->Controls->Add(this->BIngresarBodega);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->TBBodegaColumn);
			this->Controls->Add(this->TBBodegaFila);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->DGVBodega);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"Bodega";
			this->Text = L"Bodega";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGVBodega))->EndInit();
			this->TBCMenuOpciones->ResumeLayout(false);
			this->TPCrearBahia->ResumeLayout(false);
			this->TPCrearBahia->PerformLayout();
			this->TBAlmacenarProduct->ResumeLayout(false);
			this->TBAlmacenarProduct->PerformLayout();
			this->TBRetirar->ResumeLayout(false);
			this->TBRetirar->PerformLayout();
			this->TPEliminar->ResumeLayout(false);
			this->TPEliminar->PerformLayout();
			this->TPInventario->ResumeLayout(false);
			this->TPInventario->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		array<ListaBahias^>^ MisBahias;
		array<AlmacenarProducto^>^ MisAlmacenamientos = gcnew array<AlmacenarProducto^>(100);
		int FilaBodega, ColumnaBodega;
		int ContBahias = 0, CantProductos = 0, ContAlmacenamientos = 0;
		String^ TipoProducto = "";
		
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		
		try
		{
			array<String^>^ Abecedario = { "A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
			if (TBBodegaFila->Text == "" || TBBodegaColumn->Text == "")
			{
				MessageBox::Show("Ingrese las filas o columnas de la bodega", "Error: Bodega no ingresada", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else
			{
				FilaBodega = Convert::ToInt32(TBBodegaFila->Text);
				ColumnaBodega = Convert::ToInt32(TBBodegaColumn->Text);
				for (int i = 0; i < ColumnaBodega; i++)
				{
					DataGridViewTextBoxColumn^ columnaHeader = gcnew DataGridViewTextBoxColumn();
					columnaHeader->HeaderText = Convert::ToString(i + 1);
					DGVBodega->Columns->Add(columnaHeader);
				}
				for (int i = 0; i < FilaBodega; i++)
				{
					DGVBodega->Rows->Add();
					DGVBodega->Rows[i]->HeaderCell->Value = Abecedario[i];
				}
				MisBahias = gcnew array<ListaBahias^>(FilaBodega*ColumnaBodega);
				BIngresarBodega->Enabled = false;
				TBCMenuOpciones->Enabled = true;
				
			}
		}
		catch (...)
		{

			MessageBox::Show("Ingrese las filas o columnas de la bodega", "Error: Bodega no ingresada", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
    private: System::Void BCrearBahiaIngresar_Click(System::Object^ sender, System::EventArgs^ e) 
    {
		array<String^>^ Abecedario = { "A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z" };
		int IngresoColumna, PesoMaximo, I;
		bool VerificarFila = false;
		String^ IngresoFila;
		String^ Verificar;
		String^ ID;
		try
		{
			IngresoFila = TBCrearBahiaFila->Text;
			IngresoColumna = Convert::ToInt32(TBCrearColumnaBahia->Text);
			IngresoFila = IngresoFila->ToUpper();
			for (int i = 0; i < DGVBodega->Rows->Count; i++)
			{
				Verificar = Convert::ToString(DGVBodega->Rows[i]->HeaderCell->Value);
				if (IngresoFila == Verificar)
				{
					I = i;
					VerificarFila = true;
					break;
				}
			}
			if (TBCrearBahiaFila->Text == ""|| TBCrearColumnaBahia->Text == ""|| TBCrearBahiaPesoMax->Text == ""|| TBCrearBahiaProducto->Text == "")
			{
				MessageBox::Show("Ingrese todos los datos para crear una nueva bahía", "ERROR: Ingrese todos los datos", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else if(IngresoColumna > ColumnaBodega || VerificarFila == false)
			{
				MessageBox::Show("Se excecedió la fila o columna de la bodega", "Error: fila o columna mayor a la bodega", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else
			{
				
				if (TipoProducto == "")
				{
					TipoProducto = TBCrearBahiaProducto->Text;
					TipoProducto = TipoProducto->ToLower();
					CantProductos++;
				}
				else
				{
					ID = IngresoFila + "-" + IngresoColumna;
					PesoMaximo = Convert::ToInt32(TBCrearBahiaPesoMax->Text);
					MisBahias[ContBahias] = gcnew ListaBahias(TipoProducto, PesoMaximo, ID);
					ContBahias++;
					DGVBodega->Rows[I]->Cells[IngresoColumna - 1]->Value = ID + " " + TipoProducto + " PesoMax:" + PesoMaximo + " Peso Utilizado: " + 0;
					BCrearBahiaNuevaBahia->Enabled = true;
					BCrearBahiaIngresar->Enabled = false;
				}
				
			}
		}
		catch (...)
		{
			MessageBox::Show("Ingrese todos los datos para crear una nueva bahía", "ERROR: Ingrese todos los datos", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
    }
    private: System::Void BCrearBahiaOtroProduct_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (TipoProducto == "")
		{
			TipoProducto = TBCrearBahiaProducto->Text;
			TipoProducto = TipoProducto->ToLower();
			CantProductos++;
	
		}
		else if (TBCrearBahiaProducto->Text == "")
		{
			MessageBox::Show("Ingrese un producto", "Error: No se ingreso un producto", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
		{	
			TipoProducto += "," + TBCrearBahiaProducto->Text;
			TipoProducto = TipoProducto->ToLower();
			CantProductos++;
		}
    }
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		BCrearBahiaIngresar->Enabled = false;
		BCrearBahiaOtroProduct->Enabled = true;
		BCrearBahiaNoIngresar->Enabled = true;
		BCrearBahiaNuevaBahia->Enabled = false;
		TBCrearBahiaFila->Text = "";
		TBCrearBahiaPesoMax->Text = "";
		TBCrearBahiaProducto->Text = "";
		TBCrearColumnaBahia->Text = "";
		TipoProducto = "";
    }
    private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		BCrearBahiaIngresar->Enabled = true;
		BCrearBahiaOtroProduct->Enabled = false;
		BCrearBahiaNoIngresar->Enabled = false;
		
    }
    private: System::Void BAlmacenarProduct_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		
		String^ CodigoAlmacenamiento;
		String^ TipoProducto;
		int PesoProducto, CantUnidades, PesoUtilizado, posicion = -1;
		int UltimoPeso, CantUnidadesSobrantes, CantUnidadesIngresadas, posicion2 = -1;
		String^ FechaAlmacenaje;
		String^ NombreResponsable;
		try
		{
			if (TBAlmacenarCantUnidades->Text == "" || TBAlmacenarFechaAlmacenaje->Text == "" || TBAlmacenarPesoProducto->Text == "" || TBAlmacenarProductoTipo->Text == "" || TBAlmacenarCodigoAlmacen->Text == "" || TBAlmacenarNombreRespon->Text == "")
			{
				MessageBox::Show("Ingrese todos los datos para almacenar el producto", "Error: Datos incompletos", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else
			{
				CodigoAlmacenamiento = TBAlmacenarCodigoAlmacen->Text;
				TipoProducto = TBAlmacenarProductoTipo->Text;
				array<String^>^ CodigoAlmacen = gcnew array<String^>(2);
				CodigoAlmacen = CodigoAlmacenamiento->Split('-');
				for (int i = 0; i < DGVBodega->Rows->Count; i++) //Pasar la letra de la fila a un entero
				{
					String^ Verificar = Convert::ToString(DGVBodega->Rows[i]->HeaderCell->Value);
					if (Verificar == CodigoAlmacen[0])
					{
						posicion = i;
						break;
					}
				}
				if (DGVBodega->Rows[posicion]->Cells[Convert::ToInt32(CodigoAlmacen[1])-1]->Value == nullptr) //Si no se encuentra vacío el espacio
				{
					MessageBox::Show("El espacio se encuentra vacía en la bodega", "ERROR: Espacio vacío", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else //Si la casilla se enceuntra con una bahía
				{
					for (int i = 0; i < ContBahias; i++)
					{
						if (CodigoAlmacenamiento == MisBahias[i]->GetID() && TipoProducto == MisBahias[i]->GetTipo())
						{
							
							PesoProducto = Convert::ToInt32(TBAlmacenarPesoProducto->Text);
							CantUnidades = Convert::ToInt32(TBAlmacenarCantUnidades->Text);
							FechaAlmacenaje = TBAlmacenarFechaAlmacenaje->Text;
							NombreResponsable = TBAlmacenarNombreRespon->Text;
							PesoUtilizado = PesoProducto * CantUnidades + MisBahias[i]->GetPesoUtilizado();
							if (PesoUtilizado < MisBahias[i]->GetPesoMax()) //Si el peso es menor al peso máximo
							{
								MisBahias[i]->SetPesoUtilizado(PesoUtilizado);
								MisAlmacenamientos[ContAlmacenamientos] = gcnew AlmacenarProducto(TipoProducto, CantUnidades, PesoProducto, FechaAlmacenaje, NombreResponsable);
								MisBahias[i]->SetPesoUtilizado(PesoUtilizado);
								ContAlmacenamientos++;
								MisBahias[i]->SetCantUnidades(CantUnidades);
								DGVBodega->Rows[posicion]->Cells[Convert::ToInt32(CodigoAlmacen[1]) - 1]->Value = MisBahias[i]->GetID()+ " Material: " + MisBahias[i]->GetTipo() + " Unidades:" + MisBahias[i]->GetCantUnidades() + " Peso Max: "+ MisBahias[i]->GetPesoMax() + " Peso Utilizado: " + MisBahias[i]->GetPesoUtilizado();
							}
							else // Si el peso se excedió 
							{
								for (int j = 0; j < CantUnidades; j++) //Para ingresar el máximo de peso a la bahía
								{
									PesoUtilizado = PesoProducto * i + MisBahias[i]->GetPesoUtilizado();
									if (PesoUtilizado < MisBahias[i]->GetPesoMax())
									{
										UltimoPeso = PesoUtilizado;
										CantUnidadesSobrantes = CantUnidades - i;
										CantUnidadesIngresadas = i;
									}
								}
								MisBahias[i]->SetPesoUtilizado(UltimoPeso);
								MisBahias[i]->SetCantUnidades(CantUnidadesIngresadas);
								DGVBodega->Rows[posicion]->Cells[Convert::ToInt32(CodigoAlmacen[1]) - 1]->Value = MisBahias[i]->GetID() + " Material: " + MisBahias[i]->GetTipo() + " Unidades:" + MisBahias[i]->GetCantUnidades() + " Peso Max: " + MisBahias[i]->GetPesoMax() + " Peso Utilizado: " + MisBahias[i]->GetPesoUtilizado();
								for (int j = 0; j < ContBahias; j++)//Ingresar el sobrante a otra bahía con el mismo producto
								{
									array<String^>^ CantidadProductos =  gcnew array<String^>(Convert::ToInt32(MisBahias[j]->GetTipo()->Split('-')));
									for (int k = 0; k < CantidadProductos->Length; k++)
									{
										if (CantidadProductos[k] == TipoProducto)
										{
											PesoUtilizado = PesoProducto * CantUnidadesSobrantes + MisBahias[j]->GetPesoUtilizado();
											if (PesoUtilizado < MisBahias[j]->GetPesoMax())
											{
												MisBahias[j]->SetPesoUtilizado(PesoUtilizado);
												for (int L = 0; L < DGVBodega->Rows->Count; L++) //Pasar la letra de la fila a un entero
												{
													String^ Verificar = Convert::ToString(DGVBodega->Rows[i]->HeaderCell->Value);
													array<String^>^ CodigoAlmacen2 = gcnew array<String^>(2);
													CodigoAlmacen2 = MisBahias[j]->GetID()->Split('-');
													if (Verificar == CodigoAlmacen2[L])
													{
														posicion2 = L;
														int ColumnBahia = Convert::ToInt32(CodigoAlmacen2[1]);
														MisBahias[j]->SetCantUnidades(CantUnidadesSobrantes);
														DGVBodega->Rows[posicion2]->Cells[ColumnBahia - 1]->Value = MisBahias[j]->GetID() + " Material: " + MisBahias[j]->GetTipo() + " Unidades:" + MisBahias[j]->GetCantUnidades() + " Peso Max: " + MisBahias[j]->GetPesoMax() + " Peso Utilizado: " + MisBahias[j]->GetPesoUtilizado();
														break;
													}
												}
											}
										}
									}
								}

							}
							break;
						}
					}
				}
				
			}
		}
		catch (...)
		{

		}
    }
    //Retirar un producto
    private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
		
    }
};
}
