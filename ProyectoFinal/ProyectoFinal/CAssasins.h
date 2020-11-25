#pragma once
#include "CAssasin.h"

class CAssasins
{
private:

	vector <CAssasin*> assasins;

public:
	CAssasins(int n, Rectangle obj, Bitmap^ img)
	{
		for (int i = 0; i < n; i++)
		{
			CAssasin* obs = new CAssasin(img);

			if (obs->Area().IntersectsWith(obj) == false && Colision(obs->Area()) == false)
			{
				assasins.push_back(obs);
			}
			else
			{
				delete obs;
				i--;
			}
		}
	}
	~CAssasins()
	{
		for (int i = 0; i < assasins.size(); i++)
		{
			delete assasins.at(i);
		}
	}
	int getX()
	{
		for each (CAssasin * obs in assasins)
		{
			return obs->getX();
		}
	}
	int getY()
	{
		for each (CAssasin * obs in assasins)
		{
			return obs->getY();
		}
	}
	bool Colision(Rectangle obj)
	{
		for each (CAssasin * obs in assasins)
		{
			if (obs->Area().IntersectsWith(obj))
			{
				return true;
			}
		}
		return false;
	}

	void Mover(Graphics^ g)
	{
		for each (CAssasin * obs in assasins)
		{
			obs->Mover(g);
		}
	}

	void Mostrar(Graphics^ g, Bitmap^ img)
	{
		for each (CAssasin * obs in assasins)
		{
			obs->Mostrar(g, img);
		}
	}
};
