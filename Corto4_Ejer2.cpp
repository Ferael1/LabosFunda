#include <iostream>

using namespace std;

float media(float[]);
int arribap(float[],int,float);
int debajop(float[],int,float);

int main()
{
    int i;
    int arriba; 
    int abajo;
    float med;
    float altura[25];

    arriba = 0;
    abajo = 0;

    cout<<"Por favor, ingrese a continuacion la altura de sus 25 alumnos"<<endl;

    //Ciclo introduce y guarda las alturas en los 25 elementos del arreglo
    for (i = 0; i < 25; i++)
    {
        cout<<"Ingrese la altura del alumno:";
        cin>>altura[i];
    }
    
    //Llamado de la funcion para conseguir la media
    med = media(altura);
    cout<<"El promedio de alturas de los 25 alumnos es: " << med <<endl;
    //Llamados de las funciones para determinar cuantas alturas estaban arriba
    //o abajo de la media
    arriba = arribap(altura,arriba,med);
    abajo = debajop(altura,abajo,med);

    cout<<"La cantidad de personas sobre de la media son: "<<arriba<<endl;
    cout<<"La cantidad de personas debajo de la media son: "<<abajo<<endl;
    return 0;
}

//Funcion que calcula la media de las 25 alturas
float media(float altura[25])
{
    float total; 
    float promedio;
    int i;

    total = 0;

    for(int i = 0; i < 25; i++){
        total += altura[i];
    }
    promedio = total/25;
    return promedio;
}

//Funcion que determina si las alturas estan por encima del promedio
int arribap (float altura[],int arriba,float med)
{
    int i;
    for (int i = 0; i < 25; i++)
    {
        if (altura[i]>med)
        {
            arriba++;
        }
        
    }
    return arriba;
}

//Funcion que determina si la altura esta debajo del promedio
int debajop(float altura[],int abajo,float med){

    int i;
    for (int i = 0; i < 25; i++)
    {
        if (altura[i]<med)
        {
            abajo++;
        }
        
    }
   return abajo; 
}