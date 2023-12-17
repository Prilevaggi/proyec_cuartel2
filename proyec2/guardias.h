#pragma once


namespace proyec2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de guardias
	/// </summary>
	public ref class guardias : public System::Windows::Forms::Form
	{

	
	private: System::Windows::Forms::Button^ button2;
 
		   
	public:
		int init;
		int ant;
		guardias(void)
		{
			this->init;
			this->ant;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~guardias()
		{
			if (components)
			{
				delete components;
			}
		}
	protected:
	public:
		System::Windows::Forms::DataGridView^ dataGuardias;	
        System::Windows::Forms::Label^ label1;
	    System::Windows::Forms::LinkLabel^ linkinicio;
	private: System::Windows::Forms::Button^ button1;
	public:


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
			this->dataGuardias = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->linkinicio = (gcnew System::Windows::Forms::LinkLabel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGuardias))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGuardias
			// 
			this->dataGuardias->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGuardias->Location = System::Drawing::Point(39, 50);
			this->dataGuardias->Name = L"dataGuardias";
			this->dataGuardias->RowHeadersWidth = 51;
			this->dataGuardias->RowTemplate->Height = 24;
			this->dataGuardias->Size = System::Drawing::Size(519, 237);
			this->dataGuardias->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(35, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(208, 23);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Guardias registradas:";
			// 
			// linkinicio
			// 
			this->linkinicio->AutoSize = true;
			this->linkinicio->Location = System::Drawing::Point(519, 413);
			this->linkinicio->Name = L"linkinicio";
			this->linkinicio->Size = System::Drawing::Size(40, 17);
			this->linkinicio->TabIndex = 2;
			this->linkinicio->TabStop = true;
			this->linkinicio->Text = L"inicio";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(405, 328);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(106, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"INICIO";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &guardias::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(58, 328);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(259, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"GUARDIAS ANTERIORES";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &guardias::button2_Click);
			// 
			// guardias
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ClientSize = System::Drawing::Size(608, 380);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->linkinicio);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGuardias);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"guardias";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Show;
			this->Text = L"guardias";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGuardias))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->init = 1;
	this->Close();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ant=1;	
}
};
}
