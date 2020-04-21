#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;

int main(){

string question;

int menu;



    cout << "   _____________________________________________________ " << endl;
    cout << "  |                                                     |" << endl;
    cout << "  |                  LA CARACOLA MAGICA                 |" << endl; 
    cout << "  |_____________________________________________________|\n" << endl;
    cout << "                                                       " << endl;

    cout << "              Bienvenid@ a La Caracola Magica.\n" << endl;
    cout << "                    Funcionamiento: \n" << endl;
    cout << "Usted debera escribir una pregunta y le dara una respuesta.\n" << endl;
               
    while (menu!=5){

    cout << "\nEscribe tu pregunta aqui: ";

        getline (cin, question);

        srand(time(NULL));

        int answer = rand()%10;

        if (answer == 0){
            cout << "\nLa caracola magica dice: Si" << endl;
            cout << "\n-------------------------------------------------------" << endl;
        }
        else if (answer == 1){
            cout  << "\nLa caracola magica dice: No" << endl;
            cout << "\n-------------------------------------------------------" << endl;
        }
        else if (answer == 3){
            cout << "\nLa caracola magica dice: Tal vez" << endl;
            cout << "\n-------------------------------------------------------" << endl;
        }
        else if (answer == 4){
            cout << "\nLa caracola magica dice: Definitivamente si" << endl;
            cout << "\n-------------------------------------------------------" << endl;
        }
        else if (answer == 5){
            cout << "\nLa caracola magica dice: Definitivamente no" << endl;
            cout << "\n-------------------------------------------------------" << endl;
        }
        else if (answer == 6){
            cout << "\nLa caracola magica dice: Pregunta en otro momento" << endl;
            cout << "\n-------------------------------------------------------" << endl;
        }
        else if (answer == 7){
            cout << "\nLa caracola magica dice: Es posible" << endl;
            cout << "\n-------------------------------------------------------" << endl;
        }
        else if (answer == 8){
            cout << "\nLa caracola magica dice: No es posible" << endl;
            cout << "\n-------------------------------------------------------" << endl;
        }
        else if (answer == 9){
            cout << "\nLa caracola magica dice: Totalmente probable" << endl;
            cout << "\n-------------------------------------------------------" << endl;
        }
        else{
            cout << "\nLa caracola magica dice: Totalmente improbable" << endl;
            cout << "\n-------------------------------------------------------" << endl;
        }
}
     
        

    cin.ignore();
    cin.get();

    return 0;
}

        
