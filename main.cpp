#include <iostream>
#include "fonctions.h"
using namespace std;


int main()
{   
    cout << "Quelle legende du foot a gagne le Ballon d'or en 2005 ?\n" << endl; // Affiche une question sur la console en utilisant "cout". La question est :"Quelle légende du foot a gagné le Ballon d'or en 2005 ?"
    cout << "1. Maradona" << endl; // Les options de réponse sont affichées, numérotées de 1 à 4.
    cout << "2. Pele" << endl;
    cout << "3. Ronaldinho" << endl;
    cout << "4. Zidane\n" << endl;
   
    poserQuestion(3); // La fonction "poserQuestion(3)"" est appelée. Cela signifie que la fonction "poserQuestion" est exécutée avec "3" comme argument. Cela indique que la bonne réponse à la question est 
     //l'option numéro 3, qui correspond à "Ronaldinho".
    cout << "Quelle legende du foot a gagner la coupe des clubs champions en 1966  ?\n" << endl;
    cout << "1. Charlton" << endl;
    cout << "2. Platini" << endl;
    cout << "3. Garrincha" << endl;
    cout << "4. Van Basten\n" << endl;
    
    poserQuestion(1);

   

    cout << "Quelle legende du foot a gagner la Liga en 2005 ?\n" << endl;
    cout << "1. Milla" << endl;
    cout << "2. Puyol" << endl;
    cout << "3. Matthews" << endl;
    cout << "4. Moreno\n" << endl;

    poserQuestion(2);
    
    
    cout << "Quelle legende du foot a gagner le championnat de France en 1962 ?\n" << endl;
    cout << "1. Beckenbauer" << endl;
    cout << "2. Walter" << endl;
    cout << "3. Rivera" << endl;
    cout << "4. Fontain\n" << endl;

     poserQuestion(4);
   
    cout << "Quelle legende du foot a gagner la coupe du monde en 2002 ?\n" << endl;
    cout << "1. Weah" << endl;
    cout << "2. Schiaffino" << endl;
    cout << "3. Carlos" << endl;
    cout << "4. Kubala\n" << endl;
    
    poserQuestion(3);


    return 0;
      
}