#include <iostream>
#include "fonctions.h"
using namespace std;

void poserQuestion(int bonneReponse) // La fonction "poserQuestion" est définie. Elle prend un argument "bonneReponse" de type "int". À l'intérieur de cette fonction, 
//une variable "reponse" de type "int" est déclarée.
 {
   int reponse; // Déclare une variable de type "intier" appelée "reponse".Cette variable est utilisée pour stocker la réponse saisie par l'utilisateur à la question posée 
   //dans la fonction "poserQuestion".
   cout << "Votre reponse :\n"; // Le message "Votre reponse :" est affiché sur la console à l'aide de "cout". L'utilisateur est ensuite invité à saisir une valeur pour
   //"reponse" à l'aide de "cin".
   cin >> reponse;
   if (reponse == bonneReponse) // Une condition "if" est utilisée pour vérifier si "reponse" est égale à "bonneReponse".  
    {
        cout << "Bonne reponse !\n\n" << endl; // Si c'est le cas, le message "Bonne reponse !\n\n".
    } else 
    {
        cout << "Mauvaise reponse.\n" << endl; // Sinon, le message "Mauvaise reponse.\n" est affiché.
        
    }
 }  