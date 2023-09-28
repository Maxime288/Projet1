#include <iostream>
#include "fonctions.h"
using namespace std;

void poserQuestion(int bonneReponse)
 {
   int reponse;
   cout << "Votre reponse :\n";
   cin >> reponse;
   if (reponse == bonneReponse) 
    {
        cout << "Bonne reponse !\n\n" << endl;
    } else 
    {
        cout << "Mauvaise reponse.\n" << endl;
        
    }
 }  