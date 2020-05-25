#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int numero;

    cout<<"Por favor ingresa un numero: ";
    cin>> numero;

    if (numero % 2 == 0)
    {
        cout<<"El numero que ingresaste es par";
    }
    else
    {
        cout<<"El numero que ingresaste es impar";
    }

    return 0;
}