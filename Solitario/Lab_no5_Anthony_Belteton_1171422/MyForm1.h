#pragma once
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

namespace Labno5AnthonyBelteton1171422 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ fila_mazo;
	private: System::Windows::Forms::Label^ fila_1_pos_0;
	private: System::Windows::Forms::Label^ fila_1_pos_1;
	private: System::Windows::Forms::Label^ fila_1_pos_2;
	private: System::Windows::Forms::Label^ fila_1_pos_3;
	private: System::Windows::Forms::Label^ fila_1_pos_4;
	private: System::Windows::Forms::Label^ fila_1_pos_5;
	private: System::Windows::Forms::Label^ fila_1_pos_6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
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
			this->fila_mazo = (gcnew System::Windows::Forms::Label());
			this->fila_1_pos_0 = (gcnew System::Windows::Forms::Label());
			this->fila_1_pos_1 = (gcnew System::Windows::Forms::Label());
			this->fila_1_pos_2 = (gcnew System::Windows::Forms::Label());
			this->fila_1_pos_3 = (gcnew System::Windows::Forms::Label());
			this->fila_1_pos_4 = (gcnew System::Windows::Forms::Label());
			this->fila_1_pos_5 = (gcnew System::Windows::Forms::Label());
			this->fila_1_pos_6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(36, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(36, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Mazo:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm1::label1_Click);
			// 
			// fila_mazo
			// 
			this->fila_mazo->AutoSize = true;
			this->fila_mazo->Location = System::Drawing::Point(86, 34);
			this->fila_mazo->Name = L"fila_mazo";
			this->fila_mazo->Size = System::Drawing::Size(35, 13);
			this->fila_mazo->TabIndex = 1;
			this->fila_mazo->Text = L"label2";
			// 
			// fila_1_pos_0
			// 
			this->fila_1_pos_0->AutoSize = true;
			this->fila_1_pos_0->Location = System::Drawing::Point(87, 102);
			this->fila_1_pos_0->Name = L"fila_1_pos_0";
			this->fila_1_pos_0->Size = System::Drawing::Size(0, 13);
			this->fila_1_pos_0->TabIndex = 2;
			// 
			// fila_1_pos_1
			// 
			this->fila_1_pos_1->AutoSize = true;
			this->fila_1_pos_1->Location = System::Drawing::Point(86, 137);
			this->fila_1_pos_1->Name = L"fila_1_pos_1";
			this->fila_1_pos_1->Size = System::Drawing::Size(0, 13);
			this->fila_1_pos_1->TabIndex = 3;
			// 
			// fila_1_pos_2
			// 
			this->fila_1_pos_2->AutoSize = true;
			this->fila_1_pos_2->Location = System::Drawing::Point(86, 170);
			this->fila_1_pos_2->Name = L"fila_1_pos_2";
			this->fila_1_pos_2->Size = System::Drawing::Size(0, 13);
			this->fila_1_pos_2->TabIndex = 4;
			// 
			// fila_1_pos_3
			// 
			this->fila_1_pos_3->AutoSize = true;
			this->fila_1_pos_3->Location = System::Drawing::Point(86, 205);
			this->fila_1_pos_3->Name = L"fila_1_pos_3";
			this->fila_1_pos_3->Size = System::Drawing::Size(0, 13);
			this->fila_1_pos_3->TabIndex = 5;
			// 
			// fila_1_pos_4
			// 
			this->fila_1_pos_4->AutoSize = true;
			this->fila_1_pos_4->Location = System::Drawing::Point(86, 237);
			this->fila_1_pos_4->Name = L"fila_1_pos_4";
			this->fila_1_pos_4->Size = System::Drawing::Size(0, 13);
			this->fila_1_pos_4->TabIndex = 6;
			// 
			// fila_1_pos_5
			// 
			this->fila_1_pos_5->AutoSize = true;
			this->fila_1_pos_5->Location = System::Drawing::Point(86, 268);
			this->fila_1_pos_5->Name = L"fila_1_pos_5";
			this->fila_1_pos_5->Size = System::Drawing::Size(0, 13);
			this->fila_1_pos_5->TabIndex = 7;
			// 
			// fila_1_pos_6
			// 
			this->fila_1_pos_6->AutoSize = true;
			this->fila_1_pos_6->Location = System::Drawing::Point(86, 300);
			this->fila_1_pos_6->Name = L"fila_1_pos_6";
			this->fila_1_pos_6->Size = System::Drawing::Size(0, 13);
			this->fila_1_pos_6->TabIndex = 8;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(175, 465);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(72, 32);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Comenzar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(175, 508);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(72, 32);
			this->button2->TabIndex = 10;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(175, 546);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(72, 32);
			this->button3->TabIndex = 11;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(253, 515);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(79, 20);
			this->textBox1->TabIndex = 12;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(351, 515);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(79, 20);
			this->textBox2->TabIndex = 13;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Green;
			this->ClientSize = System::Drawing::Size(1085, 630);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->fila_1_pos_6);
			this->Controls->Add(this->fila_1_pos_5);
			this->Controls->Add(this->fila_1_pos_4);
			this->Controls->Add(this->fila_1_pos_3);
			this->Controls->Add(this->fila_1_pos_2);
			this->Controls->Add(this->fila_1_pos_1);
			this->Controls->Add(this->fila_1_pos_0);
			this->Controls->Add(this->fila_mazo);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm1";
			this->Text = L"FACIL";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
