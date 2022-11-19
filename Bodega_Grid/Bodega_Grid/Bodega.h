#pragma once

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
	private: System::Windows::Forms::ComboBox^ CBElegirOpcion;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ TBBodegaFila;
	private: System::Windows::Forms::TextBox^ TBBodegaColumn;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ BIngresarBodega;

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
			this->CBElegirOpcion = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->TBBodegaFila = (gcnew System::Windows::Forms::TextBox());
			this->TBBodegaColumn = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->BIngresarBodega = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGVBodega))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(63, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(288, 44);
			this->label1->TabIndex = 0;
			this->label1->Text = L"BODEGA GRID";
			// 
			// DGVBodega
			// 
			this->DGVBodega->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DGVBodega->Location = System::Drawing::Point(63, 164);
			this->DGVBodega->Name = L"DGVBodega";
			this->DGVBodega->ReadOnly = true;
			this->DGVBodega->Size = System::Drawing::Size(288, 183);
			this->DGVBodega->TabIndex = 1;
			// 
			// CBElegirOpcion
			// 
			this->CBElegirOpcion->Enabled = false;
			this->CBElegirOpcion->FormattingEnabled = true;
			this->CBElegirOpcion->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Crear Bahía", L"Almacenar Producto", L"Retirar Producto",
					L"Eliminar Bahía", L"Inventario", L"Bodegas"
			});
			this->CBElegirOpcion->Location = System::Drawing::Point(12, 127);
			this->CBElegirOpcion->Name = L"CBElegirOpcion";
			this->CBElegirOpcion->Size = System::Drawing::Size(121, 21);
			this->CBElegirOpcion->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(0, 77);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(159, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Ingrese el tamaño de la bodega:";
			// 
			// TBBodegaFila
			// 
			this->TBBodegaFila->Location = System::Drawing::Point(165, 75);
			this->TBBodegaFila->Name = L"TBBodegaFila";
			this->TBBodegaFila->Size = System::Drawing::Size(47, 20);
			this->TBBodegaFila->TabIndex = 4;
			// 
			// TBBodegaColumn
			// 
			this->TBBodegaColumn->Location = System::Drawing::Point(228, 75);
			this->TBBodegaColumn->Name = L"TBBodegaColumn";
			this->TBBodegaColumn->Size = System::Drawing::Size(47, 20);
			this->TBBodegaColumn->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(165, 59);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Filas:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(225, 59);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Columnas:";
			// 
			// BIngresarBodega
			// 
			this->BIngresarBodega->Location = System::Drawing::Point(287, 72);
			this->BIngresarBodega->Name = L"BIngresarBodega";
			this->BIngresarBodega->Size = System::Drawing::Size(75, 23);
			this->BIngresarBodega->TabIndex = 8;
			this->BIngresarBodega->Text = L"Ingresar";
			this->BIngresarBodega->UseVisualStyleBackColor = true;
			this->BIngresarBodega->Click += gcnew System::EventHandler(this, &Bodega::button1_Click);
			// 
			// Bodega
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(431, 359);
			this->Controls->Add(this->BIngresarBodega);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->TBBodegaColumn);
			this->Controls->Add(this->TBBodegaFila);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->CBElegirOpcion);
			this->Controls->Add(this->DGVBodega);
			this->Controls->Add(this->label1);
			this->Name = L"Bodega";
			this->Text = L"Bodega";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGVBodega))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int Fila, Columna;
		try
		{
			array<String^>^ Abecedario = { "A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
			if (TBBodegaFila->Text == "" || TBBodegaColumn->Text == "")
			{
				MessageBox::Show("Ingrese las filas o columnas de la bodega", "Error: Bodega no ingresada", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else
			{
				Fila = Convert::ToInt32(TBBodegaFila->Text);
				Columna = Convert::ToInt32(TBBodegaColumn->Text);
				for (int i = 0; i < Columna; i++)
				{
					DataGridViewTextBoxColumn^ columnaHeader = gcnew DataGridViewTextBoxColumn();
					columnaHeader->HeaderText = Convert::ToString(i + 1);
					DGVBodega->Columns->Add(columnaHeader);
				}
				for (int i = 0; i < Fila; i++)
				{
					DGVBodega->Rows->Add();
					DGVBodega->Rows[i]->HeaderCell->Value = Abecedario[i];
				}
				
				
			}
		}
		catch (...)
		{

		}
	}
};
}
