#pragma once

namespace ProyectoInfoFinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de PagPrincipal
	/// </summary>
	public ref class PagPrincipal : public System::Windows::Forms::Form
	{
	public:
		PagPrincipal(void)
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
		~PagPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(93, 191);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(133, 53);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Ingenieria en sistemas";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &PagPrincipal::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(239, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Buen dia, es un gusto ayudarlos,";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(638, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"En este proyecto van a poder conocer el precio de cada una de las carreras de ing"
				L"enieria ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 110);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(366, 20);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Para comenzar seleccione la ingenieria que desea:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(278, 191);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(127, 53);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Ingenieria comercial";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(458, 191);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(122, 53);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Ingenieria industrial";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(629, 191);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(119, 53);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Ingenieria electronica";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// PagPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(872, 514);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"PagPrincipal";
			this->Text = L"PagPrincipal";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		ProyectoInfoFinal::IngenieriaSistemas^ myform = gcnew ProyectoInfoFinal::IngenieriaSistemas();
		myform->ShowDialog();
	}
};
}
