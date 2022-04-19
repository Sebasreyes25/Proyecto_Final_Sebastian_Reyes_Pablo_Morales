#pragma once

namespace ProyectFinalIn {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de IngenieriaElect
	/// </summary>
	public ref class IngenieriaElect : public System::Windows::Forms::Form
	{
	public:
		IngenieriaElect(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~IngenieriaElect()
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
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
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
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// bt2
			// 
			this->bt2->Location = System::Drawing::Point(1047, 374);
			this->bt2->Name = L"bt2";
			this->bt2->Size = System::Drawing::Size(127, 78);
			this->bt2->TabIndex = 94;
			this->bt2->Text = L"Costo Parqueo Total";
			this->bt2->UseVisualStyleBackColor = true;
			// 
			// tbx9
			// 
			this->tbx9->Location = System::Drawing::Point(1145, 312);
			this->tbx9->Name = L"tbx9";
			this->tbx9->Size = System::Drawing::Size(100, 26);
			this->tbx9->TabIndex = 93;
			// 
			// lbl22
			// 
			this->lbl22->AutoSize = true;
			this->lbl22->Location = System::Drawing::Point(1272, 318);
			this->lbl22->Name = L"lbl22";
			this->lbl22->Size = System::Drawing::Size(21, 20);
			this->lbl22->TabIndex = 92;
			this->lbl22->Text = L"...";
			// 
			// lbl21
			// 
			this->lbl21->AutoSize = true;
			this->lbl21->Location = System::Drawing::Point(1043, 272);
			this->lbl21->Name = L"lbl21";
			this->lbl21->Size = System::Drawing::Size(196, 20);
			this->lbl21->TabIndex = 91;
			this->lbl21->Text = L"Informacion Administrativa";
			// 
			// lbl20
			// 
			this->lbl20->AutoSize = true;
			this->lbl20->Location = System::Drawing::Point(953, 312);
			this->lbl20->Name = L"lbl20";
			this->lbl20->Size = System::Drawing::Size(166, 20);
			this->lbl20->TabIndex = 90;
			this->lbl20->Text = L"Parqueo por semestre";
			// 
			// lbl19
			// 
			this->lbl19->AutoSize = true;
			this->lbl19->Location = System::Drawing::Point(1257, 110);
			this->lbl19->Name = L"lbl19";
			this->lbl19->Size = System::Drawing::Size(21, 20);
			this->lbl19->TabIndex = 89;
			this->lbl19->Text = L"...";
			// 
			// lbl18
			// 
			this->lbl18->AutoSize = true;
			this->lbl18->Location = System::Drawing::Point(1257, 57);
			this->lbl18->Name = L"lbl18";
			this->lbl18->Size = System::Drawing::Size(21, 20);
			this->lbl18->TabIndex = 88;
			this->lbl18->Text = L"...";
			// 
			// lbl17
			// 
			this->lbl17->AutoSize = true;
			this->lbl17->Location = System::Drawing::Point(847, 377);
			this->lbl17->Name = L"lbl17";
			this->lbl17->Size = System::Drawing::Size(21, 20);
			this->lbl17->TabIndex = 87;
			this->lbl17->Text = L"...";
			// 
			// lbl16
			// 
			this->lbl16->AutoSize = true;
			this->lbl16->Location = System::Drawing::Point(847, 328);
			this->lbl16->Name = L"lbl16";
			this->lbl16->Size = System::Drawing::Size(21, 20);
			this->lbl16->TabIndex = 86;
			this->lbl16->Text = L"...";
			// 
			// lbl15
			// 
			this->lbl15->AutoSize = true;
			this->lbl15->Location = System::Drawing::Point(847, 278);
			this->lbl15->Name = L"lbl15";
			this->lbl15->Size = System::Drawing::Size(21, 20);
			this->lbl15->TabIndex = 85;
			this->lbl15->Text = L"...";
			// 
			// lbl14
			// 
			this->lbl14->AutoSize = true;
			this->lbl14->Location = System::Drawing::Point(847, 227);
			this->lbl14->Name = L"lbl14";
			this->lbl14->Size = System::Drawing::Size(21, 20);
			this->lbl14->TabIndex = 84;
			this->lbl14->Text = L"...";
			// 
			// lbl12
			// 
			this->lbl12->AutoSize = true;
			this->lbl12->Location = System::Drawing::Point(803, 106);
			this->lbl12->Name = L"lbl12";
			this->lbl12->Size = System::Drawing::Size(21, 20);
			this->lbl12->TabIndex = 82;
			this->lbl12->Text = L"...";
			// 
			// bt1
			// 
			this->bt1->Location = System::Drawing::Point(1047, 168);
			this->bt1->Name = L"bt1";
			this->bt1->Size = System::Drawing::Size(127, 74);
			this->bt1->TabIndex = 81;
			this->bt1->Text = L"Guardar Informacion";
			this->bt1->UseVisualStyleBackColor = true;
			// 
			// tbx8
			// 
			this->tbx8->Location = System::Drawing::Point(1117, 104);
			this->tbx8->Name = L"tbx8";
			this->tbx8->Size = System::Drawing::Size(100, 26);
			this->tbx8->TabIndex = 80;
			// 
			// tbx7
			// 
			this->tbx7->Location = System::Drawing::Point(1117, 54);
			this->tbx7->Name = L"tbx7";
			this->tbx7->Size = System::Drawing::Size(100, 26);
			this->tbx7->TabIndex = 79;
			// 
			// lbl11
			// 
			this->lbl11->AutoSize = true;
			this->lbl11->Location = System::Drawing::Point(958, 104);
			this->lbl11->Name = L"lbl11";
			this->lbl11->Size = System::Drawing::Size(146, 20);
			this->lbl11->TabIndex = 78;
			this->lbl11->Text = L"Porcentaje de beca";
			// 
			// lbl10
			// 
			this->lbl10->AutoSize = true;
			this->lbl10->Location = System::Drawing::Point(958, 57);
			this->lbl10->Name = L"lbl10";
			this->lbl10->Size = System::Drawing::Size(93, 20);
			this->lbl10->TabIndex = 77;
			this->lbl10->Text = L"Horas Beca";
			// 
			// tbx6
			// 
			this->tbx6->Location = System::Drawing::Point(719, 374);
			this->tbx6->Name = L"tbx6";
			this->tbx6->Size = System::Drawing::Size(100, 26);
			this->tbx6->TabIndex = 76;
			// 
			// tbx5
			// 
			this->tbx5->Location = System::Drawing::Point(719, 322);
			this->tbx5->Name = L"tbx5";
			this->tbx5->Size = System::Drawing::Size(100, 26);
			this->tbx5->TabIndex = 75;
			// 
			// tbx4
			// 
			this->tbx4->Location = System::Drawing::Point(719, 272);
			this->tbx4->Name = L"tbx4";
			this->tbx4->Size = System::Drawing::Size(100, 26);
			this->tbx4->TabIndex = 74;
			// 
			// tbx3
			// 
			this->tbx3->Location = System::Drawing::Point(719, 222);
			this->tbx3->Name = L"tbx3";
			this->tbx3->Size = System::Drawing::Size(100, 26);
			this->tbx3->TabIndex = 73;
			// 
			// lbl8
			// 
			this->lbl8->AutoSize = true;
			this->lbl8->Location = System::Drawing::Point(523, 374);
			this->lbl8->Name = L"lbl8";
			this->lbl8->Size = System::Drawing::Size(168, 20);
			this->lbl8->TabIndex = 72;
			this->lbl8->Text = L"Numero de Semestres";
			// 
			// lbl7
			// 
			this->lbl7->AutoSize = true;
			this->lbl7->Location = System::Drawing::Point(523, 322);
			this->lbl7->Name = L"lbl7";
			this->lbl7->Size = System::Drawing::Size(126, 20);
			this->lbl7->TabIndex = 71;
			this->lbl7->Text = L"Valor del Credito";
			// 
			// lbl6
			// 
			this->lbl6->AutoSize = true;
			this->lbl6->Location = System::Drawing::Point(523, 272);
			this->lbl6->Name = L"lbl6";
			this->lbl6->Size = System::Drawing::Size(139, 20);
			this->lbl6->TabIndex = 70;
			this->lbl6->Text = L"Numero de Clases";
			// 
			// lbl5
			// 
			this->lbl5->AutoSize = true;
			this->lbl5->Location = System::Drawing::Point(523, 222);
			this->lbl5->Name = L"lbl5";
			this->lbl5->Size = System::Drawing::Size(150, 20);
			this->lbl5->TabIndex = 69;
			this->lbl5->Text = L"Numero de Creditos";
			// 
			// lbl4
			// 
			this->lbl4->AutoSize = true;
			this->lbl4->Location = System::Drawing::Point(629, 178);
			this->lbl4->Name = L"lbl4";
			this->lbl4->Size = System::Drawing::Size(147, 20);
			this->lbl4->TabIndex = 68;
			this->lbl4->Text = L"Informacion carrera";
			// 
			// tbx1
			// 
			this->tbx1->Location = System::Drawing::Point(675, 104);
			this->tbx1->Name = L"tbx1";
			this->tbx1->Size = System::Drawing::Size(100, 26);
			this->tbx1->TabIndex = 66;
			// 
			// lbl2
			// 
			this->lbl2->AutoSize = true;
			this->lbl2->Location = System::Drawing::Point(565, 104);
			this->lbl2->Name = L"lbl2";
			this->lbl2->Size = System::Drawing::Size(65, 20);
			this->lbl2->TabIndex = 64;
			this->lbl2->Text = L"Nombre";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(50, 419);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(336, 20);
			this->label11->TabIndex = 116;
			this->label11->Text = L"8. El valor del parqueo es de 900 por semestre";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(50, 381);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(379, 20);
			this->label10->TabIndex = 115;
			this->label10->Text = L"7. Ingrese el porcentaje de beca que le fue asignado";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(50, 343);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(312, 20);
			this->label9->TabIndex = 114;
			this->label9->Text = L"6. Las horas beca que debe cumplir son 20";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(50, 301);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(250, 20);
			this->label8->TabIndex = 113;
			this->label8->Text = L"5. El numero de semestres son 10";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(50, 263);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(233, 20);
			this->label7->TabIndex = 112;
			this->label7->Text = L"4. El valor de cada credito es de";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(50, 223);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(276, 20);
			this->label6->TabIndex = 111;
			this->label6->Text = L"3. El numero de clases que hay es de ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(50, 179);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(355, 20);
			this->label5->TabIndex = 110;
			this->label5->Text = L"2. El numero de creditos que debe ingresar es de";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(50, 139);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(164, 20);
			this->label4->TabIndex = 109;
			this->label4->Text = L"1. Ingresar su nombre";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(50, 94);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(369, 20);
			this->label3->TabIndex = 108;
			this->label3->Text = L"datos para poder obtener el valor total de la carrera";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(50, 74);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(271, 20);
			this->label2->TabIndex = 107;
			this->label2->Text = L"Usted debera ingresar los siguientes ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(50, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(108, 20);
			this->label1->TabIndex = 106;
			this->label1->Text = L"Instrucciones:";
			// 
			// IngenieriaElect
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1339, 486);
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
			this->Name = L"IngenieriaElect";
			this->Text = L"IngenieriaElect";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
