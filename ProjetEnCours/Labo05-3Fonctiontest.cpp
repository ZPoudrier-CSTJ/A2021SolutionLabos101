//But: utiliser des fonctions existantes et se familisariser avec le vocabulaire des fonctions.
// Demander 2 nombres a l'utilisateur le 1 sera la base et le 2 sera la puissance. 
// Le progrmamme appelle une fonction math�matique pour calculer la puissance de la base.
// // Auteurs: Zachary Poudrier
// Date: Aujourd'hui
//1. IL faut cr�er notre propre biblioth�que
//2. Mode d'emploi, comment l'utiliser, son nom et les param�tres n�cessaire.
//3. il faut cr�er la d�finition de la fonction: les instruction qu'elle doit faire.
//4. IL faut appeler la fonction pour valider son fonctionnement.

#include <iostream>
#include "Fonctiontest.h"

using namespace std;
int main()

{
	int restart = 1;
	while (restart == 1)
	{



		setlocale(LC_ALL, "");

		//double nb1;
		//double nb2;
		//double nb3;
		int factoriel;
		int jour;
		int mois; 
		int annee;

		/*cout << "Entrer le premier nombre: ";
		cin >> nb1;
		cout << "Entrer le deuxi�me nombre: ";
		cin >> nb2;
		cout << "Entrer le troisi�me nombre: ";
		cin >> nb3;*/
		cout << "Veuillez entrer un numero de jour (1 � 31): ";
		cin >> jour;
		while (jour < 1 || jour > 31)
		{
			cout << "Jours non-valide ";
			cout << "Veuillez entrer un numero de jour (1 � 31): ";
			cin >> jour;
		}
		cout << "Veuillez entrer un numero de mois (1 � 12): ";
		cin >> mois;
		while (mois < 1 || mois > 12)
		{
			cout << "Mois non-valide ";
			cout << "Veuillez entrer un numero de mois (1 � 12): ";
			cin >> mois;
		}
	
		cout << "Veuillez entrer un numero d'annee (1592 � ...): ";
		cin >> annee;
		while (annee < 1592)
		{
			cout << "Ann�e non valide ";
			cout << "Veuillez entrer un numero d'annee (1592 � ...): ";
			cin >> annee;
		}
	 if (mois == 2 && jour > 28 && annee % 4 != 0 )
		{
			while (jour > 28)
			{
				cout << "Jours non-valide ";
				cout << "Veuillez entrer un numero de jour (1 � 31): ";
				cin >> jour;
			}

		}
	else if (mois == 2 && jour > 29 && annee % 4 == 0)
	{
		while (jour > 29)
		{
			cout << "Jours non-valide ";
			cout << "Veuillez entrer un numero de jour (1 � 31): ";
			cin >> jour;
		}

	}
	
		

		cout << "================ Test de la fonction afficher la date en toute lettre d'un jour pass� en param�tre ==============" << endl;
		//Demander a l'utilisateur 3 information sur la date et appeler la fonction calculerFactoriel qui retourne le plus grand des 3 nombres.
		// qui sont pass�s en param�tre � la fonction.

		//afficherDate(jour, mois, annee);
		/*cout << "Veuillez entrer un nombre entier: ";
		cin >> factoriel;
		if (modulerPair(factoriel))
		{
			cout << factoriel << " est pair";
		}
		else
		{
			cout << factoriel << " est impair\n";
		}


		cout << "Voulez-vous recommemncer: Y=1, N=0";
		cin >> restart;
		*/
	}
}
	

