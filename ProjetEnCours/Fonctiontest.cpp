#include "Fonctiontest.h"
#include <iostream>

double calculerMax(double valeur, double valeur1, double valeur2)
{
   double max;

   if (valeur > valeur1)
   {
      max = valeur;

      
   }
   else
   {
      max = valeur1;
   }
   if (max < valeur2)
   {
      max = valeur2;

   }
  

   return max;
}

int calculerFactoriel(int valeur)
{
   int factoriel = 1;
   int inc = 1;


   while (valeur >= inc)
   {
       
      factoriel = factoriel * inc;
         inc = inc + 1;
    

   }



   return factoriel;
}



void afficherDate(int jour, int mois, int annee)
{
   int a = 0;
   using namespace std;

   cout << jour;
   switch (mois)
   {
   case 1:
      cout << "-Janvier-";
      break;
   case 2:
      cout << "-Février-";
      break;
   case 3:
      cout << "-Mars-";
      break;   
   case 4:
      cout << "-Avril-";
         break;
   case 5:
      cout << "-Mai-";
      break;
   case 6:
      cout << "-Juin-";
      break;
   case 7:
      cout << "-Juillet-";
      break;
   case 8:
      cout << "-Août-";
      break;   
   case 9:
         cout << "-Septembre-";
         break;
   case 10:
      cout << "-Octobre-";
      break;   
   case 11:
         cout << "-Novembre-";
         break;
   case 12:
      cout << "-Décembre-";
      break;
   default:
      system("cls");
      cout << "Date non valide\n";
      a = 1;
      break;
     
      
      
   }
   if (a == 0)
   {
      cout << annee ;
   }
   
  
   
}

bool modulerPair(int nb)
{
   if (nb % 2 == 0)
   {
      return true;
   }
   else
   {
      return false;
   }



}
