// But : Afficher menu a l'écran



// Auteur :  Zachary
// Date : 2021-09-20

#include <iostream>
#include <time.h>

using namespace std;



int main()
{
   char choix;
   int var = 100000000;


   cout << "a. Addition, b. Soustraction, Multiplication = c, Division = d, Quitter = e" << endl;
   cin >> choix;
   system("cls");
   while (choix != 'a' && choix != 'b' && choix != 'c' && choix != 'd' && choix != 'e' )
   {
      cout << "Choix non compris"<< endl;
      cout << "a. Addition, b. Soustraction, Multiplication = c, Division = d, Quitter = e" << endl;
      cin >> choix;
   }
   while (choix != 'e')
   {

  

      switch (choix)
      {
      case'a':
         cout << "Vous avez choisit l'Addition:" << endl;

         break;
      case'b':
         cout << "Vous avez choisit la Soustraction:" << endl;

         break;

      case'c':
         cout << "Vous avez choisit la Multiplication:" << endl;

         break;
      case'd': {
         cout << "Vous avez choisit la Division:" << endl;

         break;
      }

      }
      if (!(choix >='a' && choix <= 'e'))
      {
         cout << "Choix non compris" << endl;
      }
      cout << "a. Addition, b. Soustraction, Multiplication = c, Division = d, Quitter = e" << endl;
      cin >> choix;
   }
   while (choix == 'e' && var >= 0)
   {
      var = var - 1;
      cout << var << endl;
   }
}

//Plan de tests         écran 
// 
   /*
    
   
   
   
   */
   


   




