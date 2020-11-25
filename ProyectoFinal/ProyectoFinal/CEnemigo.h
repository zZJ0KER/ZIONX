#pragma once
#include "CNpc.h"

class CEnemigo : public CNpc
{
public:

	CEnemigo()
	{
		x = y = 0;
		dx = dy = 0;
		ancho = alto = 0;
		IDx = 0;
	}
};
