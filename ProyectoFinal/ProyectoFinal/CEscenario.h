#pragma once
#include "CEntidad.h"

class CEscenario : public CEntidad
{
public:

	CEscenario()
	{
		x = 0;
		y = 0;
	}

	void PintarEscenario(Graphics^ g, Bitmap^ img)
	{
		g->DrawImage(img, Rectangle(0, 0, 700, 400), Rectangle(0, 0, img->Width, img->Height), GraphicsUnit::Pixel);
	}
	
};
