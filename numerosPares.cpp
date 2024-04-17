#include <iostream>

using namespace std;

/*
tipo de variable numerica entera
variable sera numero ingresado
se pide al usuario que ingrese un numero
se aplica condicion para que el programa muestre si el numero ingresado es par o no
se muestra leyenda que diaga si es o no es par
*/

int main (){

int numeroIngresado;

cout << "Ingrese un numero entero: ";
cin >> numeroIngresado;

for (int i = 0; i <= numeroIngresado; i++){
    if (i%2 == 0)
    {
        cout << i <<"\n";
    }
}



return 0;
}
