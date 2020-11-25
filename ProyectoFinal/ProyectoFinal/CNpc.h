#pragma once
#include "CEntidad.h"

class CNpc : public CEntidad
{
public:

	CNpc()
	{
		x = y = 0;
		dx = dy = 0;
		ancho = alto = 0;
		IDx = 0;
	}
};
