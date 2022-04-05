#pragma once

#include <string>
#include <msclr\marshal_cppstd.h>
#include <msclr/marshal.h>
#include <iostream>
#include "Presupuesto.h" 

namespace ProyectoFinalInformaticaII {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;
	using namespace System::Collections::Generic;
	using namespace System::Text;
	using namespace System::Threading::Tasks;
	using namespace std;

	int horas;
	std::string nom;
	int precio;

	int contador = 0;


	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ cmbIngenierias;
	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnEliminar;

	private: System::Windows::Forms::Button^ btnAgregar;

	private: System::Windows::Forms::TextBox^ tbxPorcentaje;
	private: System::Windows::Forms::DataGridView^ dvgLista;



	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ lblPresupuesto;
	private: System::Windows::Forms::Label^ lblPre;
	private: System::Windows::Forms::Label^ lblNom;



	private: System::Windows::Forms::Label^ lblCod;



	private: System::Windows::Forms::Label^ lblPorcentaje;
	private: System::Windows::Forms::Label^ lblPrecio;
	private: System::Windows::Forms::Label^ lblNombre;
	private: System::Windows::Forms::Label^ lblHoras;
	private: System::Windows::Forms::Label^ lblIngenieria;
	private: System::Windows::Forms::Label^ lblTitulo;

	private: System::Windows::Forms::Button^ btnGuardar;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;







