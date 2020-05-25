#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int dividendo,divisor;

    cout<< "Por favor ingrese el dividendo: ";
    cin>> dividendo;

    cout<< "Por favor ingrese el divisor: ";
    cin>> divisor;

    if (dividendo % divisor == 0)
    {
        cout<< "Los numeros son divisibles entre si";
    }
    else
    {
        cout<< "Los numeros no son divisibles entre si";
    }
    return 0;
}