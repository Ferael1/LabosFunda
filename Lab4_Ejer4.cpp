#include <iostream>

using namespace std;

int main(){

    string palabra;
    cout<< "Ingrese una palabra: ";
    cin>>palabra;

    if (palabra.size() < 10)
    {
        cout<< "El numero de caracteres es menor a 10"<< endl;
    }
    if (palabra.size() == 10)
    {
        cout<< "El numero de caracteres es igual a 10"<< endl;
    }
    if (palabra.size() > 10)
    {
        cout<< "El numero de caracteres es mayor a 10"<< endl;
    }

    if (palabra.size() % 2 == 0)
    {
        cout<< "El numero de caracteres en la palabra es par"<< endl;
    }
    else
    {
        cout<< "El numero de caracteres en la palabra es impar"<< endl;
    }
    

    return 0;
}