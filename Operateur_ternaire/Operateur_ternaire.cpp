// Operateur_ternaire.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

int main()
{
	int nmb = 8; // affiche 100 car pas > 2, pas > 0, pas > 10, affiche 100 par default

	int result = nmb < 10 ? nmb > 0 ? nmb < 2 ? 1 : 5 : 0 : 100; // l'ordre compte!!! rentre si et seulement si, il faut que la premiere soit vrai pour entrer dans la deuxième
	int result;
	

	/*if (nmb < 10)
	{
		if (nmb > 0)
		{
			if (nmb < 2)
			{
			result = 1;
			}
			else result = 5;
		}
		else result = 0;
	}
	else result = 100;
	*/
	

	std::cout << result << std::endl;

	return 0;

}

