#pragma once
#include "CObstaculo.h"


class CObstaculos
{
private:

	vector <CObstaculo*> obstaculos;

public:

	CObstaculos(int n, Rectangle obj)
	{
		for (int i = 0; i < n; i++)
		{
			CObstaculo* obs = new CObstaculo;

			if (obs->Area().IntersectsWith(obj) == false && Colision(obs->Area())==false)
			{
				obstaculos.push_back(obs);
			}
			else
			{
				delete obs;
				i--;
			}

		}
	}
	~CObstaculos()
	{
		for (int i = 0; i < obstaculos.size(); i++)
		{
			delete obstaculos.at(i);
		}
	}

	Rectangle GetArea()
	{
		for each(CObstaculo * obs in obstaculos)
		{
			return obs->Area();
		}
	}

	Rectangle GetNextArea()
	{
		for each (CObstaculo * obs in obstaculos)
		{
			return obs->NextArea();
		}
	}

	bool Colision(Rectangle obj)
	{
		for each (CObstaculo * obs in obstaculos)
		{
			if(obs->NextArea().IntersectsWith(obj))
			{
				return true;
			}
		}
		return false;
	}
	void Mover(Graphics^ g)
	{
		for each(CObstaculo* obs in obstaculos)
		{
			obs->Mover(g);
		}
	}
	void Mostrar(Graphics^ g, Bitmap^ img)
	{
		for each (CObstaculo * obs in obstaculos)
		{
			obs->Mostrar(g,img);
		}
	}

};