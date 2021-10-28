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


   int l;
   int v = 0;
   int j = 0;
   int k =0;

   cout << "Veuillez entrer la longueur: ";
   cin >> l;

   while (l != v){
      j = 0;
      l--;
      


      while (j != l) {
         
        
         cout << " ";
         j++;

        
         if (k <= l)
         {


            while (k <= l)
            {
               cout << "*";
               k++;
            }
            l--;
            k = 0;
         }

        
      }
      cout << endl;
   }
  
}

//Plan de tests         écran 
// 
   /*
    
   
   
   
   */
   


   




