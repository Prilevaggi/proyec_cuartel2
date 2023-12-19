#pragma once
#include"DataBase.h"



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

	 
		   
	public:
		String^ user;
		guardias(String^ user)
		{
			this->user = user;
			this->db= gcnew DataBase();
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
	private:
		DataBase^ db;
		System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
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
			this->dataGuardias->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->dataGuardias->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::PaleTurquoise;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::ControlDarkDark;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGuardias->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGuardias->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::ControlDarkDark;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGuardias->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGuardias->Location = System::Drawing::Point(39, 50);
			this->dataGuardias->Name = L"dataGuardias";
			this->dataGuardias->ReadOnly = true;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGuardias->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGuardias->RowHeadersVisible = false;
			this->dataGuardias->RowHeadersWidth = 51;
			this->dataGuardias->RowTemplate->Height = 24;
			this->dataGuardias->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGuardias->Size = System::Drawing::Size(753, 237);
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
			this->button1->Location = System::Drawing::Point(669, 328);
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
			this->ClientSize = System::Drawing::Size(859, 380);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->linkinicio);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGuardias);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"guardias";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Show;
			this->Text = L"guardias";
			this->Load += gcnew System::EventHandler(this, &guardias::guardias_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGuardias))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	antGuardia();
}

	   
private: System::Void guardias_Load(System::Object^ sender, System::EventArgs^ e) {
	postGuardia();

}
	   public: void postGuardia() {
		   this->db->abrirConection();
		   this->dataGuardias->DataSource = this->db->guardiaSeccion(this->user);
		   this->db->cerrarConection();
	   }
    	 public: void antGuardia() {
				 this->db->abrirConection();
				 this->dataGuardias->DataSource = this->db->guardiasAnteriores(this->user);
				 this->db->cerrarConection();
		}

};
}
