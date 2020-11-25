#pragma once	
#include "CJugador.h"
#include "CObstaculos.h"
#include "CMeta.h"
#include "CEscenario.h"
#include "CCorrupts.h"
#include "CAssasins.h"

ref class CJuego
{
private:
	CJugador* jugador;
	CObstaculos* obstaculos;
	CMeta* meta;
	CEscenario* escenario;
	CCorrupts* corrupts;
	CAssasins* assasins;

	Bitmap^ imgObstaculo;
	Bitmap^ imgJugador;
	Bitmap^ imgMeta;
	Bitmap^ imgEscenario;
	Bitmap^ imgCorrupt;
	Bitmap^ imgAssasin;

	int CooldownAtaqueCorrupt;
	int CooldownAtaqueAssasin;
	int tiempo;


public:

	CJuego(int nroObstaculos, int nroVidas, int nroCorrupts , int nroAssasins, int t)
	{
		imgObstaculo = gcnew Bitmap("imagenes/bmpSolido.png");
		imgJugador = gcnew Bitmap("imagenes/bmpJugador.png");
		imgMeta = gcnew Bitmap("imagenes/bmpMeta.png");
		imgEscenario = gcnew Bitmap("imagenes/bmpEscenario.png");
		imgCorrupt = gcnew Bitmap("imagenes/bmpCorrupts.png");
		imgAssasin = gcnew Bitmap("imagenes/bmpAssasins.png");

		imgJugador->MakeTransparent(imgJugador->GetPixel(0, 0));
		imgMeta->MakeTransparent(imgMeta->GetPixel(0, 0));
		imgCorrupt->MakeTransparent(imgAssasin->GetPixel(0, 0));
		imgAssasin->MakeTransparent(imgAssasin->GetPixel(0, 0));

		jugador = new CJugador(imgJugador, nroVidas);
		obstaculos = new CObstaculos(nroObstaculos,jugador->Area());
		meta = new CMeta();
		corrupts = new CCorrupts(nroCorrupts, obstaculos->GetArea(),imgCorrupt);
		assasins = new CAssasins(nroAssasins,obstaculos->GetArea(),imgAssasin);

		CooldownAtaqueCorrupt = 0;
		CooldownAtaqueAssasin = 0;
		tiempo = (t+20) * 1000;
	}
	~CJuego()
	{
		delete jugador,obstaculos, meta,corrupts,assasins;
		delete imgObstaculo, imgJugador ,imgMeta, imgCorrupt,imgAssasin;
	}
	void PintarEscenario(Graphics^ g)
	{
		escenario->PintarEscenario(g,imgEscenario);
	}
	void MovimientoJugador(bool accion,Keys tecla)
	{
		int v = 2;
		if(accion == true)
		{
			if (tecla == Keys::Up)
			{
				jugador->SetDy(-v);
				jugador->SetAccion(CaminarArriba);
			}
			else if (tecla == Keys::Down)
			{
				jugador->SetDy(v);
				jugador->SetAccion(CaminarAbajo);
			}
			else if (tecla == Keys::Right) 
			{
				jugador->SetDx(v);
				jugador->SetAccion(CaminarDerecha);
			}
			else if (tecla == Keys::Left)
			{
				jugador->SetDx(-v);
				jugador->SetAccion(CaminarIzquierda);
			}
		}
		else
		{
			if (tecla == Keys::Up)
				jugador->SetDy(0);
			else if (tecla == Keys::Down)
				jugador->SetDy(0);
			else if (tecla == Keys::Right)
				jugador->SetDx(0);
			else if (tecla == Keys::Left)
				jugador->SetDx(0);
		}
	}
	bool GanarJuego(Graphics^ g)
	{
		if(meta->Colision(jugador->Area())== true)
		{
			return true;
		}
	}

	bool Mover(Graphics^ g)
	{
		//Quitar vidas con colision de Corrupts
		if (corrupts->Colision(jugador->Area()) && clock()-CooldownAtaqueCorrupt >= 2000) 
		{
			jugador->setVidas(-1);
			CooldownAtaqueCorrupt = clock();

			if (jugador->getVidas() == 0) 
			{
				return false;
			}
	    }

		if(assasins->Colision(jugador->Area()) && clock() - CooldownAtaqueAssasin >= 2000)
		{
			jugador->setVidas(-1);
			CooldownAtaqueAssasin = clock();
			if (jugador->getVidas() == 0)
			{
				return false;
			}
		}

		if (tiempo <= clock())
			return false;


		//Mover 
		if (obstaculos->Colision(jugador->NextArea()) == false)
		jugador->Mover(g);

		obstaculos->Mover(g);
		meta->Mover(g);
		corrupts->Mover(g);
		assasins->Mover(g);

		return true;
	}

	void Mostrar(Graphics^ g)
	{
		g->DrawString("Tiempo : " + ((tiempo - clock())/1000), gcnew Font("Arial", 12), Brushes::Blue, 75, 0);


		jugador->Mostrar(g, imgJugador);
		meta->Mostrar(g, imgMeta);
		obstaculos->Mostrar(g, imgObstaculo);
		corrupts->Mostrar(g, imgCorrupt);
		assasins->Mostrar(g, imgAssasin);
		
	}
};
