#include <iostream>
#include <stdbool.h>

using namespace std;

int bisiesto(int year){

bool confirmacion;

if (year % 400 == 0)
{
    confirmacion = true;
}
else
{
    if (year % 4 == 0 and year % 100 != 0)
    {
        confirmacion = true;
    }
    else
    {
        confirmacion = false;
    }   
}
return confirmacion;
}

int main(){

int year;

cout<<"Por favor introduzca un año cualquiera: "<<endl;
cin>>year;

bool confirmacion = bisiesto(year);

if (confirmacion == true)
{
    cout<<"El año que introdujo es bisiesto"<<endl;
}
else if (confirmacion == false)
{
    cout<<"El año que introdujo no es bisiesto"<<endl;
}

return 0;
}