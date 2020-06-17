#include <iostream>

using namespace std;

int mcd (int x, int y)
{
    int divisor = 1;
    int ans;
    
    //bucle que hace que se prueben distintos numeros como divisores
    while (divisor <= x and divisor <= y)
    {
        //condicion que distingue divisores de no divisores
        if (x % divisor == 0 and y % divisor == 0)
        {
            ans = divisor;
        }
       divisor++; 
    }

    return ans;
}

int main(){

int x,y;

//Solicitud de datos
cout<<"Por favor introduzca un numero: "<<endl;
cin>>x;
cout<<"Por favor introduzca otro numero: "<<endl;
cin>>y;

int ans = mcd(x,y);

cout<<"El mcd de "<<x<<" y "<<y<<" es "<<ans<<endl;

return 0;
}

