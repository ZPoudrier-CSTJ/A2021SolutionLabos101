//But: utiliser des fonctions existantes et se familisariser avec le vocabulaire des fonctions.
// Demander 2 nombres a l'utilisateur le 1 sera la base et le 2 sera la puissance. 
// Le progrmamme appelle une fonction math�matique pour calculer la puissance de la base.
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
		char charact�re;

		cout << "Veuillez entrer la valeur de la base: ";
		cin >> base;

		cout << "Veuillez entrer la valeur de la puissance: ";
		cin >> puissance;
		// On calcule le r�sultat de la base � la puissance en fesant appel a une fonction de la biblioth�que math.h
		// Appel signifie utilisation de la fonction, ex�cution de la fonction.
		resultat = pow( floor(base),  ceil(puissance));

		cout << resultat << endl;

		cout << "Voulez-vous recommencer: Y=1, N=0";
		cin >> restart;


		// le programme indique si le charactere est un chiffre ou une lettre

		cout << "Veuillez entrer un charact�re: ";
		cin >> charact�re;

		if (isdigit(charact�re)) {

			cout << charact�re << " est un nombre\n";

		}
		else if (isalpha(charact�re))
		{

			cout << charact�re << " est une lettre\n";
		}
		else
		{
			cout << charact�re << " est autre chose\n";
		}
		system("pause");
	}





		system("cls");
	}
	

