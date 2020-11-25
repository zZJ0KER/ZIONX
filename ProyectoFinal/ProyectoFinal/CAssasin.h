#pragma once
#include "CEnemigo.h"

enum SpriteAssasin
{
	aCaminarArriba,
	aCaminarDerecha,
	aCaminarAbajo,
	aCaminarIzquierda,
};
class CAssasin : public CEnemigo
{
	SpriteAssasin accion;
	
public:
	CAssasin(Bitmap^ img)
	{
		x = 0;
		y = rand() % 400;

		dx = 5;
		dy = 5;

		ancho = img->Width / 5;
		alto = img->Height / 5;

		accion = aCaminarAbajo;

	}

	void SetAccion(SpriteAssasin value)
	{
		accion = value;
	}

	void Mover(Graphics^ g)
	{
		if(!(x + dx >= 0 && x + dx + ancho < g->VisibleClipBounds.Width))
		{
			dx *= -1;
		}

		if (dx < 0)
		{
			accion = aCaminarIzquierda;
		}
		else if (dx > 0)
		{
			accion = aCaminarDerecha;
		}
		
		x+=dx;
	}

	void Mostrar(Graphics^ g, Bitmap^ img)
	{
		Rectangle corte = Rectangle(IDx * ancho, accion * alto, ancho, alto);
		g->DrawImage(img, Area(), corte, GraphicsUnit::Pixel);

		if (accion >= cCaminarArriba && accion <= cCaminarIzquierda)
			IDx = (IDx + 1) % 4;

	}
};
