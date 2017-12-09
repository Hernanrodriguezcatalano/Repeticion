/* Saltos
 * Este programa repite una frase 200 veces, utilizando la sentencia de seleeccion
 * "if" y el "goto".
 * K1051 GRUPO 1*/

#include <iostream>

using namespace std;

int main(){

int i=0;                                                       //se declara i como un contador

Salto: if(i<200) {                                             //si el contador es menor que 200, se repiten las instrucciones
        cout <<i<< ") " << "Debo Programar 200 veces" <<endl;  //se imprime en pantalla el mensaje
        i++;                                                   //se incrementa en +1 al contador
        goto Salto;                                            //se hace el salto de linea
        }
}
