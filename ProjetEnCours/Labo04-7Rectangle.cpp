// But : Demander a l'utilisateur 2 nombre entier un pour la hauteur et un pour la longueur
// le programme dessine un rectangle avec les dimensions fournis

//ex: *******
//    *******
//    *******
//    *******

// Auteur :  Zachary
// Date : 2021-09-21

#include <iostream>
#include <time.h>

using namespace std;



int main()
{
   setlocale(LC_ALL, "");

   int h;
   int l;
   int v;
   int s = 1;

   cout << "Veuillez entrer la longeur: ";
   cin >> h;
   cout << "Veulleez entrer la hauteur: ";
   cin >> l;

   
   for (int j = 0; j < h; j++)
   {

      if (j == 0 || j == h-1)
      {
         for (int i = 0; i < l; i++) {
            cout << "#";
         }
         
      }
      else
      {
         for (int i = 0; i < l; i++)
         {


            if (i == 0 || i == l - 1)
            {
               cout << "#";
            }
            else
            {

               cout << " ";
            }
         }
      }

 
 
      cout << endl;

   }














/*
 
   for (int i = 0; i < h; i++)
   {

      
      for (int i = 0; i < l; i++)
      {

         cout << "*";

      }
      cout << endl;

   }
   */

}

//Plan de tests         écran 
// 
   /*
    
   
   
   
   */
   


   




