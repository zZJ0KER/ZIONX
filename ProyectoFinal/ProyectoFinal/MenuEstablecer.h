#pragma once
#include "FormJuego.h"

namespace ProyectoFinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MenuEstablecer
	/// </summary>
	public ref class MenuEstablecer : public System::Windows::Forms::Form
	{
	public:
		MenuEstablecer(void)
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
		~MenuEstablecer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnJugarEstablecer;
	private: System::Windows::Forms::Button^ btnSalirEstablecer;
	private: System::Windows::Forms::NumericUpDown^ numObstaculos;


	private: System::Windows::Forms::NumericUpDown^ numVidas;
	private: System::Windows::Forms::NumericUpDown^ numCorrupts;
	private: System::Windows::Forms::NumericUpDown^ numAssasins;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::NumericUpDown^ numTiempo;
	private: System::Windows::Forms::Label^ label10;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuEstablecer::typeid));
			this->btnJugarEstablecer = (gcnew System::Windows::Forms::Button());
			this->btnSalirEstablecer = (gcnew System::Windows::Forms::Button());
			this->numObstaculos = (gcnew System::Windows::Forms::NumericUpDown());
			this->numVidas = (gcnew System::Windows::Forms::NumericUpDown());
			this->numCorrupts = (gcnew System::Windows::Forms::NumericUpDown());
			this->numAssasins = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->numTiempo = (gcnew System::Windows::Forms::NumericUpDown());
			this->label10 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numObstaculos))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numVidas))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numCorrupts))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numAssasins))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numTiempo))->BeginInit();
			this->SuspendLayout();
			// 
			// btnJugarEstablecer
			// 
			this->btnJugarEstablecer->Location = System::Drawing::Point(205, 268);
			this->btnJugarEstablecer->Name = L"btnJugarEstablecer";
			this->btnJugarEstablecer->Size = System::Drawing::Size(98, 33);
			this->btnJugarEstablecer->TabIndex = 0;
			this->btnJugarEstablecer->Text = L"Jugar";
			this->btnJugarEstablecer->UseVisualStyleBackColor = true;
			this->btnJugarEstablecer->Click += gcnew System::EventHandler(this, &MenuEstablecer::btnJugarEstablecer_Click);
			// 
			// btnSalirEstablecer
			// 
			this->btnSalirEstablecer->Location = System::Drawing::Point(319, 268);
			this->btnSalirEstablecer->Name = L"btnSalirEstablecer";
			this->btnSalirEstablecer->Size = System::Drawing::Size(98, 33);
			this->btnSalirEstablecer->TabIndex = 1;
			this->btnSalirEstablecer->Text = L"Salir";
			this->btnSalirEstablecer->UseVisualStyleBackColor = true;
			this->btnSalirEstablecer->Click += gcnew System::EventHandler(this, &MenuEstablecer::btnSalirEstablecer_Click);
			// 
			// numObstaculos
			// 
			this->numObstaculos->Location = System::Drawing::Point(185, 27);
			this->numObstaculos->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			this->numObstaculos->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->numObstaculos->Name = L"numObstaculos";
			this->numObstaculos->Size = System::Drawing::Size(93, 20);
			this->numObstaculos->TabIndex = 3;
			this->numObstaculos->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 40, 0, 0, 0 });
			// 
			// numVidas
			// 
			this->numVidas->Location = System::Drawing::Point(185, 71);
			this->numVidas->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numVidas->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			this->numVidas->Name = L"numVidas";
			this->numVidas->Size = System::Drawing::Size(93, 20);
			this->numVidas->TabIndex = 4;
			this->numVidas->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// numCorrupts
			// 
			this->numCorrupts->Location = System::Drawing::Point(185, 121);
			this->numCorrupts->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 15, 0, 0, 0 });
			this->numCorrupts->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 8, 0, 0, 0 });
			this->numCorrupts->Name = L"numCorrupts";
			this->numCorrupts->Size = System::Drawing::Size(93, 20);
			this->numCorrupts->TabIndex = 5;
			this->numCorrupts->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 15, 0, 0, 0 });
			// 
			// numAssasins
			// 
			this->numAssasins->Location = System::Drawing::Point(185, 172);
			this->numAssasins->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 8, 0, 0, 0 });
			this->numAssasins->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 4, 0, 0, 0 });
			this->numAssasins->Name = L"numAssasins";
			this->numAssasins->Size = System::Drawing::Size(93, 20);
			this->numAssasins->TabIndex = 6;
			this->numAssasins->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 4, 0, 0, 0 });
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(83, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Obstáculos:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(83, 71);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Vidas:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(83, 121);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Corrupts:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(83, 172);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(51, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Assasins:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(284, 34);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(46, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"(30 - 50)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(284, 78);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"(3 - 10)";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(284, 128);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(40, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"(8 - 15)";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(284, 179);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(34, 13);
			this->label8->TabIndex = 14;
			this->label8->Text = L"(4 - 8)";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(83, 219);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(45, 13);
			this->label9->TabIndex = 15;
			this->label9->Text = L"Tiempo:";
			// 
			// numTiempo
			// 
			this->numTiempo->Location = System::Drawing::Point(185, 217);
			this->numTiempo->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 60, 0, 0, 0 });
			this->numTiempo->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 40, 0, 0, 0 });
			this->numTiempo->Name = L"numTiempo";
			this->numTiempo->Size = System::Drawing::Size(93, 20);
			this->numTiempo->TabIndex = 16;
			this->numTiempo->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 40, 0, 0, 0 });
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(284, 224);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(46, 13);
			this->label10->TabIndex = 17;
			this->label10->Text = L"(40 - 60)";
			// 
			// MenuEstablecer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(429, 324);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->numTiempo);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->numAssasins);
			this->Controls->Add(this->numCorrupts);
			this->Controls->Add(this->numVidas);
			this->Controls->Add(this->numObstaculos);
			this->Controls->Add(this->btnSalirEstablecer);
			this->Controls->Add(this->btnJugarEstablecer);
			this->DoubleBuffered = true;
			this->Name = L"MenuEstablecer";
			this->Text = L"Establecer";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numObstaculos))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numVidas))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numCorrupts))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numAssasins))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numTiempo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnJugarEstablecer_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int obs = int(numObstaculos->Value);
		int vid = int(numVidas->Value);
		int corr = int(numCorrupts->Value);
		int ass = int(numAssasins->Value);
		int tiem = int(numTiempo->Value);

		FormJuego^ frmJuego = gcnew FormJuego(obs,vid,corr,ass,tiem);
		frmJuego->Show();
	}

    private: System::Void btnSalirEstablecer_Click(System::Object^ sender, System::EventArgs^ e) 
    {
	this->Close();
    }

};
}
