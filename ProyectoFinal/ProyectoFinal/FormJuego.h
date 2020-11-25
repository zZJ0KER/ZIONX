#pragma once
#include "CJuego.h"

namespace ProyectoFinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	public ref class FormJuego : public Form
	{

	public:

		CJuego^ juego;

		FormJuego(int nroObs,int nroVidas,int nroCorrupts, int nroAssasins, int tiempo)
		{
			InitializeComponent();
			juego = gcnew CJuego(nroObs,nroVidas,nroCorrupts, nroAssasins, tiempo); 

		
		}

	protected:
		
		~FormJuego()
		{
			if (components)
			{
				delete components;
			}
			delete juego;
		}
	private: System::Windows::Forms::Timer^ clock;
	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		


#pragma region Windows Form Designer generated code
		
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->clock = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// clock
			// 
			this->clock->Interval = 33;
			this->clock->Tick += gcnew System::EventHandler(this, &FormJuego::clock_Tick);
			// 
			// FormJuego
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(697, 398);
			this->Name = L"FormJuego";
			this->Text = L"FormJuego";
			this->Load += gcnew System::EventHandler(this, &FormJuego::FormJuego_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormJuego::FormJuego_KeyDown);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &FormJuego::FormJuego_KeyUp);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void clock_Tick(Object^ sender, EventArgs^ e)
	{
		Graphics^ g = this->CreateGraphics();
		BufferedGraphicsContext^ bfc = BufferedGraphicsManager::Current;
		BufferedGraphics^ bf = bfc->Allocate(g, this->ClientRectangle);

		bf->Graphics->Clear(BackColor);
		juego->PintarEscenario(bf->Graphics);
		juego->Mostrar(bf->Graphics);

		bf->Render(g);


		if(juego->Mover(g) == false)
		{
			clock->Enabled = false;
			MessageBox::Show("Perdiste, Fuiste Capturado...");
			this->Close();
		}

		if(juego->GanarJuego(g)== true)
		{
			clock->Enabled = false;
			MessageBox::Show("!Felicidades, Llegaste al Castillo!");
			this->Close();
			
		}
	}
	private: Void FormJuego_KeyDown(Object^ sender, KeyEventArgs^ e)
	{
		juego->MovimientoJugador(true, e->KeyCode);
	}
	private: Void FormJuego_KeyUp(Object^ sender, KeyEventArgs^ e) 
	{
		juego->MovimientoJugador(false, e->KeyCode);
	}
	private: System::Void FormJuego_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		clock->Enabled = true;
	}
	};
}
