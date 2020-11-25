#pragma once
#include "CCorrupt.h"

class CCorrupts
{
private:

	vector <CCorrupt*> corrupts;
	
public:

	CCorrupts(int n, Rectangle obj , Bitmap^ img)
	{

		for(int i=0; i<n;i++)
		{
			CCorrupt * obs = new CCorrupt(img);

			if(obs->Area().IntersectsWith(obj)==false && Colision(obs->Area())== false)
			{
				corrupts.push_back(obs);
			}
			else
			{
				delete obs;
				i--;
			}
		}

	}
	~CCorrupts()
	{
		for(int i=0; i < corrupts.size();i++)
		{
			delete corrupts.at(i);
		}
	}

	bool Colision(Rectangle obj)
	{
		for each (CCorrupt * obs in corrupts)
		{
			if(obs->Area().IntersectsWith(obj))
			{
				return true;
			}
		}
		return false;
	}

	void Mover(Graphics^ g)
	{
		for each (CCorrupt * obs in corrupts)
		{
			obs->Mover(g);
		}
	}

	void Mostrar(Graphics^ g, Bitmap^ img)
	{
		for each (CCorrupt * obs in corrupts)
		{
			obs->Mostrar(g,img);
		}
	}

};
