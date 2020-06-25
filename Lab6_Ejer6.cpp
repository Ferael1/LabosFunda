#include <iostream>

using namespace std;

int main(){

    
    int i,num;
    int n,count;

    count=0;

    cout<<"Ingrese el numero de elementos en la secuencia: "<<endl;
    cin>>n;

    int arreglo[n];

    for (int i = 0; i < n; i++)
    {
        cout<<"Digite el numero "<<i+1<<" de la lista: ";
        cin>>arreglo[i];
    }
    
    cout<<"Digite el numero que quiere saber cuantas veces se repite: "<<endl;
    cin>>num;

    for (int i = 0; i < n; i++)
    {
        if (num == arreglo[i])
        {
            count++;
        }
    }

    cout<< "El numero "<<num<<" se repite "<<count<<" veces";
     
    return 0;
}