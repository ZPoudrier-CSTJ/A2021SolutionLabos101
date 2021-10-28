//But: utiliser des fonctions existantes et se familisariser avec le vocabulaire des fonctions.
// Demander 2 nombres a l'utilisateur le 1 sera la base et le 2 sera la puissance. 
// Le progrmamme appelle une fonction mathématique pour calculer la puissance de la base.
// // Auteurs: Zachary Poudrier
// Date: Aujourd'hui

#include <iostream>
#include <math.h>
using namespace std;
int main()

{
	int restart = 1;
	while (restart == 1)
	{


		setlocale(LC_ALL, "");

		double long base;
		double long puissance;
		double long resultat;
		char charactère;

		cout << "Veuillez entrer la valeur de la base: ";
		cin >> base;

		cout << "Veuillez entrer la valeur de la puissance: ";
		cin >> puissance;
		// On calcule le résultat de la base à la puissance en fesant appel a une fonction de la bibliothèque math.h
		// Appel signifie utilisation de la fonction, exécution de la fonction.
		resultat = pow( floor(base),  ceil(puissance));

		cout << resultat << endl;

		cout << "Voulez-vous recommencer: Y=1, N=0";
		cin >> restart;


		// le programme indique si le charactere est un chiffre ou une lettre

		cout << "Veuillez entrer un charactère: ";
		cin >> charactère;

		if (isdigit(charactère)) {

			cout << charactère << " est un nombre\n";

		}
		else if (isalpha(charactère))
		{

			cout << charactère << " est une lettre\n";
		}
		else
		{
			cout << charactère << " est autre chose\n";
		}
		system("pause");
	}





		system("cls");
	}
	

