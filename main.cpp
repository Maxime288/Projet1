#include <iostream>
#include "fonctions.h"
using namespace std;


int main()
{   
    cout << "Quelle legende du foot a gagne le Ballon d'or en 2005 ?\n" << endl; // Cette ligne déclare une variable appelée "reponse" de type "string", qui sera utilisée pour stocker la réponse de l'utilisateur à la question posée.
    cout << "1. Maradona" << endl;
    cout << "2. Pele" << endl;
    cout << "3. Ronaldinho" << endl;
    cout << "4. Zidane\n" << endl;
    // Ces lignes affichent la question et les options de réponse pour l'utilisateur. Chaque option est affichée sur une nouvelle ligne en utilisant "cout", qui est le flux de sortie standard. La question est affichée avec une nouvelle ligne ("\n") à la fin.
    poserQuestion(3);
   
    // Cette ligne affiche le message "Votre reponse :" pour indiquer à l'utilisateur de saisir sa réponse. Ensuite, la réponse saisie par l'utilisateur est stockée dans la variable "reponse" à l'aide de "cin".
    // En résumé, ces lignes de code posent une question sur le Ballon d'Or en 2005 à l'utilisateur et récupèrent sa réponse pour la stocker dans la variable "reponse".
   
    // Ces lignes de code utilisent une structure conditionnelle "if-else" pour vérifier si la réponse de l'utilisateur est égale à "Ronaldinho".
    // Si la réponse est égale à "Ronaldinho", le programme affiche le message "Bonne réponse !" suivi de deux nouvelles lignes ("\n\n") à l'aide de "cout".
    // Si la réponse n'est pas égale à "Ronaldinho", le programme exécute le bloc de code dans la partie "else". Il affiche le message "Mauvaise réponse." suivi d'une nouvelle ligne ("\n") à l'aide de "cout". Ensuite, il affiche le message "La bonne réponse est Ronaldinho." suivi d'une nouvelle ligne ("\n") à l'aide de "cout".
    // En résumé, ces lignes de code permettent d'afficher un message différent en fonction de la réponse de l'utilisateur. Si la réponse est correcte, le programme affiche "Bonne réponse !". Sinon, il affiche "Mauvaise réponse." suivi de la bonne réponse.
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