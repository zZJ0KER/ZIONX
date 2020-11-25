#pragma once
#include "MenuInstrucciones.h"
#include "MenuEstablecer.h"


namespace ProyectoFinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MenuJuego
	/// </summary>
	public ref class MenuJuego : public System::Windows::Forms::Form
	{
	public:
		MenuJuego(void)
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
		~MenuJuego()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnJugarMenu;
	private: System::Windows::Forms::Button^ btnInstruccionesMenu;
	private: System::Windows::Forms::Button^ btnSalirMenu;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuJuego::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnJugarMenu = (gcnew System::Windows::Forms::Button());
			this->btnInstruccionesMenu = (gcnew System::Windows::Forms::Button());
			this->btnSalirMenu = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 35, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(246, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(170, 60);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Zion X";
			// 
			// btnJugarMenu
			// 
			this->btnJugarMenu->Location = System::Drawing::Point(269, 291);
			this->btnJugarMenu->Name = L"btnJugarMenu";
			this->btnJugarMenu->Size = System::Drawing::Size(130, 40);
			this->btnJugarMenu->TabIndex = 1;
			this->btnJugarMenu->Text = L"Jugar";
			this->btnJugarMenu->UseVisualStyleBackColor = true;
			this->btnJugarMenu->Click += gcnew System::EventHandler(this, &MenuJuego::btnJugarMenu_Click);
			// 
			// btnInstruccionesMenu
			// 
			this->btnInstruccionesMenu->Location = System::Drawing::Point(117, 291);
			this->btnInstruccionesMenu->Name = L"btnInstruccionesMenu";
			this->btnInstruccionesMenu->Size = System::Drawing::Size(130, 40);
			this->btnInstruccionesMenu->TabIndex = 2;
			this->btnInstruccionesMenu->Text = L"Instrucciones";
			this->btnInstruccionesMenu->UseVisualStyleBackColor = true;
			this->btnInstruccionesMenu->Click += gcnew System::EventHandler(this, &MenuJuego::btnInstruccionesMenu_Click);
			// 
			// btnSalirMenu
			// 
			this->btnSalirMenu->Location = System::Drawing::Point(423, 291);
			this->btnSalirMenu->Name = L"btnSalirMenu";
			this->btnSalirMenu->Size = System::Drawing::Size(130, 40);
			this->btnSalirMenu->TabIndex = 3;
			this->btnSalirMenu->Text = L"Salir";
			this->btnSalirMenu->UseVisualStyleBackColor = true;
			this->btnSalirMenu->Click += gcnew System::EventHandler(this, &MenuJuego::btnSalirMenu_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Control;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(137, 86);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(110, 21);
			this->textBox1->TabIndex = 5;
			this->textBox1->Text = L"Integrantes:";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::Control;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(162, 123);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(324, 21);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"U20181E301 - Carlo Andre Bolivar Orosco";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::Control;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(162, 161);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(324, 21);
			this->textBox3->TabIndex = 7;
			this->textBox3->Text = L"U201918658 - Freddy Manuel Osorio Frías";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::Control;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(137, 197);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(377, 21);
			this->textBox4->TabIndex = 8;
			this->textBox4->Text = L"U202012835 - Jean Sebastian Anduaga Beramendi";
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::Control;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(162, 237);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(324, 21);
			this->textBox5->TabIndex = 9;
			this->textBox5->Text = L" U20171F413 - Sofía Beatriz Allca Urbano ";
			// 
			// MenuJuego
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(653, 355);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->btnSalirMenu);
			this->Controls->Add(this->btnInstruccionesMenu);
			this->Controls->Add(this->btnJugarMenu);
			this->Controls->Add(this->label1);
			this->Name = L"MenuJuego";
			this->Text = L"Zion X";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnJugarMenu_Click(System::Object^ sender, System::EventArgs^ e)
	{
		MenuEstablecer^ frmEst = gcnew MenuEstablecer();
		frmEst->Show();
	}

	private: System::Void btnInstruccionesMenu_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		MenuInstrucciones^ frmIns = gcnew MenuInstrucciones();
		frmIns->Show();
	}

    private: System::Void btnSalirMenu_Click(System::Object^ sender, System::EventArgs^ e) 
    {
		MessageBox::Show("Usted esta saliendo del juego...");
		this->Close();
    }
};
}
