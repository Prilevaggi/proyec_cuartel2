#pragma once
#include "guardias.h"
#include "servicios.h"
#include "cargarGuardia.h"
#include "DataBase.h"



namespace proyec2 {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	
	/// <summary>
	/// Resumen de menuPrincipal
	/// </summary>
	public ref class menuPrincipal : public System::Windows::Forms::Form
	{

	private:
		DataBase^ db;
		String^ pass;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
		   String^ user;










	public:


		menuPrincipal(String^ user, String^ pass)
		{
			InitializeComponent();
			this->user = user;
			this->pass = pass;
			this->db = gcnew DataBase();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~menuPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel_contenedor;
	protected:
	private: System::Windows::Forms::Panel^ panel_margen;
	private: System::Windows::Forms::Button^ guardias;
	private: System::Windows::Forms::Panel^ panel_lateral;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(menuPrincipal::typeid));
			this->panel_contenedor = (gcnew System::Windows::Forms::Panel());
			this->panel_margen = (gcnew System::Windows::Forms::Panel());
			this->guardias = (gcnew System::Windows::Forms::Button());
			this->panel_lateral = (gcnew System::Windows::Forms::Panel());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel_lateral->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel_contenedor
			// 
			this->panel_contenedor->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel_contenedor->Location = System::Drawing::Point(200, 69);
			this->panel_contenedor->Name = L"panel_contenedor";
			this->panel_contenedor->Size = System::Drawing::Size(608, 380);
			this->panel_contenedor->TabIndex = 1;
			this->panel_contenedor->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &menuPrincipal::panel_contenedor_Paint);
			// 
			// panel_margen
			// 
			this->panel_margen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel_margen.BackgroundImage")));
			this->panel_margen->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel_margen->Location = System::Drawing::Point(0, 0);
			this->panel_margen->Name = L"panel_margen";
			this->panel_margen->Size = System::Drawing::Size(200, 184);
			this->panel_margen->TabIndex = 0;
			// 
			// guardias
			// 
			this->guardias->Cursor = System::Windows::Forms::Cursors::Hand;
			this->guardias->Dock = System::Windows::Forms::DockStyle::Top;
			this->guardias->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->guardias->Location = System::Drawing::Point(0, 184);
			this->guardias->Name = L"guardias";
			this->guardias->Size = System::Drawing::Size(200, 39);
			this->guardias->TabIndex = 1;
			this->guardias->Text = L"GUARDIAS";
			this->guardias->UseVisualStyleBackColor = true;
			this->guardias->Click += gcnew System::EventHandler(this, &menuPrincipal::guardias_Click);
			// 
			// panel_lateral
			// 
			this->panel_lateral->Controls->Add(this->linkLabel1);
			this->panel_lateral->Controls->Add(this->button3);
			this->panel_lateral->Controls->Add(this->button2);
			this->panel_lateral->Controls->Add(this->button1);
			this->panel_lateral->Controls->Add(this->guardias);
			this->panel_lateral->Controls->Add(this->panel_margen);
			this->panel_lateral->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel_lateral->Location = System::Drawing::Point(0, 0);
			this->panel_lateral->Name = L"panel_lateral";
			this->panel_lateral->Size = System::Drawing::Size(200, 449);
			this->panel_lateral->TabIndex = 0;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(59, 423);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(69, 17);
			this->linkLabel1->TabIndex = 5;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"CERRAR ";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &menuPrincipal::linkLabel1_LinkClicked);
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Dock = System::Windows::Forms::DockStyle::Top;
			this->button3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(0, 298);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(200, 40);
			this->button3->TabIndex = 4;
			this->button3->Text = L"NUEVO SERVICIO";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Dock = System::Windows::Forms::DockStyle::Top;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(0, 262);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(200, 36);
			this->button2->TabIndex = 3;
			this->button2->Text = L"SERVICIOS";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &menuPrincipal::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Dock = System::Windows::Forms::DockStyle::Top;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(0, 223);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(200, 39);
			this->button1->TabIndex = 2;
			this->button1->Text = L"CARGAR GUARDIA";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &menuPrincipal::button1_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->panel1);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(200, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(608, 63);
			this->panel2->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Location = System::Drawing::Point(449, 27);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 23);
			this->label4->TabIndex = 8;
			this->label4->Text = L"seccion";
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Location = System::Drawing::Point(3, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(69, 63);
			this->panel1->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Location = System::Drawing::Point(165, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(70, 23);
			this->label5->TabIndex = 9;
			this->label5->Text = L"label5";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(90, 32);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(12, 18);
			this->label3->TabIndex = 7;
			this->label3->Text = L" ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(134, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(12, 18);
			this->label1->TabIndex = 5;
			this->label1->Text = L" ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(89, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 23);
			this->label2->TabIndex = 6;
			this->label2->Text = L"label2";
			// 
			// menuPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ClientSize = System::Drawing::Size(808, 449);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel_contenedor);
			this->Controls->Add(this->panel_lateral);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"menuPrincipal";
			this->Text = L"menuPrincipal";
			this->panel_lateral->ResumeLayout(false);
			this->panel_lateral->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		template<class t>
		void abrirPanel(t formHijo) {

			if (this->panel_contenedor->Controls->Count > 0)
				this->panel_contenedor->Controls->RemoveAt(0);
			formHijo->TopLevel = false;
			formHijo->Dock = DockStyle::Fill;
			this->panel_contenedor->Controls->Add(formHijo);
			this->panel_contenedor->Tag = formHijo;
			formHijo->Show();
		}







	private: System::Void guardias_Click(System::Object^ sender, System::EventArgs^ e) {
		if ((this->panel_contenedor->Controls->Count) > 0)
			this->panel_contenedor->Controls->RemoveAt(0);
		proyec2::guardias^ ventana1 = gcnew proyec2::guardias();
		ventana1->TopLevel = false;
		ventana1->Dock = DockStyle::Fill;
		this->panel_contenedor->Controls->Add(ventana1);
		this->panel_contenedor->Tag = ventana1;
		this->db->abrirConection();
		//ventana1->bi
		ventana1->dataGuardias->DataSource = this->db->guardiaSeccion(this->user);
		//ajustar tabla al datagrid

		ventana1->Show();
		this->db->cerrarConection();
		if (ventana1->ant == 1) {
			ventana1->Hide();
			this->db->abrirConection();
			ventana1->dataGuardias->DataSource = this->db->guardiasAnteriores(this->user);
			ventana1->Show();
			this->db->cerrarConection();
		}
		if (ventana1->init == 1) {
			ventana1->Close();
			this->Visible = true;
		}
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if ((this->panel_contenedor->Controls->Count) > 0)
			this->panel_contenedor->Controls->RemoveAt(0);
		proyec2::cargarGuardia^ ventana1 = gcnew proyec2::cargarGuardia();
		ventana1->TopLevel = false;
		ventana1->Dock = DockStyle::Fill;
		this->panel_contenedor->Controls->Add(ventana1);
		this->panel_contenedor->Tag = ventana1;
		ventana1->Show();
		if (ventana1->guardar == 1) {
			String^ fecha = "2023-" + ventana1->text_mes->Text + "-" + ventana1->text_dia->Text;
			String^ entrada = ventana1->text_entrada->Text + ":00:00";
			String^ salida = ventana1->text_salida->Text + ":00:00";
			try {

				this->db->abrirConection();
				this->db->insertGuardia(user, fecha, entrada, salida);
				this->db->cerrarConection();
				MessageBox::Show("Se registro su guardia correctamente", "Nuevo registro", MessageBoxButtons::OK, MessageBoxIcon::Information);

			}
			catch (Exception^ e) {
				
				MessageBox::Show("No se pudo realizar el registro", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

			}
		;
		}

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->abrirPanel(gcnew proyec2::servicios);
	}

private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {

	if (MessageBox::Show("Estas seguro?", "Cerrar Sesion", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {

		this->Visible = false;
	}
}


	private: System::Void panel_contenedor_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		this->mostrarusuario();
	
}

		 public:void mostrarusuario() {
			this->db->abrirConection();
			  DataRow^ result = db->nombre(user);
			  String^ nombre = result["nombre"]->ToString(); 
			  label5->Text = nombre;
			  DataRow^ result2 = db->apellido(user);
			  String^ apellido = result2["apellido"]->ToString();
			  label2->Text = apellido;
			  DataRow^ result3 = db->jerarquia(user);
			  String^ jerarquia = result3["jerarquia"]->ToString();
			  label3->Text = jerarquia;
			  DataRow^ result4 = db->tomarSeccion(user);
			  String^ seccion = result4["seccion"]->ToString(); 
			  label4->Text = seccion;
			   this->db->cerrarConection();

		   }

			

};
}
