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
	/// 

	public ref class MyForm : public System::Windows::Forms::Form
	{
	private:
		Bitmap^ MyFormTotal = gcnew Bitmap("unis.jpg");
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
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(57, 454);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(530, 52);
			this->button4->TabIndex = 13;
			this->button4->Text = L"Ingenieria en Electronica y Telecomunicaciones";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(57, 372);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(243, 52);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Ingenieria Industrial";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(57, 286);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(238, 52);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Ingenieria Comercial";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(52, 140);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(503, 25);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Para comenzar seleccione la ingenieria que desea:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(52, 115);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(1123, 25);
			this->label2->TabIndex = 9;
			this->label2->Text = L"porcentaje de beca, adiconal a ello, el coste total que tiene el uso del parqueo "
				L"durante toda la carrera seleccionada.";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(52, 91);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1244, 25);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Buen dia, es un gusto ayudarle, en el siguiente sistema podrá conocer el precio d"
				L"e cada una de la ingenierías con su respectivo ";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(57, 202);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(276, 52);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Ingenieria en Sistemas";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(1734, 562);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
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
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	timer1->Enabled = true; 

}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	Graphics^ g = this->CreateGraphics();
	BufferedGraphicsContext^ Espacio = BufferedGraphicsManager::Current;
	BufferedGraphics^ Buffer = Espacio->Allocate(g, this->ClientRectangle);
	Buffer->Graphics->DrawImage(MyFormTotal, 0, 0, (int)Buffer->Graphics->VisibleClipBounds.Width, (int)Buffer->Graphics->VisibleClipBounds.Height);
	Buffer->Render(g);
	delete Buffer;
	delete Espacio;
	delete g;
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
