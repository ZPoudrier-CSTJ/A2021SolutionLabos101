//But: utiliser des fonctions existantes et se familisariser avec le vocabulaire des fonctions.
// Demander 2 nombres a l'utilisateur le 1 sera la base et le 2 sera la puissance. 
// Le progrmamme appelle une fonction mathématique pour calculer la puissance de la base.
// // Auteurs: Zachary Poudrier
// Date: Aujourd'hui
//1. IL faut créer notre propre bibliothèque
//2. Mode d'emploi, comment l'utiliser, son nom et les paramètres nécessaire.
//3. il faut créer la définition de la fonction: les instruction qu'elle doit faire.
//4. IL faut appeler la fonction pour valider son fonctionnement.

#include <iostream>
#include <math.h>
#include "Labo05FonctionMath.h"
using namespace std;
int main()

{


		setlocale(LC_ALL, "");

		double long base;

		cout << "Veuillez entrer la valeur de la base: ";
		cin >> base;

		cout << calculerCarre(base) << endl;


		


		system("pause");
		system("cls");
	}
	