	protected:

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
			this->cmbIngenierias = (gcnew System::Windows::Forms::ComboBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->btnAgregar = (gcnew System::Windows::Forms::Button());
			this->tbxPorcentaje = (gcnew System::Windows::Forms::TextBox());
			this->dvgLista = (gcnew System::Windows::Forms::DataGridView());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->lblPresupuesto = (gcnew System::Windows::Forms::Label());
			this->lblPre = (gcnew System::Windows::Forms::Label());
			this->lblNom = (gcnew System::Windows::Forms::Label());
			this->lblCod = (gcnew System::Windows::Forms::Label());
			this->lblPorcentaje = (gcnew System::Windows::Forms::Label());
			this->lblPrecio = (gcnew System::Windows::Forms::Label());
			this->lblNombre = (gcnew System::Windows::Forms::Label());
			this->lblHoras = (gcnew System::Windows::Forms::Label());
			this->lblIngenieria = (gcnew System::Windows::Forms::Label());
			this->lblTitulo = (gcnew System::Windows::Forms::Label());
			this->btnGuardar = (gcnew System::Windows::Forms::Button());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dvgLista))->BeginInit();
			this->SuspendLayout();
			// 
			// cmbIngenierias
			// 
			this->cmbIngenierias->FormattingEnabled = true;
			this->cmbIngenierias->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Ingeniería en Sistemas", L"Ingeniería Comercial",
					L"Ingeniería Industrial ", L"Ingeniería Electrónica y Telecomunicaciones "
			});
			this->cmbIngenierias->Location = System::Drawing::Point(98, 33);
			this->cmbIngenierias->Name = L"cmbIngenierias";
			this->cmbIngenierias->Size = System::Drawing::Size(250, 21);
			this->cmbIngenierias->TabIndex = 0;
			this->cmbIngenierias->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cmbIngenierias_SelectedIndexChanged);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->btnEliminar);
			this->panel1->Controls->Add(this->btnAgregar);
			this->panel1->Controls->Add(this->tbxPorcentaje);
			this->panel1->Controls->Add(this->dvgLista);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->lblPresupuesto);
			this->panel1->Controls->Add(this->lblPre);
			this->panel1->Controls->Add(this->lblNom);
			this->panel1->Controls->Add(this->lblCod);
			this->panel1->Controls->Add(this->lblPorcentaje);
			this->panel1->Controls->Add(this->lblPrecio);
			this->panel1->Controls->Add(this->lblNombre);
			this->panel1->Controls->Add(this->lblHoras);
			this->panel1->Controls->Add(this->lblIngenieria);
			this->panel1->Controls->Add(this->cmbIngenierias);
			this->panel1->Location = System::Drawing::Point(161, 36);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(438, 320);
			this->panel1->TabIndex = 1;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(74, 290);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(10, 13);
			this->label12->TabIndex = 17;
			this->label12->Text = L"-";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(74, 256);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 13);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Parqueo:";
			// 
			// btnEliminar
			// 
			this->btnEliminar->Location = System::Drawing::Point(345, 77);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(75, 23);
			this->btnEliminar->TabIndex = 15;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = true;
			// 
			// btnAgregar
			// 
			this->btnAgregar->Location = System::Drawing::Point(248, 77);
			this->btnAgregar->Name = L"btnAgregar";
			this->btnAgregar->Size = System::Drawing::Size(75, 23);
			this->btnAgregar->TabIndex = 14;
			this->btnAgregar->Text = L"Agregar";
			this->btnAgregar->UseVisualStyleBackColor = true;
			this->btnAgregar->Click += gcnew System::EventHandler(this, &MyForm::btnAgregar_Click);
			// 
			// tbxPorcentaje
			// 
			this->tbxPorcentaje->Location = System::Drawing::Point(98, 122);
			this->tbxPorcentaje->Name = L"tbxPorcentaje";
			this->tbxPorcentaje->Size = System::Drawing::Size(100, 20);
			this->tbxPorcentaje->TabIndex = 13;
			// 
			// dvgLista
			// 
			this->dvgLista->AllowUserToAddRows = false;
			this->dvgLista->AllowUserToDeleteRows = false;
			this->dvgLista->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dvgLista->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dvgLista->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1, this->Column2,
					this->Column3, this->Column4, this->Column5
			});
			this->dvgLista->Location = System::Drawing::Point(0, 148);
			this->dvgLista->Name = L"dvgLista";
			this->dvgLista->ReadOnly = true;
			this->dvgLista->RowHeadersVisible = false;
			this->dvgLista->Size = System::Drawing::Size(438, 105);
			this->dvgLista->TabIndex = 12;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(282, 290);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(10, 13);
			this->label11->TabIndex = 11;
			this->label11->Text = L"-";
			// 
			// lblPresupuesto
			// 
			this->lblPresupuesto->AutoSize = true;
			this->lblPresupuesto->Location = System::Drawing::Point(282, 256);
			this->lblPresupuesto->Name = L"lblPresupuesto";
			this->lblPresupuesto->Size = System::Drawing::Size(96, 13);
			this->lblPresupuesto->TabIndex = 10;
			this->lblPresupuesto->Text = L"Presupuesto Total:";
			// 
			// lblPre
			// 
			this->lblPre->AutoSize = true;
			this->lblPre->Location = System::Drawing::Point(95, 105);
			this->lblPre->Name = L"lblPre";
			this->lblPre->Size = System::Drawing::Size(10, 13);
			this->lblPre->TabIndex = 8;
			this->lblPre->Text = L"-";
			this->lblPre->Click += gcnew System::EventHandler(this, &MyForm::lblPre_Click);
			// 
			// lblNom
			// 
			this->lblNom->AutoSize = true;
			this->lblNom->Location = System::Drawing::Point(95, 82);
			this->lblNom->Name = L"lblNom";
			this->lblNom->Size = System::Drawing::Size(10, 13);
			this->lblNom->TabIndex = 7;
			this->lblNom->Text = L"-";
			// 
			// lblCod
			// 
			this->lblCod->AutoSize = true;
			this->lblCod->Location = System::Drawing::Point(95, 59);
			this->lblCod->Name = L"lblCod";
			this->lblCod->Size = System::Drawing::Size(10, 13);
			this->lblCod->TabIndex = 6;
			this->lblCod->Text = L"-";
			// 
			// lblPorcentaje
			// 
			this->lblPorcentaje->AutoSize = true;
			this->lblPorcentaje->Location = System::Drawing::Point(16, 130);
			this->lblPorcentaje->Name = L"lblPorcentaje";
			this->lblPorcentaje->Size = System::Drawing::Size(46, 13);
			this->lblPorcentaje->TabIndex = 5;
			this->lblPorcentaje->Text = L"% Beca:";
			// 
			// lblPrecio
			// 
			this->lblPrecio->AutoSize = true;
			this->lblPrecio->Location = System::Drawing::Point(16, 105);
			this->lblPrecio->Name = L"lblPrecio";
			this->lblPrecio->Size = System::Drawing::Size(40, 13);
			this->lblPrecio->TabIndex = 4;
			this->lblPrecio->Text = L"Precio:";
			// 
			// lblNombre
			// 
			this->lblNombre->AutoSize = true;
			this->lblNombre->Location = System::Drawing::Point(16, 82);
			this->lblNombre->Name = L"lblNombre";
			this->lblNombre->Size = System::Drawing::Size(47, 13);
			this->lblNombre->TabIndex = 3;
			this->lblNombre->Text = L"Nombre:";
			// 
			// lblHoras
			// 
			this->lblHoras->AutoSize = true;
			this->lblHoras->Location = System::Drawing::Point(16, 59);
			this->lblHoras->Name = L"lblHoras";
			this->lblHoras->Size = System::Drawing::Size(66, 13);
			this->lblHoras->TabIndex = 2;
			this->lblHoras->Text = L"Horas Beca:";
			// 
			// lblIngenieria
			// 
			this->lblIngenieria->AutoSize = true;
			this->lblIngenieria->Location = System::Drawing::Point(16, 36);
			this->lblIngenieria->Name = L"lblIngenieria";
			this->lblIngenieria->Size = System::Drawing::Size(58, 13);
			this->lblIngenieria->TabIndex = 1;
			this->lblIngenieria->Text = L"Ingeniería:";
			// 
			// lblTitulo
			// 
			this->lblTitulo->AutoSize = true;
			this->lblTitulo->Location = System::Drawing::Point(305, 9);
			this->lblTitulo->Name = L"lblTitulo";
			this->lblTitulo->Size = System::Drawing::Size(148, 13);
			this->lblTitulo->TabIndex = 9;
			this->lblTitulo->Text = L"Cálculo de Presupuesto UNIS";
			// 
			// btnGuardar
			// 
			this->btnGuardar->Location = System::Drawing::Point(354, 362);
			this->btnGuardar->Name = L"btnGuardar";
			this->btnGuardar->Size = System::Drawing::Size(75, 23);
			this->btnGuardar->TabIndex = 15;
			this->btnGuardar->Text = L"Guardar";
			this->btnGuardar->UseVisualStyleBackColor = true;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Horas Beca";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Ingeniería";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Precio";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"% Beca";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Total";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(729, 413);
			this->Controls->Add(this->btnGuardar);
			this->Controls->Add(this->lblTitulo);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"Presupuesto UNIS";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dvgLista))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void cmbIngenierias_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	int horas = stoi(marshal_as<string>(cmbIngenierias->SelectedIndex));
	string nom = marshal_as<string>(cmbIngenierias->SelectedItem);
	int precio = stoi(marshal_as<string>(cmbIngenierias->SelectedIndex));

	switch (horas)
	{
	case 0: lblCod->Text = "20 horas p/semestre "; break;
	case 1: lblCod->Text = "20 horas p/semestre"; break;
	case 2: lblCod->Text = "20 horas p/semestre"; break;
	default: lblCod->Text = "20 horas p/semestre"; break;
	}

	if (nom == "Ingeniería en Sistemas")
	{
		lblNom->Text = L"Ingeniería en Sistemas";
	}
	else if (nom == "Ingeniería Comercial")
	{
		lblNom->Text = L"Ingeniería Comercial";
	}
	else if (nom == "Ingeniería Industrial ")
	{
		lblNom->Text = L"Ingeniería Industrial ";
	}
	else
	{
		lblNom->Text = L"Ingeniería Electrónica y Telecomunicaciones ";
	}
	/*
	switch (nom)
	{
	case  "Sistemas": lblNombre->Text = "Sistemas"; break;
	case "Comercial": lblNombre->Text = "Comercial"; break;
	case "Industrial": lblNombre->Text = "Industrial"; break;
	default: lblNombre->Text = "Electrónica y Telecomunicaciones"; break;
	}
	*/
	switch (precio)
	{
	case 0: lblPre->Text = "248,000"; break;
	case 1: lblPre->Text = "246,400"; break;
	case 2: lblPre->Text = "244,800"; break;
	default: lblPre->Text = "251.200"; break;
	}


}

	private: System::Void btnAgregar_Click(System::Object^ sender, System::EventArgs^ e) {


	}





private: System::Void lblPre_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
};
