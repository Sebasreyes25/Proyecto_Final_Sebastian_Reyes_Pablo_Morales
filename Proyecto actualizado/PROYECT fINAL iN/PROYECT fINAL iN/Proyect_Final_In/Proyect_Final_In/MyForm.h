#pragma once
#include "IngenieriaSistemas.h"
#include "IngenieriaComercial.h"
#include "IngenieriaIndustrial.h"
#include "IngenieriaElect.h"


namespace ProyectFinalIn {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Button^ button4;
	protected:
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;

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
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(636, 211);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(119, 53);
			this->button4->TabIndex = 13;
			this->button4->Text = L"Ingenieria electronica";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(464, 211);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(122, 53);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Ingenieria industrial";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(291, 211);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(127, 53);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Ingenieria comercial";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(52, 130);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(366, 20);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Para comenzar seleccione la ingenieria que desea:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(52, 92);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(638, 20);
			this->label2->TabIndex = 9;
			this->label2->Text = L"En este proyecto van a poder conocer el precio de cada una de las carreras de ing"
				L"enieria ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(52, 55);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(239, 20);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Buen dia, es un gusto ayudarlos,";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(109, 211);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(133, 53);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Ingenieria en sistemas";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(840, 464);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		ProyectFinalIn::IngenieriaSistemas^ Myform = gcnew ProyectFinalIn::IngenieriaSistemas();
		Myform->ShowDialog();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	ProyectFinalIn::IngenieriaComercial^ Myform = gcnew ProyectFinalIn::IngenieriaComercial();
	Myform->ShowDialog();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	ProyectFinalIn::IngenieriaIndustrial^ Myform = gcnew ProyectFinalIn::IngenieriaIndustrial();
	Myform->ShowDialog();
}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	ProyectFinalIn::IngenieriaElect^ Myform = gcnew ProyectFinalIn::IngenieriaElect();
	Myform->ShowDialog();
}
};
}
