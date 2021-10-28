#include "Header.h"



bool etreNombreEntier(string clavier)
{

	if (!clavier.empty() && clavier.front() >= '0' && clavier.front() <= '9')
	{
		return true;
	}
	//Deuxime cas : le premier caractère n'est pas un chiffre
		if (clavier.size() >= 2 && clavier.front() == '-' && clavier.at(1) >= '0' && clavier[1] <= '9')
		{
			return true;
		}


return false;
   
}
