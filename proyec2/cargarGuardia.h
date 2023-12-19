#pragma once
#include"DataBase.h"



namespace proyec2 {

	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Resumen de cargarGuardia
	/// </summary>
	public ref class cargarGuardia : public System::Windows::Forms::Form
	{
	public:

		cargarGuardia(String^ user)
		{
			InitializeComponent();
			this->user = user;
			this->text_entrada->Text = "00:00";
			this->text_salida->Text = "00:00";

			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~cargarGuardia()
		{
			if (components)
			{
				delete components;
			}
		}
	protected:
	public:
		int guardar = 0;
		String^ user;
		String^ fecha;
		String^ entrada;
		String^ salida;
		System::Windows::Forms::TextBox^ text_dia;
		System::Windows::Forms::TextBox^ text_entrada;
		System::Windows::Forms::TextBox^ text_salida;
		System::Windows::Forms::TextBox^ text_mes;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->text_dia = (gcnew System::Windows::Forms::TextBox());
			this->text_entrada = (gcnew System::Windows::Forms::TextBox());
			this->text_salida = (gcnew System::Windows::Forms::TextBox());
			this->text_mes = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// text_dia
			// 
			this->text_dia->Location = System::Drawing::Point(414, 129);
			this->text_dia->Name = L"text_dia";
			this->text_dia->Size = System::Drawing::Size(68, 22);
			this->text_dia->TabIndex = 0;
			// 
			// text_entrada
			// 
			this->text_entrada->Location = System::Drawing::Point(414, 181);
			this->text_entrada->Name = L"text_entrada";
			this->text_entrada->Size = System::Drawing::Size(68, 22);
			this->text_entrada->TabIndex = 1;
			// 
			// text_salida
			// 
			this->text_salida->Location = System::Drawing::Point(551, 181);
			this->text_salida->Name = L"text_salida";
			this->text_salida->Size = System::Drawing::Size(63, 22);
			this->text_salida->TabIndex = 2;
			// 
			// text_mes
			// 
			this->text_mes->Location = System::Drawing::Point(551, 129);
			this->text_mes->Name = L"text_mes";
			this->text_mes->Size = System::Drawing::Size(63, 22);
			this->text_mes->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(365, 130);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(33, 18);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Dia";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(334, 182);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 18);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Entrada";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(491, 185);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 18);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Salida";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(507, 132);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(38, 18);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Mes";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(254, 63);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(325, 28);
			this->label5->TabIndex = 8;
			this->label5->Text = L"CARGAR NUEVA GUARDIA:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label6->Location = System::Drawing::Point(231, 130);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(69, 19);
			this->label6->TabIndex = 9;
			this->label6->Text = L"FECHA:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label7->Location = System::Drawing::Point(208, 181);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(92, 19);
			this->label7->TabIndex = 10;
			this->label7->Text = L"HORARIO:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(436, 394);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(109, 23);
			this->button2->TabIndex = 12;
			this->button2->Text = L"INICIO";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(212, 244);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(192, 38);
			this->button1->TabIndex = 13;
			this->button1->Text = L"CANCELAR";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &cargarGuardia::button1_Click_1);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->button3->Location = System::Drawing::Point(422, 244);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(192, 38);
			this->button3->TabIndex = 14;
			this->button3->Text = L"GUARDAR";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &cargarGuardia::button3_Click);
			// 
			// cargarGuardia
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ClientSize = System::Drawing::Size(859, 380);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->text_mes);
			this->Controls->Add(this->text_salida);
			this->Controls->Add(this->text_entrada);
			this->Controls->Add(this->text_dia);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"cargarGuardia";
			this->Text = L"cargarGuardia";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	 private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->text_dia->Text == "" || this->text_mes->Text == "" || this->text_entrada->Text == "" || this->text_salida->Text == "")
			MessageBox::Show("Complete todos los Campos");
		else {		
			paseQuery();
			carga();
			limpiarVentana();	
		}
	}
    public:  void paseQuery(){
			  String^ año = "2023-";
			  String^ guion = "-";
			  this->fecha = año + this->text_mes->Text + guion + this->text_dia->Text; 
			  this->entrada = this->text_entrada->Text;
			  this->salida = this->text_salida->Text;
		   }
	public: void carga() {
		DataBase^ query = gcnew DataBase();
		query->abrirConection();
		query->insertGuardia(this->user, this->fecha, this->entrada, this->salida);
		query->cerrarConection();
	}
	public: void limpiarVentana() {
		this->text_entrada->Text="00:00";
		this->text_salida->Text="00:00";
		this->text_mes->Text="";
		this->text_dia->Text="";
	}
	

		
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

};
}
