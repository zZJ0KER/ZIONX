#pragma once
#include "CEnemigo.h"

enum SpriteCorrupt
{
	cCaminarArriba,
	cCaminarDerecha,
	cCaminarAbajo,
	cCaminarIzquierda,
};
class CCorrupt : public CEnemigo
{
private:

	SpriteCorrupt accion;
	int c;

public:

	CCorrupt(Bitmap^ img)
	{
		c = rand()%2;

		x = rand() % 480 + 35;
		y = rand() % 300 + 35;

		if(c == 0)
		{
			dx = rand() % 6 - 3;
			if (dx == 0)
				dx = 3;
		}
		else
		{
			dy = rand() % 6 - 3;
			if (dy == 0)
				dy = 3;
		}

		ancho = img->Width / 6;
		alto = img->Height / 5;

		accion = cCaminarAbajo;

	}

	void Mover(Graphics^ g)
	{
		if (!(x + dx >= 0 && x + dx + ancho < g->VisibleClipBounds.Width))
		{
			dx*=-1;
		}
		if (!(y + dy >= 0 && y + dy + alto < g->VisibleClipBounds.Height))
		{
			dy*=-1;
		}

		if(dx<0)
		{
			accion = cCaminarIzquierda;
		}
		else if(dx>0)
		{
			accion = cCaminarDerecha;
		}
		else if(dy<0)
		{
			accion = cCaminarArriba;
		}
		else if(dy>0)
		{
			accion = cCaminarAbajo;
		}

		x += dx;
		y += dy;
	}

	void Mostrar(Graphics^ g, Bitmap^ img)
	{
		Rectangle corte = Rectangle(IDx*ancho,accion * alto ,ancho, alto);
		g->DrawImage(img,Area(), corte,GraphicsUnit::Pixel);

		if (accion >= cCaminarArriba && accion <= cCaminarIzquierda)
			IDx = (IDx + 1) % 4;
	}
};
