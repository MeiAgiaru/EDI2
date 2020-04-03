// Henry Challenge por Iván Aguiar
//
// Ejercicio 2:
//
// Consigna:
//
// Escribir un algoritmo que encuentre el máximo y el minímo número dentro de una lista de números enteros (desordenados).
//
//
//
// Explicación del algoritmo:
//
// Este programa utilizará el método burbuja. Primero se declarará un array de 5 espacios (int list[5]).
// Y además unas variables que ayudarán a resolver la consigna (numX, numY y saveNum).
// numX y numY son variables para el for.
// numY empezará siempre una posición más que numX (numY = numX + 1) con el fin de poder comparar.
// El programa recibirá los 5 números que el usuario inserte en la consola y los irá comparando entre ellos.
// Si detecta que en el array hay un número menor que otro, lo acomoda y vuelve a empezar.
// De esta manera ordenará los números de menor a mayor.
// saveNum es la variable que almacenará el primer número cuando otro toma su lugar en el proceso de comparación.
// Al final del programa el primer cout mostrará en pantalla el número en la posición 0 (el más chico)
// Y el segundo cout mostrará el número en la posición 4 (el más grande)
//
//

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int list[5];
    int numX,  numY, saveNum;

                  cout << "Ingrese 5 numeros enteros: \n" << endl;
              for (numX = 0; numX < 5; numX++)
          {
                  cout << "Numero " << (numX + 1) << ":  " << endl;
                  cin >> list[numX];
          }
              for (numX = 0; numX < 5; numX++)
              {
                  for (numY = numX + 1; numY < 5; numY++)
                  {
                      if (list[numX] > list[numY])
                      {
                          saveNum = list[numX];
                          list[numX] = list[numY];
                          list[numY] = saveNum;
                      }
                  }
              }
                            
              cout << "\nNumero mas chico: " << list[0] << endl;
              cout << "Numero mas grande: " << list[4] << endl;

 }



    




