#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int cifra;

    cout<<"Por favor ingrese un numero: ";
    cin>>cifra;

    if (cifra == 0)
    {
        cout<<"El numero que ingresaste es 0";
    }
    if (cifra < 0)
    {
        cout<<"El numero que ingresaste es negativo";
    }
    if (cifra > 0)
    {
        cout<<"El numero que ingresaste es positivo";
    }
    
    return 0;
}