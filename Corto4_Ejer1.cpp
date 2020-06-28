#include <iostream>

using namespace std;

void transformacion(string [],int);

int main(){

    int n;
    int i;

    //Este cout es necesario para saber que tantos elementos debe contener el arreglo
    cout<<"Indique el numero de letras que tiene su palabra: "<<endl;
    cin>>n;

    string palabra [n];
    //Este ciclo hace que se introduzca letra por letra la palabra deseada
    //Se queria dejar al usuario colocar una palabra completa pero no se encontro como convertir una palabra
    //completa a los numeros deseados
    for (int i = 0; i < n; i++)
    {
        cout<<"Por favor escriba la letra "<<i+1<<" de su palabra"<<endl;
        cin>>palabra[i];  
    }
    
    //Llamado de la funcion para tranformar las letras deseadas a sus numeros respectivos
    transformacion(palabra,n);
    
    //Presentacion de la palabra ya transformada
    cout << "Su palabra ahora es: ";
    for (int i = 0; i < n; i++)
    {
        cout<< palabra[i];
    }
    cout<<".";

    return 0;
}

void transformacion(string palabra[],int n){

    int i;
    
    //Ccondiciones que tranforman las letras de la palabra murcielago a sus respectivos numeros
    for (int i = 0; i < n; i++)
    {
        if ( palabra [i] == "m")
        {
            palabra[i] = "0";
        }
        else if (palabra [i] == "u")
        {
            palabra[i] = "1";
        }
        else if (palabra [i] == "r")
        {
            palabra[i] = "2";
        }
        else if (palabra [i] == "c")
        {
            palabra[i] = "3";
        }
        else if (palabra [i] == "i")
        {
            palabra[i] = "4";
        }
        else if (palabra [i] == "e")
        {
            palabra[i] = "5";
        }
        else if (palabra [i] == "l")
        {
            palabra [i] = "6";
        }
        else if (palabra [i] == "a")
        {
            palabra [i] = "7";
        }
        else if (palabra[i] == "g")
        {
            palabra [i]= "8";
        }
        else if (palabra [i] == "o")
        {
            palabra [i] = "9";
        }
        else
        {
            palabra[i] = palabra[i];
        } 
        
    }
    
}