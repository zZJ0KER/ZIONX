#pragma once
#include "CEntidad.h"

enum SpriteJugador
{
	CaminarArriba,
	CaminarDerecha,
	CaminarAbajo,
	CaminarIzquierda,
};

class CJugador : public CEntidad
{
private:

	int vidas;
	SpriteJugador accion;

public:

	CJugador(Bitmap^ img, int v)
	{
		x = 25;
		y = 25;
		dx = 0;
		dy = 0;
		ancho = img->Width/6;
		alto= img->Height/5;

		accion = CaminarAbajo;
		vidas = v;
	}

	void setVidas(int value)
	{
		vidas += value;
	}

	int getVidas()
	{
		return vidas;
	}

	void SetAccion(SpriteJugador value)
	{
		accion = value;
	}

	void Mover(Graphics^ g)
	{
		if (x+dx >=0 && x+dx+ancho<g->VisibleClipBounds.Width )
		{
			x += dx;
		}
		if (y + dy >= 0 && y + dy + alto < g->VisibleClipBounds.Height)
		{
			y += dy;
		}
	}

	void Mostrar(Graphics^ g, Bitmap^ img)
	{

		g->DrawString("Vidas : " + vidas, gcnew Font("Arial",12), Brushes:: Blue, 0 , 0);


		Rectangle Corte = Rectangle(IDx*ancho,accion*alto, ancho, alto);
		g->DrawImage(img, Area(),Corte,GraphicsUnit::Pixel);

		if(dx != 0 || dy != 0)
		{
			IDx = (IDx + 1) % 4;
		}
		
	}

};
