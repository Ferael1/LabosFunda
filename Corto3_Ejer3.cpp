#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;

int main()
{
    int year;
    cout<<"Por favor intorduzca un año cualquiera: "<< endl;
    cin>>year;
    //Primera condicion para ver si el año es bisiesto
    if (year % 400 == 0)
    {
        cout<<"El año que introdujo es bisiesto";
    }
    else
    {
        //Segunda condicion para ver si el año es bisiesto
        if (year % 4 == 0 and year % 100 !=0)
        {
            cout<<"El año que introdujo es bisiesto";
        }
        else
        {
            cout<<"El año que inrodujo no es bisiesto";
        }
    }
    
    return 0;
}