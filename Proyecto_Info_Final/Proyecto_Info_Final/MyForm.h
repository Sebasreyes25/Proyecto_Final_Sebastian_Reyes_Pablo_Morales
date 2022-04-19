#pragma once
#include "Ingenieria.h"
#include <iostream>
#include <string>

namespace ProyectoInfoFinal {

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
	private: System::Windows::Forms::Label^ lbl1;
	protected:
	private: System::Windows::Forms::Label^ lbl2;
	private: System::Windows::Forms::Label^ lbl3;
	private: System::Windows::Forms::TextBox^ tbx1;
	private: System::Windows::Forms::TextBox^ tbx2;
	private: System::Windows::Forms::Label^ lbl4;
	private: System::Windows::Forms::Label^ lbl5;
	private: System::Windows::Forms::Label^ lbl6;
	private: System::Windows::Forms::Label^ lbl7;
	private: System::Windows::Forms::Label^ lbl8;
	private: System::Windows::Forms::TextBox^ tbx3;
	private: System::Windows::Forms::TextBox^ tbx4;
	private: System::Windows::Forms::TextBox^ tbx5;
	private: System::Windows::Forms::TextBox^ tbx6;
	private: System::Windows::Forms::Label^ lbl9;
	private: System::Windows::Forms::Label^ lbl10;
	private: System::Windows::Forms::Label^ lbl11;
	private: System::Windows::Forms::TextBox^ tbx7;
	private: System::Windows::Forms::TextBox^ tbx8;
	private: System::Windows::Forms::Button^ bt1;
	private: System::Windows::Forms::Label^ lbl12;
	private: System::Windows::Forms::Label^ lbl13;
	private: System::Windows::Forms::Label^ lbl14;
	private: System::Windows::Forms::Label^ lbl15;
	private: System::Windows::Forms::Label^ lbl16;
	private: System::Windows::Forms::Label^ lbl17;
	private: System::Windows::Forms::Label^ lbl18;
	private: System::Windows::Forms::Label^ lbl19;
	private: System::Windows::Forms::Label^ lbl20;
	private: System::Windows::Forms::Label^ lbl21;
	private: System::Windows::Forms::Label^ lbl22;
	private: System::Windows::Forms::TextBox^ tbx9;
	private: System::Windows::Forms::Button^ bt2;

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
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->lbl2 = (gcnew System::Windows::Forms::Label());
			this->lbl3 = (gcnew System::Windows::Forms::Label());
			this->tbx1 = (gcnew System::Windows::Forms::TextBox());
			this->tbx2 = (gcnew System::Windows::Forms::TextBox());
			this->lbl4 = (gcnew System::Windows::Forms::Label());
			this->lbl5 = (gcnew System::Windows::Forms::Label());
			this->lbl6 = (gcnew System::Windows::Forms::Label());
			this->lbl7 = (gcnew System::Windows::Forms::Label());
			this->lbl8 = (gcnew System::Windows::Forms::Label());
			this->tbx3 = (gcnew System::Windows::Forms::TextBox());
			this->tbx4 = (gcnew System::Windows::Forms::TextBox());
			this->tbx5 = (gcnew System::Windows::Forms::TextBox());
			this->tbx6 = (gcnew System::Windows::Forms::TextBox());
			this->lbl9 = (gcnew System::Windows::Forms::Label());
			this->lbl10 = (gcnew System::Windows::Forms::Label());
			this->lbl11 = (gcnew System::Windows::Forms::Label());
			this->tbx7 = (gcnew System::Windows::Forms::TextBox());
			this->tbx8 = (gcnew System::Windows::Forms::TextBox());
			this->bt1 = (gcnew System::Windows::Forms::Button());
			this->lbl12 = (gcnew System::Windows::Forms::Label());
			this->lbl13 = (gcnew System::Windows::Forms::Label());
			this->lbl14 = (gcnew System::Windows::Forms::Label());
			this->lbl15 = (gcnew System::Windows::Forms::Label());
			this->lbl16 = (gcnew System::Windows::Forms::Label());
			this->lbl17 = (gcnew System::Windows::Forms::Label());
			this->lbl18 = (gcnew System::Windows::Forms::Label());
			this->lbl19 = (gcnew System::Windows::Forms::Label());
			this->lbl20 = (gcnew System::Windows::Forms::Label());
			this->lbl21 = (gcnew System::Windows::Forms::Label());
			this->lbl22 = (gcnew System::Windows::Forms::Label());
			this->tbx9 = (gcnew System::Windows::Forms::TextBox());
			this->bt2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->Location = System::Drawing::Point(164, 31);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(151, 20);
			this->lbl1->TabIndex = 0;
			this->lbl1->Text = L"Informacion Alumno";
			// 
			// lbl2
			// 
			this->lbl2->AutoSize = true;
			this->lbl2->Location = System::Drawing::Point(134, 79);
			this->lbl2->Name = L"lbl2";
			this->lbl2->Size = System::Drawing::Size(65, 20);
			this->lbl2->TabIndex = 1;
			this->lbl2->Text = L"Nombre";
			// 
			// lbl3
			// 
			this->lbl3->AutoSize = true;
			this->lbl3->Location = System::Drawing::Point(134, 126);
			this->lbl3->Name = L"lbl3";
			this->lbl3->Size = System::Drawing::Size(79, 20);
			this->lbl3->TabIndex = 2;
			this->lbl3->Text = L"Ingenieria";
			// 
			// tbx1
			// 
			this->tbx1->Location = System::Drawing::Point(244, 79);
			this->tbx1->Name = L"tbx1";
			this->tbx1->Size = System::Drawing::Size(100, 26);
			this->tbx1->TabIndex = 3;
			// 
			// tbx2
			// 
			this->tbx2->Location = System::Drawing::Point(244, 126);
			this->tbx2->Name = L"tbx2";
			this->tbx2->Size = System::Drawing::Size(100, 26);
			this->tbx2->TabIndex = 4;
			// 
			// lbl4
			// 
			this->lbl4->AutoSize = true;
			this->lbl4->Location = System::Drawing::Point(168, 200);
			this->lbl4->Name = L"lbl4";
			this->lbl4->Size = System::Drawing::Size(147, 20);
			this->lbl4->TabIndex = 5;
			this->lbl4->Text = L"Informacion carrera";
			// 
			// lbl5
			// 
			this->lbl5->AutoSize = true;
			this->lbl5->Location = System::Drawing::Point(62, 244);
			this->lbl5->Name = L"lbl5";
			this->lbl5->Size = System::Drawing::Size(150, 20);
			this->lbl5->TabIndex = 6;
			this->lbl5->Text = L"Numero de Creditos";
			// 
			// lbl6
			// 
			this->lbl6->AutoSize = true;
			this->lbl6->Location = System::Drawing::Point(62, 294);
			this->lbl6->Name = L"lbl6";
			this->lbl6->Size = System::Drawing::Size(139, 20);
			this->lbl6->TabIndex = 7;
			this->lbl6->Text = L"Numero de Clases";
			// 
			// lbl7
			// 
			this->lbl7->AutoSize = true;
			this->lbl7->Location = System::Drawing::Point(62, 344);
			this->lbl7->Name = L"lbl7";
			this->lbl7->Size = System::Drawing::Size(126, 20);
			this->lbl7->TabIndex = 8;
			this->lbl7->Text = L"Valor del Credito";
			// 
			// lbl8
			// 
			this->lbl8->AutoSize = true;
			this->lbl8->Location = System::Drawing::Point(62, 396);
			this->lbl8->Name = L"lbl8";
			this->lbl8->Size = System::Drawing::Size(168, 20);
			this->lbl8->TabIndex = 9;
			this->lbl8->Text = L"Numero de Semestres";
			// 
			// tbx3
			// 
			this->tbx3->Location = System::Drawing::Point(258, 244);
			this->tbx3->Name = L"tbx3";
			this->tbx3->Size = System::Drawing::Size(100, 26);
			this->tbx3->TabIndex = 10;
			// 
			// tbx4
			// 
			this->tbx4->Location = System::Drawing::Point(258, 294);
			this->tbx4->Name = L"tbx4";
			this->tbx4->Size = System::Drawing::Size(100, 26);
			this->tbx4->TabIndex = 11;
			// 
			// tbx5
			// 
			this->tbx5->Location = System::Drawing::Point(258, 344);
			this->tbx5->Name = L"tbx5";
			this->tbx5->Size = System::Drawing::Size(100, 26);
			this->tbx5->TabIndex = 12;
			// 
			// tbx6
			// 
			this->tbx6->Location = System::Drawing::Point(258, 396);
			this->tbx6->Name = L"tbx6";
			this->tbx6->Size = System::Drawing::Size(100, 26);
			this->tbx6->TabIndex = 13;
			// 
			// lbl9
			// 
			this->lbl9->AutoSize = true;
			this->lbl9->Location = System::Drawing::Point(569, 31);
			this->lbl9->Name = L"lbl9";
			this->lbl9->Size = System::Drawing::Size(134, 20);
			this->lbl9->TabIndex = 14;
			this->lbl9->Text = L"Informacion Beca";
			// 
			// lbl10
			// 
			this->lbl10->AutoSize = true;
			this->lbl10->Location = System::Drawing::Point(497, 79);
			this->lbl10->Name = L"lbl10";
			this->lbl10->Size = System::Drawing::Size(93, 20);
			this->lbl10->TabIndex = 15;
			this->lbl10->Text = L"Horas Beca";
			// 
			// lbl11
			// 
			this->lbl11->AutoSize = true;
			this->lbl11->Location = System::Drawing::Point(497, 126);
			this->lbl11->Name = L"lbl11";
			this->lbl11->Size = System::Drawing::Size(146, 20);
			this->lbl11->TabIndex = 16;
			this->lbl11->Text = L"Porcentaje de beca";
			// 
			// tbx7
			// 
			this->tbx7->Location = System::Drawing::Point(656, 76);
			this->tbx7->Name = L"tbx7";
			this->tbx7->Size = System::Drawing::Size(100, 26);
			this->tbx7->TabIndex = 17;
			// 
			// tbx8
			// 
			this->tbx8->Location = System::Drawing::Point(656, 126);
			this->tbx8->Name = L"tbx8";
			this->tbx8->Size = System::Drawing::Size(100, 26);
			this->tbx8->TabIndex = 18;
			// 
			// bt1
			// 
			this->bt1->Location = System::Drawing::Point(586, 190);
			this->bt1->Name = L"bt1";
			this->bt1->Size = System::Drawing::Size(127, 74);
			this->bt1->TabIndex = 19;
			this->bt1->Text = L"Guardar Informacion";
			this->bt1->UseVisualStyleBackColor = true;
			this->bt1->Click += gcnew System::EventHandler(this, &MyForm::bt1_Click);
			// 
			// lbl12
			// 
			this->lbl12->AutoSize = true;
			this->lbl12->Location = System::Drawing::Point(372, 81);
			this->lbl12->Name = L"lbl12";
			this->lbl12->Size = System::Drawing::Size(21, 20);
			this->lbl12->TabIndex = 20;
			this->lbl12->Text = L"...";
			// 
			// lbl13
			// 
			this->lbl13->AutoSize = true;
			this->lbl13->Location = System::Drawing::Point(372, 132);
			this->lbl13->Name = L"lbl13";
			this->lbl13->Size = System::Drawing::Size(21, 20);
			this->lbl13->TabIndex = 21;
			this->lbl13->Text = L"...";
			// 
			// lbl14
			// 
			this->lbl14->AutoSize = true;
			this->lbl14->Location = System::Drawing::Point(386, 249);
			this->lbl14->Name = L"lbl14";
			this->lbl14->Size = System::Drawing::Size(21, 20);
			this->lbl14->TabIndex = 22;
			this->lbl14->Text = L"...";
			// 
			// lbl15
			// 
			this->lbl15->AutoSize = true;
			this->lbl15->Location = System::Drawing::Point(386, 300);
			this->lbl15->Name = L"lbl15";
			this->lbl15->Size = System::Drawing::Size(21, 20);
			this->lbl15->TabIndex = 23;
			this->lbl15->Text = L"...";
			// 
			// lbl16
			// 
			this->lbl16->AutoSize = true;
			this->lbl16->Location = System::Drawing::Point(386, 350);
			this->lbl16->Name = L"lbl16";
			this->lbl16->Size = System::Drawing::Size(21, 20);
			this->lbl16->TabIndex = 24;
			this->lbl16->Text = L"...";
			// 
			// lbl17
			// 
			this->lbl17->AutoSize = true;
			this->lbl17->Location = System::Drawing::Point(386, 399);
			this->lbl17->Name = L"lbl17";
			this->lbl17->Size = System::Drawing::Size(21, 20);
			this->lbl17->TabIndex = 25;
			this->lbl17->Text = L"...";
			// 
			// lbl18
			// 
			this->lbl18->AutoSize = true;
			this->lbl18->Location = System::Drawing::Point(796, 79);
			this->lbl18->Name = L"lbl18";
			this->lbl18->Size = System::Drawing::Size(21, 20);
			this->lbl18->TabIndex = 26;
			this->lbl18->Text = L"...";
			// 
			// lbl19
			// 
			this->lbl19->AutoSize = true;
			this->lbl19->Location = System::Drawing::Point(796, 132);
			this->lbl19->Name = L"lbl19";
			this->lbl19->Size = System::Drawing::Size(21, 20);
			this->lbl19->TabIndex = 27;
			this->lbl19->Text = L"...";
			// 
			// lbl20
			// 
			this->lbl20->AutoSize = true;
			this->lbl20->Location = System::Drawing::Point(492, 334);
			this->lbl20->Name = L"lbl20";
			this->lbl20->Size = System::Drawing::Size(166, 20);
			this->lbl20->TabIndex = 28;
			this->lbl20->Text = L"Parqueo por semestre";
			// 
			// lbl21
			// 
			this->lbl21->AutoSize = true;
			this->lbl21->Location = System::Drawing::Point(582, 294);
			this->lbl21->Name = L"lbl21";
			this->lbl21->Size = System::Drawing::Size(196, 20);
			this->lbl21->TabIndex = 29;
			this->lbl21->Text = L"Informacion Administrativa";
			// 
			// lbl22
			// 
			this->lbl22->AutoSize = true;
			this->lbl22->Location = System::Drawing::Point(811, 340);
			this->lbl22->Name = L"lbl22";
			this->lbl22->Size = System::Drawing::Size(21, 20);
			this->lbl22->TabIndex = 30;
			this->lbl22->Text = L"...";
			// 
			// tbx9
			// 
			this->tbx9->Location = System::Drawing::Point(684, 334);
			this->tbx9->Name = L"tbx9";
			this->tbx9->Size = System::Drawing::Size(100, 26);
			this->tbx9->TabIndex = 31;
			// 
			// bt2
			// 
			this->bt2->Location = System::Drawing::Point(586, 396);
			this->bt2->Name = L"bt2";
			this->bt2->Size = System::Drawing::Size(127, 78);
			this->bt2->TabIndex = 32;
			this->bt2->Text = L"Costo Parqueo Total";
			this->bt2->UseVisualStyleBackColor = true;
			this->bt2->Click += gcnew System::EventHandler(this, &MyForm::bt2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(847, 532);
			this->Controls->Add(this->bt2);
			this->Controls->Add(this->tbx9);
			this->Controls->Add(this->lbl22);
			this->Controls->Add(this->lbl21);
			this->Controls->Add(this->lbl20);
			this->Controls->Add(this->lbl19);
			this->Controls->Add(this->lbl18);
			this->Controls->Add(this->lbl17);
			this->Controls->Add(this->lbl16);
			this->Controls->Add(this->lbl15);
			this->Controls->Add(this->lbl14);
			this->Controls->Add(this->lbl13);
			this->Controls->Add(this->lbl12);
			this->Controls->Add(this->bt1);
			this->Controls->Add(this->tbx8);
			this->Controls->Add(this->tbx7);
			this->Controls->Add(this->lbl11);
			this->Controls->Add(this->lbl10);
			this->Controls->Add(this->lbl9);
			this->Controls->Add(this->tbx6);
			this->Controls->Add(this->tbx5);
			this->Controls->Add(this->tbx4);
			this->Controls->Add(this->tbx3);
			this->Controls->Add(this->lbl8);
			this->Controls->Add(this->lbl7);
			this->Controls->Add(this->lbl6);
			this->Controls->Add(this->lbl5);
			this->Controls->Add(this->lbl4);
			this->Controls->Add(this->tbx2);
			this->Controls->Add(this->tbx1);
			this->Controls->Add(this->lbl3);
			this->Controls->Add(this->lbl2);
			this->Controls->Add(this->lbl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void bt1_Click(System::Object^ sender, System::EventArgs^ e) {
		Ingenieria datosingenieria;
		System::String^ nombrealum;
		System::String^ ingenieria;
		int numcreditos;
		int cantclases;
		int valorcredito;
		int horasbeca;
		int numsemestres;
		int beca;
		nombrealum = tbx1->Text;
		ingenieria = tbx2->Text;
		numcreditos = Convert::ToInt16(tbx3->Text);
		cantclases = Convert::ToInt16(tbx4->Text);
		valorcredito = Convert::ToInt16(tbx5->Text);
		numsemestres = Convert::ToInt16(tbx6->Text);
		horasbeca = Convert::ToInt16(tbx7->Text);
		beca = Convert::ToInt16(tbx8->Text);

		datosingenieria.setnombrealum(nombrealum);
		datosingenieria.setingenieria(ingenieria);
		datosingenieria.setnumcreditos(numcreditos);
		datosingenieria.setcantclases(cantclases);
		datosingenieria.setvalorcredito(valorcredito);
		datosingenieria.setnumsemestres(numsemestres);
		datosingenieria.sethorasbeca(horasbeca);
		datosingenieria.setbeca(beca);

		lbl12->Text = datosingenieria.getnombrealum();
		lbl13->Text = datosingenieria.getingenieria();
		lbl14->Text = "" + datosingenieria.getnumcrditos();
		lbl15->Text = "" + datosingenieria.getcantclases();
		lbl16->Text = "" + datosingenieria.getvalorcredito();
		lbl17->Text = "" + datosingenieria.getnumsemestres();
		lbl18->Text = "" + datosingenieria.gethorasbeca();
		lbl19->Text = "" + datosingenieria.getbeca();

			
	}
private: System::Void bt2_Click(System::Object^ sender, System::EventArgs^ e) {
	Ingenieria parqueo;
	float cuotaparqueo;
	float parqueototal;
	int numsemestres;
	cuotaparqueo = Convert::ToInt16(tbx9->Text);
	parqueo.setcuotaparqueo(cuotaparqueo);
	numsemestres = Convert::ToInt16(tbx6->Text);
	parqueo.setnumsemestres(numsemestres);
	// lbl22->Text = "" + parqueo.getcuotaparqueo();
	// std::cout << "Ingrese el numero de semestres";
	parqueototal = parqueo.getcuotaparqueo() * parqueo.getnumsemestres();
	lbl22->Text = "" + parqueototal;
	
}
};
}
