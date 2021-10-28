//But: Utiliser les fonctions permettant de manipuler le texte dans la console. Il faut inclure le bibliothèque iomanip
//Auteur: Zachary Poudrier
//Date: 2021-10-25
#include "Manipulateur.h"


using namespace std;

int main()

{

   
   int a = 11;
   int b = 123;
   int c = 1234;
   int d = 25567;
   char motif;
   int nbmotif;
   string texte;

   cout << left << setfill(' ') << setw(LARGEUR_COL1)<< "Valeur de a" << " : " << right << setfill('.') << setw(LARGEUR_COL2) << a << endl;
   cout << left << setfill(' ') << setw(LARGEUR_COL1) << "Valeur de b" << " : " << right << setfill('.') << setw(LARGEUR_COL2) << b << endl;
   cout << left << setfill(' ') << setw(LARGEUR_COL1) << "Valeur de c" << " : " << right << setfill('.') << setw(LARGEUR_COL2) << c << endl;
   cout << left << setfill(' ') << setw(LARGEUR_COL1) << "Valeur de d" << " : " << right << setfill('.') << setw(LARGEUR_COL2) << d << endl;
   cout << left << setfill('§') << setw(LARGEUR_COL1+LARGEUR_COL2+ 3) << "" << endl;
   //cout << left << setfill('§') << setw(LARGEUR_COL1+LARGEUR_COL2) << "§" << endl;
   //cout << left << setfill('§') << setw(LARGEUR_COL1+LARGEUR_COL2) << "" << "\n";
   //cout << right << setfill('§') << setw(LARGEUR_COL1+LARGEUR_COL2) << "" << endl;
   cout << left << setfill(' ') << setw(LARGEUR_COL1) << "Somme" << " : " << right << setfill('.') << setw(LARGEUR_COL2) << a+b+c+d << endl;

   // On demande a l'utilisateur le ncharactère de remplissage et le nombre de charactère souhaiter
   cout << "Veuillez entrer le charactère de remplissage : ";
   cin >> motif;
   cout << "Veuillez entrer le nombre de charactère souhaiter sur la ligne : ";
   cin >> nbmotif;
   cin.ignore(1, '\n');
   
   system("mode con lines=10 cols=120");

   Tracerligne(motif, nbmotif, false);


   system("pause");


   Tracerligne(motif, nbmotif, true);


   

   cout << "Veuillez entrer le titre a centrer : ";
   getline(cin, texte, '\n');

   Centrertexte(motif, nbmotif, texte, true);


   system("pause");
   return 0;
}