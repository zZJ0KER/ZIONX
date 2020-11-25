#pragma once
#include "CEntidad.h"

class CMeta : public CEntidad
{
public:

	CMeta() 
	{
		x = rand() % 30 + 610;
		y = rand() % 340;

		ancho = 50;
		alto = 60;
	}

	void Mostrar(Graphics^ g, Bitmap^ img)
	{
		g->DrawImage(img,Area());
	}

	bool Colision(Rectangle obj)
	{
		CMeta* meta = new CMeta;
		if (meta->Area().IntersectsWith(obj))
			return true;
	}
};
