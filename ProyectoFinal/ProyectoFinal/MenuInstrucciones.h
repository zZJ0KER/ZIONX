#pragma once
#include "MenuJuego.h"
#include "MenuEstablecer.h"

namespace ProyectoFinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MenuInstrucciones
	/// </summary>
	public ref class MenuInstrucciones : public System::Windows::Forms::Form
	{
	public:
		MenuInstrucciones(void)
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
		~MenuInstrucciones()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Button^ btnJugarIns;
	private: System::Windows::Forms::Button^ btnSalirIns;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox4;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuInstrucciones::typeid));
			this->btnJugarIns = (gcnew System::Windows::Forms::Button());
			this->btnSalirIns = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnJugarIns
			// 
			this->btnJugarIns->BackColor = System::Drawing::SystemColors::Control;
			this->btnJugarIns->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnJugarIns.BackgroundImage")));
			this->btnJugarIns->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnJugarIns->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnJugarIns->Location = System::Drawing::Point(434, 280);
			this->btnJugarIns->Name = L"btnJugarIns";
			this->btnJugarIns->Size = System::Drawing::Size(116, 34);
			this->btnJugarIns->TabIndex = 2;
			this->btnJugarIns->Text = L"Jugar";
			this->btnJugarIns->UseVisualStyleBackColor = false;
			this->btnJugarIns->Click += gcnew System::EventHandler(this, &MenuInstrucciones::btnJugarIns_Click);
			// 
			// btnSalirIns
			// 
			this->btnSalirIns->Location = System::Drawing::Point(434, 320);
			this->btnSalirIns->Name = L"btnSalirIns";
			this->btnSalirIns->Size = System::Drawing::Size(116, 34);
			this->btnSalirIns->TabIndex = 3;
			this->btnSalirIns->Text = L"Salir";
			this->btnSalirIns->UseVisualStyleBackColor = true;
			this->btnSalirIns->Click += gcnew System::EventHandler(this, &MenuInstrucciones::btnSalirIns_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Control;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(29, 62);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(470, 67);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"El regente supremo de Zion X fue atraido hacia una emboscada por los enemigos del"
				L" reino ahora tu debes ayudar a este personaje a volver a su castillo sano y salv"
				L"o.";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::Control;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(29, 187);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(300, 41);
			this->textBox2->TabIndex = 5;
			this->textBox2->Text = L"Muevete con las flechas direccionales y evita los obstaculos.";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::Control;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(29, 260);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(300, 26);
			this->textBox3->TabIndex = 6;
			this->textBox3->Text = L"Alejate de los enemigos";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(365, 160);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(102, 93);
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(25, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 23);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Historia:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(25, 146);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(158, 23);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Instrucciones:";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::Control;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(29, 309);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(300, 26);
			this->textBox4->TabIndex = 13;
			this->textBox4->Text = L"Llega al castillo para ganar";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// MenuInstrucciones
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(562, 366);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->btnSalirIns);
			this->Controls->Add(this->btnJugarIns);
			this->Name = L"MenuInstrucciones";
			this->Text = L"Instrucciones";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnJugarIns_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		MenuEstablecer^ frmEst = gcnew MenuEstablecer();
		frmEst->Show();
	}
    private: System::Void btnSalirIns_Click(System::Object^ sender, System::EventArgs^ e) 
    {
		this->Close();
    }
};
}
