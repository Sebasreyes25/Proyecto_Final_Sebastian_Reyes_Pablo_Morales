#pragma once
#include "Ingenieria.h"
#include <iostream>
#include <string>

namespace ProyectFinalIn {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de IngenieriaSistemas
	/// </summary>
	public ref class IngenieriaSistemas : public System::Windows::Forms::Form
	{
	public:
		IngenieriaSistemas(void)
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
		~IngenieriaSistemas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ bt2;
	protected:
	private: System::Windows::Forms::TextBox^ tbx9;
	private: System::Windows::Forms::Label^ lbl22;
	private: System::Windows::Forms::Label^ lbl21;
	private: System::Windows::Forms::Label^ lbl20;
	private: System::Windows::Forms::Label^ lbl19;
	private: System::Windows::Forms::Label^ lbl18;
	private: System::Windows::Forms::Label^ lbl17;
	private: System::Windows::Forms::Label^ lbl16;
	private: System::Windows::Forms::Label^ lbl15;
	private: System::Windows::Forms::Label^ lbl14;

	private: System::Windows::Forms::Label^ lbl12;
	private: System::Windows::Forms::Button^ bt1;
	private: System::Windows::Forms::TextBox^ tbx8;
	private: System::Windows::Forms::TextBox^ tbx7;
	private: System::Windows::Forms::Label^ lbl11;
	private: System::Windows::Forms::Label^ lbl10;
	private: System::Windows::Forms::TextBox^ tbx6;
	private: System::Windows::Forms::TextBox^ tbx5;
	private: System::Windows::Forms::TextBox^ tbx4;
	private: System::Windows::Forms::TextBox^ tbx3;
	private: System::Windows::Forms::Label^ lbl8;
	private: System::Windows::Forms::Label^ lbl7;
	private: System::Windows::Forms::Label^ lbl6;
	private: System::Windows::Forms::Label^ lbl5;
	private: System::Windows::Forms::Label^ lbl4;

	private: System::Windows::Forms::TextBox^ tbx1;

	private: System::Windows::Forms::Label^ lbl2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Button^ btnEliminarSis;
	private: System::Windows::Forms::Label^ lbl30;
	private: System::Windows::Forms::Label^ lbl31;
	private: System::Windows::Forms::Label^ lbl33;
	private: System::Windows::Forms::Label^ lbl32;
	private: System::Windows::Forms::Label^ lbl34;
	private: System::Windows::Forms::Button^ button4;


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
			this->bt2 = (gcnew System::Windows::Forms::Button());
			this->tbx9 = (gcnew System::Windows::Forms::TextBox());
			this->lbl22 = (gcnew System::Windows::Forms::Label());
			this->lbl21 = (gcnew System::Windows::Forms::Label());
			this->lbl20 = (gcnew System::Windows::Forms::Label());
			this->lbl19 = (gcnew System::Windows::Forms::Label());
			this->lbl18 = (gcnew System::Windows::Forms::Label());
			this->lbl17 = (gcnew System::Windows::Forms::Label());
			this->lbl16 = (gcnew System::Windows::Forms::Label());
			this->lbl15 = (gcnew System::Windows::Forms::Label());
			this->lbl14 = (gcnew System::Windows::Forms::Label());
			this->lbl12 = (gcnew System::Windows::Forms::Label());
			this->bt1 = (gcnew System::Windows::Forms::Button());
			this->tbx8 = (gcnew System::Windows::Forms::TextBox());
			this->tbx7 = (gcnew System::Windows::Forms::TextBox());
			this->lbl11 = (gcnew System::Windows::Forms::Label());
			this->lbl10 = (gcnew System::Windows::Forms::Label());
			this->tbx6 = (gcnew System::Windows::Forms::TextBox());
			this->tbx5 = (gcnew System::Windows::Forms::TextBox());
			this->tbx4 = (gcnew System::Windows::Forms::TextBox());
			this->tbx3 = (gcnew System::Windows::Forms::TextBox());
			this->lbl8 = (gcnew System::Windows::Forms::Label());
			this->lbl7 = (gcnew System::Windows::Forms::Label());
			this->lbl6 = (gcnew System::Windows::Forms::Label());
			this->lbl5 = (gcnew System::Windows::Forms::Label());
			this->lbl4 = (gcnew System::Windows::Forms::Label());
			this->tbx1 = (gcnew System::Windows::Forms::TextBox());
			this->lbl2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->btnEliminarSis = (gcnew System::Windows::Forms::Button());
			this->lbl30 = (gcnew System::Windows::Forms::Label());
			this->lbl31 = (gcnew System::Windows::Forms::Label());
			this->lbl33 = (gcnew System::Windows::Forms::Label());
			this->lbl32 = (gcnew System::Windows::Forms::Label());
			this->lbl34 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// bt2
			// 
			this->bt2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bt2->Location = System::Drawing::Point(1208, 444);
			this->bt2->Name = L"bt2";
			this->bt2->Size = System::Drawing::Size(126, 63);
			this->bt2->TabIndex = 94;
			this->bt2->Text = L"Costo Parqueo Total";
			this->bt2->UseVisualStyleBackColor = true;
			this->bt2->Click += gcnew System::EventHandler(this, &IngenieriaSistemas::bt2_Click);
			// 
			// tbx9
			// 
			this->tbx9->BackColor = System::Drawing::Color::Silver;
			this->tbx9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbx9->Location = System::Drawing::Point(1305, 395);
			this->tbx9->Name = L"tbx9";
			this->tbx9->Size = System::Drawing::Size(100, 30);
			this->tbx9->TabIndex = 93;
			// 
			// lbl22
			// 
			this->lbl22->AutoSize = true;
			this->lbl22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl22->Location = System::Drawing::Point(1441, 399);
			this->lbl22->Name = L"lbl22";
			this->lbl22->Size = System::Drawing::Size(30, 25);
			this->lbl22->TabIndex = 92;
			this->lbl22->Text = L"...";
			// 
			// lbl21
			// 
			this->lbl21->AutoSize = true;
			this->lbl21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl21->Location = System::Drawing::Point(1129, 356);
			this->lbl21->Name = L"lbl21";
			this->lbl21->Size = System::Drawing::Size(266, 25);
			this->lbl21->TabIndex = 91;
			this->lbl21->Text = L"Informacion Administrativa";
			// 
			// lbl20
			// 
			this->lbl20->AutoSize = true;
			this->lbl20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl20->Location = System::Drawing::Point(1063, 399);
			this->lbl20->Name = L"lbl20";
			this->lbl20->Size = System::Drawing::Size(224, 25);
			this->lbl20->TabIndex = 90;
			this->lbl20->Text = L"Parqueo por semestre";
			// 
			// lbl19
			// 
			this->lbl19->AutoSize = true;
			this->lbl19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl19->Location = System::Drawing::Point(1441, 199);
			this->lbl19->Name = L"lbl19";
			this->lbl19->Size = System::Drawing::Size(30, 25);
			this->lbl19->TabIndex = 89;
			this->lbl19->Text = L"...";
			// 
			// lbl18
			// 
			this->lbl18->AutoSize = true;
			this->lbl18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl18->Location = System::Drawing::Point(1441, 149);
			this->lbl18->Name = L"lbl18";
			this->lbl18->Size = System::Drawing::Size(30, 25);
			this->lbl18->TabIndex = 88;
			this->lbl18->Text = L"...";
			// 
			// lbl17
			// 
			this->lbl17->AutoSize = true;
			this->lbl17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl17->Location = System::Drawing::Point(960, 486);
			this->lbl17->Name = L"lbl17";
			this->lbl17->Size = System::Drawing::Size(30, 25);
			this->lbl17->TabIndex = 87;
			this->lbl17->Text = L"...";
			// 
			// lbl16
			// 
			this->lbl16->AutoSize = true;
			this->lbl16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl16->Location = System::Drawing::Point(960, 437);
			this->lbl16->Name = L"lbl16";
			this->lbl16->Size = System::Drawing::Size(30, 25);
			this->lbl16->TabIndex = 86;
			this->lbl16->Text = L"...";
			// 
			// lbl15
			// 
			this->lbl15->AutoSize = true;
			this->lbl15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl15->Location = System::Drawing::Point(960, 386);
			this->lbl15->Name = L"lbl15";
			this->lbl15->Size = System::Drawing::Size(30, 25);
			this->lbl15->TabIndex = 85;
			this->lbl15->Text = L"...";
			// 
			// lbl14
			// 
			this->lbl14->AutoSize = true;
			this->lbl14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl14->Location = System::Drawing::Point(960, 335);
			this->lbl14->Name = L"lbl14";
			this->lbl14->Size = System::Drawing::Size(30, 25);
			this->lbl14->TabIndex = 84;
			this->lbl14->Text = L"...";
			// 
			// lbl12
			// 
			this->lbl12->AutoSize = true;
			this->lbl12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl12->Location = System::Drawing::Point(855, 214);
			this->lbl12->Name = L"lbl12";
			this->lbl12->Size = System::Drawing::Size(30, 25);
			this->lbl12->TabIndex = 82;
			this->lbl12->Text = L"...";
			// 
			// bt1
			// 
			this->bt1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bt1->Location = System::Drawing::Point(1094, 247);
			this->bt1->Name = L"bt1";
			this->bt1->Size = System::Drawing::Size(158, 74);
			this->bt1->TabIndex = 81;
			this->bt1->Text = L"Guardar Informacion";
			this->bt1->UseVisualStyleBackColor = true;
			this->bt1->Click += gcnew System::EventHandler(this, &IngenieriaSistemas::bt1_Click);
			// 
			// tbx8
			// 
			this->tbx8->BackColor = System::Drawing::Color::Silver;
			this->tbx8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbx8->Location = System::Drawing::Point(1310, 193);
			this->tbx8->Name = L"tbx8";
			this->tbx8->Size = System::Drawing::Size(100, 30);
			this->tbx8->TabIndex = 80;
			// 
			// tbx7
			// 
			this->tbx7->BackColor = System::Drawing::Color::Silver;
			this->tbx7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbx7->Location = System::Drawing::Point(1310, 144);
			this->tbx7->Name = L"tbx7";
			this->tbx7->Size = System::Drawing::Size(100, 30);
			this->tbx7->TabIndex = 79;
			// 
			// lbl11
			// 
			this->lbl11->AutoSize = true;
			this->lbl11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl11->Location = System::Drawing::Point(1089, 198);
			this->lbl11->Name = L"lbl11";
			this->lbl11->Size = System::Drawing::Size(198, 25);
			this->lbl11->TabIndex = 78;
			this->lbl11->Text = L"Porcentaje de beca";
			// 
			// lbl10
			// 
			this->lbl10->AutoSize = true;
			this->lbl10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl10->Location = System::Drawing::Point(1089, 152);
			this->lbl10->Name = L"lbl10";
			this->lbl10->Size = System::Drawing::Size(124, 25);
			this->lbl10->TabIndex = 77;
			this->lbl10->Text = L"Horas Beca";
			// 
			// tbx6
			// 
			this->tbx6->BackColor = System::Drawing::Color::Silver;
			this->tbx6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbx6->Location = System::Drawing::Point(833, 483);
			this->tbx6->Name = L"tbx6";
			this->tbx6->Size = System::Drawing::Size(100, 30);
			this->tbx6->TabIndex = 76;
			// 
			// tbx5
			// 
			this->tbx5->BackColor = System::Drawing::Color::Silver;
			this->tbx5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbx5->Location = System::Drawing::Point(833, 431);
			this->tbx5->Name = L"tbx5";
			this->tbx5->Size = System::Drawing::Size(100, 30);
			this->tbx5->TabIndex = 75;
			// 
			// tbx4
			// 
			this->tbx4->BackColor = System::Drawing::Color::Silver;
			this->tbx4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbx4->Location = System::Drawing::Point(833, 382);
			this->tbx4->Name = L"tbx4";
			this->tbx4->Size = System::Drawing::Size(100, 30);
			this->tbx4->TabIndex = 74;
			// 
			// tbx3
			// 
			this->tbx3->BackColor = System::Drawing::Color::Silver;
			this->tbx3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbx3->Location = System::Drawing::Point(833, 331);
			this->tbx3->Name = L"tbx3";
			this->tbx3->Size = System::Drawing::Size(100, 30);
			this->tbx3->TabIndex = 73;
			// 
			// lbl8
			// 
			this->lbl8->AutoSize = true;
			this->lbl8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl8->Location = System::Drawing::Point(587, 488);
			this->lbl8->Name = L"lbl8";
			this->lbl8->Size = System::Drawing::Size(226, 25);
			this->lbl8->TabIndex = 72;
			this->lbl8->Text = L"Numero de Semestres";
			// 
			// lbl7
			// 
			this->lbl7->AutoSize = true;
			this->lbl7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl7->Location = System::Drawing::Point(587, 435);
			this->lbl7->Name = L"lbl7";
			this->lbl7->Size = System::Drawing::Size(174, 25);
			this->lbl7->TabIndex = 71;
			this->lbl7->Text = L"Valor del Credito";
			// 
			// lbl6
			// 
			this->lbl6->AutoSize = true;
			this->lbl6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl6->Location = System::Drawing::Point(587, 386);
			this->lbl6->Name = L"lbl6";
			this->lbl6->Size = System::Drawing::Size(190, 25);
			this->lbl6->TabIndex = 70;
			this->lbl6->Text = L"Numero de Clases";
			// 
			// lbl5
			// 
			this->lbl5->AutoSize = true;
			this->lbl5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl5->Location = System::Drawing::Point(587, 335);
			this->lbl5->Name = L"lbl5";
			this->lbl5->Size = System::Drawing::Size(204, 25);
			this->lbl5->TabIndex = 69;
			this->lbl5->Text = L"Numero de Creditos";
			// 
			// lbl4
			// 
			this->lbl4->AutoSize = true;
			this->lbl4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl4->Location = System::Drawing::Point(651, 292);
			this->lbl4->Name = L"lbl4";
			this->lbl4->Size = System::Drawing::Size(203, 25);
			this->lbl4->TabIndex = 68;
			this->lbl4->Text = L"Informacion Carrera";
			// 
			// tbx1
			// 
			this->tbx1->BackColor = System::Drawing::Color::Silver;
			this->tbx1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbx1->Location = System::Drawing::Point(726, 211);
			this->tbx1->Name = L"tbx1";
			this->tbx1->Size = System::Drawing::Size(100, 30);
			this->tbx1->TabIndex = 66;
			// 
			// lbl2
			// 
			this->lbl2->AutoSize = true;
			this->lbl2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl2->Location = System::Drawing::Point(618, 211);
			this->lbl2->Name = L"lbl2";
			this->lbl2->Size = System::Drawing::Size(87, 25);
			this->lbl2->TabIndex = 64;
			this->lbl2->Text = L"Nombre";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(16, 129);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(147, 25);
			this->label1->TabIndex = 95;
			this->label1->Text = L"Instrucciones:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(16, 163);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(369, 25);
			this->label2->TabIndex = 96;
			this->label2->Text = L"Usted debera ingresar los siguientes ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(16, 183);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(504, 25);
			this->label3->TabIndex = 97;
			this->label3->Text = L"datos para poder obtener el valor total de la carrera";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(16, 229);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(222, 25);
			this->label4->TabIndex = 98;
			this->label4->Text = L"1. Ingresar su nombre";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(16, 269);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(526, 25);
			this->label5->TabIndex = 99;
			this->label5->Text = L"2. El numero de creditos que debe ingresar es de 316";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(16, 312);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(409, 25);
			this->label6->TabIndex = 100;
			this->label6->Text = L"3. El numero de clases que hay es de  90";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(16, 352);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(363, 25);
			this->label7->TabIndex = 101;
			this->label7->Text = L"4. El valor de cada credito es de 800";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(16, 391);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(339, 25);
			this->label8->TabIndex = 102;
			this->label8->Text = L"5. El numero de semestres son 10";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(16, 432);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(426, 25);
			this->label9->TabIndex = 103;
			this->label9->Text = L"6. Las horas beca que debe cumplir son 20";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(16, 471);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(516, 25);
			this->label10->TabIndex = 104;
			this->label10->Text = L"7. Ingrese el porcentaje de beca que le fue asignado";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(16, 509);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(460, 25);
			this->label11->TabIndex = 105;
			this->label11->Text = L"8. El valor del parqueo es de 900 por semestre";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(649, 152);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(204, 25);
			this->label12->TabIndex = 118;
			this->label12->Text = L"Informacion Usuario";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(1583, 393);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(198, 78);
			this->button2->TabIndex = 129;
			this->button2->Text = L"Calcular precio con beca";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &IngenieriaSistemas::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1605, 206);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(152, 74);
			this->button1->TabIndex = 128;
			this->button1->Text = L"Calcular precio total";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &IngenieriaSistemas::button1_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(1661, 358);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(30, 25);
			this->label16->TabIndex = 127;
			this->label16->Text = L"...";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(1496, 333);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(401, 25);
			this->label15->TabIndex = 126;
			this->label15->Text = L"Presupuesto total de la carrera con beca";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(1661, 172);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(30, 25);
			this->label14->TabIndex = 125;
			this->label14->Text = L"...";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ImageKey = L"(ninguno)";
			this->label13->Location = System::Drawing::Point(1529, 144);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(307, 25);
			this->label13->TabIndex = 124;
			this->label13->Text = L"Presupuesto total de la carrera";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(807, 14);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(362, 37);
			this->label17->TabIndex = 130;
			this->label17->Text = L"Ingeniería en Sistemas";
			// 
			// btnEliminarSis
			// 
			this->btnEliminarSis->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEliminarSis->Location = System::Drawing::Point(1277, 247);
			this->btnEliminarSis->Name = L"btnEliminarSis";
			this->btnEliminarSis->Size = System::Drawing::Size(158, 74);
			this->btnEliminarSis->TabIndex = 131;
			this->btnEliminarSis->Text = L"Eliminar Informacion";
			this->btnEliminarSis->UseVisualStyleBackColor = true;
			this->btnEliminarSis->Click += gcnew System::EventHandler(this, &IngenieriaSistemas::button3_Click);
			// 
			// lbl30
			// 
			this->lbl30->AutoSize = true;
			this->lbl30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl30->Location = System::Drawing::Point(935, 437);
			this->lbl30->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl30->Name = L"lbl30";
			this->lbl30->Size = System::Drawing::Size(20, 25);
			this->lbl30->TabIndex = 138;
			this->lbl30->Text = L"-";
			// 
			// lbl31
			// 
			this->lbl31->AutoSize = true;
			this->lbl31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl31->Location = System::Drawing::Point(1417, 399);
			this->lbl31->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl31->Name = L"lbl31";
			this->lbl31->Size = System::Drawing::Size(20, 25);
			this->lbl31->TabIndex = 140;
			this->lbl31->Text = L"-";
			// 
			// lbl33
			// 
			this->lbl33->AutoSize = true;
			this->lbl33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl33->Location = System::Drawing::Point(1639, 356);
			this->lbl33->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl33->Name = L"lbl33";
			this->lbl33->Size = System::Drawing::Size(20, 25);
			this->lbl33->TabIndex = 141;
			this->lbl33->Text = L"-";
			// 
			// lbl32
			// 
			this->lbl32->AutoSize = true;
			this->lbl32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl32->Location = System::Drawing::Point(1639, 170);
			this->lbl32->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl32->Name = L"lbl32";
			this->lbl32->Size = System::Drawing::Size(20, 25);
			this->lbl32->TabIndex = 142;
			this->lbl32->Text = L"-";
			// 
			// lbl34
			// 
			this->lbl34->AutoSize = true;
			this->lbl34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl34->Location = System::Drawing::Point(1418, 198);
			this->lbl34->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl34->Name = L"lbl34";
			this->lbl34->Size = System::Drawing::Size(20, 25);
			this->lbl34->TabIndex = 143;
			this->lbl34->Text = L"-";
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(219, 571);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(130, 48);
			this->button4->TabIndex = 144;
			this->button4->Text = L"Regresar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &IngenieriaSistemas::button4_Click);
			// 
			// IngenieriaSistemas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::CadetBlue;
			this->ClientSize = System::Drawing::Size(1924, 654);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->lbl34);
			this->Controls->Add(this->lbl32);
			this->Controls->Add(this->lbl33);
			this->Controls->Add(this->lbl31);
			this->Controls->Add(this->lbl30);
			this->Controls->Add(this->btnEliminarSis);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
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
			this->Controls->Add(this->lbl12);
			this->Controls->Add(this->bt1);
			this->Controls->Add(this->tbx8);
			this->Controls->Add(this->tbx7);
			this->Controls->Add(this->lbl11);
			this->Controls->Add(this->lbl10);
			this->Controls->Add(this->tbx6);
			this->Controls->Add(this->tbx5);
			this->Controls->Add(this->tbx4);
			this->Controls->Add(this->tbx3);
			this->Controls->Add(this->lbl8);
			this->Controls->Add(this->lbl7);
			this->Controls->Add(this->lbl6);
			this->Controls->Add(this->lbl5);
			this->Controls->Add(this->lbl4);
			this->Controls->Add(this->tbx1);
			this->Controls->Add(this->lbl2);
			this->Name = L"IngenieriaSistemas";
			this->Text = L"Ingenieria en Sistemas";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void bt1_Click(System::Object^ sender, System::EventArgs^ e) {
		Ingenieria datosingenieria;
		System::String^ nombrealum;


		try {
			if ((tbx3->Text == "") || (tbx4->Text == "") || (tbx5->Text == "") || (tbx6->Text == "") || (tbx7->Text == "") || (tbx8->Text == "")) {
				MessageBox::Show("Debe de llenar todas las casillas.");
			}
			else {

				int numcreditos;
				int cantclases;
				int valorcredito;
				int horasbeca;
				int numsemestres;
				int beca;
				nombrealum = tbx1->Text;

				numcreditos = Convert::ToInt16(tbx3->Text);
				cantclases = Convert::ToInt16(tbx4->Text);
				valorcredito = Convert::ToInt16(tbx5->Text);
				numsemestres = Convert::ToInt16(tbx6->Text);
				horasbeca = Convert::ToInt16(tbx7->Text);
				beca = Convert::ToInt16(tbx8->Text);


				datosingenieria.setnombrealum(nombrealum);

				datosingenieria.setnumcreditos(numcreditos);
				datosingenieria.setcantclases(cantclases);
				datosingenieria.setvalorcredito(valorcredito);
				datosingenieria.setnumsemestres(numsemestres);
				datosingenieria.sethorasbeca(horasbeca);
				datosingenieria.setbeca(beca);

				lbl12->Text = datosingenieria.getnombrealum();
				lbl14->Text = "" + datosingenieria.getnumcrditos();
				lbl15->Text = "" + datosingenieria.getcantclases();
				lbl30->Text = "Q";
				lbl16->Text = "" + datosingenieria.getvalorcredito();
				lbl17->Text = "" + datosingenieria.getnumsemestres();
				lbl18->Text = "" + datosingenieria.gethorasbeca();
				lbl34->Text = "%";
				lbl19->Text = "" + datosingenieria.getbeca();
			}
			
			}
		catch (Exception^ ex) {
			MessageBox::Show("El valor ingresado no es valido");
		}
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
	parqueototal = (parqueo.getcuotaparqueo() * parqueo.getnumsemestres()) + 100;
	lbl31->Text = "Q";
	lbl22->Text = "" + parqueototal;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Ingenieria precioTotal;
	float parqueototal;
	int numcreditos;
	int valorcredito;
	float valorTotal;
	parqueototal = Convert::ToInt16(lbl22->Text);
	numcreditos = Convert::ToInt16(tbx3->Text);
	valorcredito = Convert::ToInt16(tbx5->Text);
	precioTotal.setparqueototal(parqueototal);
	precioTotal.setnumcreditos(numcreditos);
	precioTotal.setvalorcredito(valorcredito);
	valorTotal = precioTotal.getparqueototal() + (precioTotal.getnumcrditos() * precioTotal.getvalorcredito());
	lbl32->Text = "Q";
	label14->Text = "" + valorTotal;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Ingenieria preciobeca;
	float valorTbeca;
	int beca;
	float valorTotal;
	int numcreditos;
	int valorcredito;
	float parqueototal;
	parqueototal = Convert::ToInt16(lbl22->Text);
	numcreditos = Convert::ToInt16(tbx3->Text);
	valorcredito = Convert::ToInt16(tbx5->Text);
	beca = Convert::ToInt16(tbx8->Text);
	valorTotal = Convert::ToDouble(label14->Text);
	preciobeca.setparqueototal(parqueototal);
	preciobeca.setnumcreditos(numcreditos);
	preciobeca.setvalorcredito(valorcredito);
	preciobeca.setbeca(beca);
	preciobeca.setvalorTotal(valorTotal);

	valorTbeca = ((preciobeca.getnumcrditos() * preciobeca.getvalorcredito()) - (((preciobeca.getnumcrditos() * preciobeca.getvalorcredito()) * (preciobeca.getbeca() / 100))) + preciobeca.getparqueototal());
	label16->Text = "" + valorTbeca;
	lbl33->Text = "Q";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Ingenieria eliminarDatos;
	System::String^ nombrealum;

	int numcreditos;
	int cantclases;
	int valorcredito;
	int horasbeca;
	int numsemestres;
	int beca;
	nombrealum = tbx1->Text;

	numcreditos = Convert::ToInt16(tbx3->Text);
	cantclases = Convert::ToInt16(tbx4->Text);
	valorcredito = Convert::ToInt16(tbx5->Text);
	numsemestres = Convert::ToInt16(tbx6->Text);
	horasbeca = Convert::ToInt16(tbx7->Text);
	beca = Convert::ToInt16(tbx8->Text);

	eliminarDatos.setnombrealum("");

	eliminarDatos.setnumcreditos(0);
	eliminarDatos.setcantclases(0);
	eliminarDatos.setvalorcredito(0);
	eliminarDatos.setnumsemestres(0);
	eliminarDatos.sethorasbeca(0);
	eliminarDatos.setbeca(0);

	lbl12->Text = "";
	lbl14->Text = "";
	lbl15->Text = "";
	lbl16->Text = "";
	lbl17->Text = "";
	lbl18->Text = "";
	lbl19->Text = "";
	lbl30->Text = "";
	lbl31->Text = "";
	lbl32->Text = "";
	lbl33->Text = "";
	lbl34->Text = "";
	/*tbx1->Text = "";
	tbx3->Text = "";
	tbx4->Text = "";
	tbx5->Text = "";
	tbx6->Text = "";
	tbx7->Text = "";
	tbx8->Text = "";*/
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
