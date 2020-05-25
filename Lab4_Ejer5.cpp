#include <iostream>
#include <string.h>

using namespace std;

int main(){

    string palabra;

    cout<< "Ingrese una palabra: ";
    cin>> palabra ;

    if (palabra[0] == palabra.back())
    {
        cout<<"Su palabra inicia y termina con la misma letra."<< endl;
    }
    else
    {
        cout<<"Su palabra incia y termina con una letra diferente."<< endl;
    }
    
    return 0;
}