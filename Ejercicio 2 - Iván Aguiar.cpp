// Henry Challenge por Iv�n Aguiar
//
// Ejercicio 2:
//
// Consigna:
//
// Escribir un algoritmo que encuentre el m�ximo y el min�mo n�mero dentro de una lista de n�meros enteros (desordenados).
//
//
//
// Explicaci�n del algoritmo:
//
// Este programa utilizar� el m�todo burbuja. Primero se declarar� un array de 5 espacios (int list[5]).
// Y adem�s unas variables que ayudar�n a resolver la consigna (numX, numY y saveNum).
// numX y numY son variables para el for.
// numY empezar� siempre una posici�n m�s que numX (numY = numX + 1) con el fin de poder comparar.
// El programa recibir� los 5 n�meros que el usuario inserte en la consola y los ir� comparando entre ellos.
// Si detecta que en el array hay un n�mero menor que otro, lo acomoda y vuelve a empezar.
// De esta manera ordenar� los n�meros de menor a mayor.
// saveNum es la variable que almacenar� el primer n�mero cuando otro toma su lugar en el proceso de comparaci�n.
// Al final del programa el primer cout mostrar� en pantalla el n�mero en la posici�n 0 (el m�s chico)
// Y el segundo cout mostrar� el n�mero en la posici�n 4 (el m�s grande)
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

              cin.ignore();
              cin.get();

              return 0;

 }



    




