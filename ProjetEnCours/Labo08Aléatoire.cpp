//But: Utiliser les fonctions permettant de manipuler le texte dans la console. Il faut inclure le bibliothèque iomanip
//Auteur: Zachary Poudrier
//Date: 2021-10-25

#include "Labo08Fonction.h"

using namespace std;

int main()

{
   int min = 1;
   int max = 6;
   int alea = 0;
   int alea1 = 0;


   // Combien de fois est sortie le chiffre de 1 à 6
   int nb1 = 0;
   int nb2 = 0;
   int nb3 = 0;
   int nb4 = 0;
   int nb5 = 0;
   int nb6 = 0;
   int nb7 = 0;
   int nb8 = 0;
   int nb9 = 0;
   int nb10 = 0;
   int nb11 = 0;
   int nb12 = 0;


   // Les nombres aléatoires sont stocker déjà mélanger dans un tableau et chaque ligne du tableau a un numéro qu'on appelle la seed
   // On peut choisir la graine : le numéro de la ligne aléatoire
   
   
   alea = rand()%6+1;
   srand(time(NULL));
   // Cette fonction srand DOIT être lancer une seule fois au début du programme qui va utiliser l'aléatoire
   cout << "le max de rand : " << RAND_MAX << endl;

   cout << "Le premier nombre aléatoire est : " << alea;

   for (int i = 0; i < 100000; i++)
   {
      
      alea = GenererAleatoire(min, max);
      alea1 = GenererAleatoire(min, max);
      cout << "Valeur aléatoire numéro " << i + 1 << " : " << alea + alea1 << endl;
      switch (alea + alea1)
      {
      case 1:
            nb1++;
         break;
      case 2:
         nb2++;
         break;
      case 3:
         nb3++;
         break;
      case 4:
         nb4++;
         break;
      case 5:
         nb5++;
         break;
      case 6:
         nb6++;
         break;
      case 7:
         nb7++;
         break;
      case 8:
         nb8++;
         break;
      case 9:
         nb9++;
         break;
      case 10:
         nb10++;
         break;
      case 11:
         nb11++;
         break;
      case 12:
         nb12++;
         break;
      }
   }

   cout << "Fréquence des 1 : " << nb1 << endl;
   cout << "Fréquence des 2 : " << nb2 << endl;
   cout << "Fréquence des 3 : " << nb3 << endl;
   cout << "Fréquence des 4 : " << nb4 << endl;
   cout << "Fréquence des 5 : " << nb5 << endl;
   cout << "Fréquence des 6 : " << nb6 << endl;
   cout << "Fréquence des 7 : " << nb7 << endl;
   cout << "Fréquence des 8 : " << nb8 << endl;
   cout << "Fréquence des 9 : " << nb9 << endl;
   cout << "Fréquence des 10 : " << nb10 << endl;
   cout << "Fréquence des 11 : " << nb11 << endl;
   cout << "Fréquence des 12 : " << nb12 << endl;


   system("pause");
   return 0;
}