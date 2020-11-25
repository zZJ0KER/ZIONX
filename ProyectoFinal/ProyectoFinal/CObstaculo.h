#pragma once
#include "CEntidad.h"

class CObstaculo : public CEntidad
{
public:

	CObstaculo()
	{
		x = rand() % 620 ;//900
		y = rand() % 360 ;//400

		ancho = alto = rand() % 10 + 25;
	}

	void Mostrar(Graphics^ g, Bitmap^ img)
	{
		g->DrawImage(img, Area());
	}
};