//But: Utiliser le type string et ses m�thodes
//Auteur: Zachary Poudrier
//Date: 2021-10-18

#include <iostream>
#include <string>
#include "Header.h"

using namespace std;

int main()
{
   setlocale(LC_ALL, "");
   string prenom;  // on cr�er un objet qui va stocker une chaine de charact�re : string
   string adresse; // Cette variable est automatiquement initialis� � chaine vide : "" par le constructeur
   string paragraphe;
   string clavier;
   int nombre;

   //But: Toutes les infos demander a l'utilisateur doivent etre saisit dans une variable de type string pour s'assurer que toute la mem du clavier soit lu
   
   cout << "Veuillez entrer un nombre entier : ";
   getline(cin, clavier, '\n');

   // IL faut convertir en nombre
   // Si vide = crash
   // Si lettre debut = crash
   // il faut au moins un chiffre positif ou negatif

   while (!etreNombreEntier(clavier))

   {
      cout << "Erreur le nombre doit commencer par un chiffre ou le signe - suivit d'un chiffre.";
      cout << "Veuillez entrer un nombre entier : ";
      getline(cin, clavier, '\n');
   }

   nombre = stoi(clavier);

   cout << "Le nombre est: " << nombre << endl;


   /*
   cout << prenom << endl;

   cout << "la taille de pr�nom : " << prenom.size() << endl;
   cout << "la capacit� de pr�nom : " << prenom.capacity() << endl;
   cout << "la max_size de pr�nom : " << prenom.max_size() << endl;
   cout << "la longeur de pr�nom : " << prenom.length() << endl;

   string chaine1("Bonjour");  // On appelle le constructeur et on lui passe un param�tre pour initialiser la variable avec le texte de notre choix
   cout << chaine1;

   cout << "la taille de chaine1 : " << chaine1.size() << endl;
   cout << "la capacit� de chaine1 : " << chaine1.capacity() << endl;
   cout << "la longeur de chaine1 : " << chaine1.length() << endl;

   string chaine2("� tous ! Bienvenue dans le cours de programmation !");
   cout << chaine2;

   cout << "la taille de chaine2 : " << chaine2.size() << endl;
   cout << "la capacit� de chaine2 : " << chaine2.capacity() << endl;
   cout << "la longeur de chaine2 : " << chaine2.length() << endl;

   // Op�ratuer d'affectation avec string
   prenom = "Kool Kid 123454321";

   cout << "C koi ton pr�nom";
   cin >> prenom;          //cin >> ne retire pas son d�limiteur de la m�moire du clavier

   //cin.ignore(); // Ignore 1 charact�re ou le \n par d�faut
   //cin.ignore(4); // va ignorer au max 4 ou le \n
   //cin.ignore(5, '*'); // va ignorer au max 5 ou *
   cin.ignore(1, '\n'); //cela est le mieux pour un


   cout << "Vous vous appelez " << prenom << endl;

   
   cout << "C koi ton adresse" << endl;
   //cin >> adresse; // on constate que le cin >> s�pare les valeurs avec un enter, espace, tab

   getline(cin, adresse,'\\');      // ici le cin >> a laisser son \n dans la m�moire du clavier et donc fini
                                    // probleme si on a a la fois des cin >> et des getline
                                    // Il va falloir vider la m�moire du clavier car il reste toujours le \n

   cout << adresse;


   if (prenom == "Karine")
   {

      cout << prenom << "est votre nom" << endl;
   }
   else
   {
      cout << prenom << "n'est pas votre ami" << endl;
   }
   if (prenom >= "Arthur")
   {
      cout << prenom << "est apr�s Arthur" << endl;

   }
   if (prenom <= "Zoe")
   {
      cout << prenom << " Viens avant Zoe" <<endl;
   }
   
   // On veut concat�ner deux cha�ne ensemble avec +


   //chaine1 = chaine1 + " " + chaine2 + "\n";
   chaine1 += " " + chaine2 + " ";
   cout << chaine1 << endl;
   */
   /*
   cout << "Veuillez rentrer le pr�nom: ";
   getline(cin, prenom, '\n');

   while (prenom.empty())
   {
      cout << "Erreur vous devez entrer un Pr�nom: " << endl;
      getline(cin, prenom, '\n');
   }
   cout << "Votre initiale est " << prenom[prenom.size()-1] << endl;
   cout << "Votre initiale est " << prenom.at(prenom.size()-1) << endl;
   cout << "Votre initiale est " << prenom.front() << endl;
   cout << "Votre initiale est " << prenom.back() << endl;

   // Effacer le pr�nom

   prenom = " ";
   cout << prenom;
   prenom = "Karine";


   prenom.clear();
   cout << prenom;
   prenom = "Karine";
   prenom.erase();
   cout << prenom;
   prenom = "Karine";
   //Permet d'afficher un �l�ment pr�cis dans la chaine

   prenom.erase(2, 4);
   cout << "Voici" << prenom;
   */
   system("pause");
   return 0;
}