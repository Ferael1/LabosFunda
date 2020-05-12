#include <iostream>

using namespace std;

int main() 
{
    int a,b,c;
    float x;

    cout<< "Ingrese el primer numero: ";
    cin>>a;
    cout<< "Ingrese el segundo numero: ";
    cin>>b;
    cout<< "Ingrese el tercer numero: ";
    cin>>c;

    x = (a + b + c) / 3;

    cout<<x;

    return 0;
}