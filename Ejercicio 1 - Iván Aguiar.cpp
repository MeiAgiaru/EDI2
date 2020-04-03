// Henry Challenge por Iván Aguiar
// Ejercicio 1:
//
// Escribir un algoritmo que imprima los numeros del 1 al 100
// con la condicion que si el numero a imprimir es multiplo de 3 imprima el string 'Fizz'
// si el numero es multiplo de 5 imprima: 'Buzz'
// y si es multiplo de ambos imprima: 'FizzBuzz'

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int num;

// num es una variable de tipo número entero sin valor asignado

    for (num = 1; num <= 100; num++)
// "Para cada número del 1 al 100"
// La función for asigna el número 1 a la variable num (num = 1)
// Luego declara que si num es menor o igual que 100 (num <= 100)
// Le suma 1 a num (num++)
    {
        if (num % 3 == 0 && num % 5 == 0)
// Si num al ser dividido por 3 da de resultado 0
// Y también al ser dividido por 5 da 0 
        {
            cout << num << ": FizzBuzz\n" << endl;
// Imprime FizzBuzz en la pantalla
        }
        else if (num % 5 == 0)
// Sino, si num es dividido por 5 y da 0
        {
            cout << num << ": Buzz\n" << endl;
// Imprime Buzz en la pantalla
        }
        else if (num % 3 == 0)
// Sino, si num es dividido por 3 y da 0
        {
            cout << num << ": Fizz\n" << endl;
// Imprime Fizz en la pantalla
        }
        else {
// Si ninguna de las anteriores condiciones se cumplen
            cout << num << ": No es multiplo ni de 3 ni 5. \n" << endl;
// Imprime que el número no es múltiplo ni de 3 ni de 5.
        }
    }
    
}

 