#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a,b,c;
    float x;

    cout<< "Ingrese el valor de a: ";
    cin>>a;
    cout<< "Ingrese el valor de b: ";
    cin>>b;
    cout<< "Ingrese el valor de c: ";
    cin>>c;

    x = (-b + sqrt(pow(b, 2) - 4*a*c))/2*a;

    cout<<x;

    return 0;
}