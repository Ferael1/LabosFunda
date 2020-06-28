#include <iostream>

using namespace std;

void matriz (float []);
float totald (float []);
void ar (float);

int main(){

    float notas[5];
    float total;
    
    //Punto de reseteo para asegurar que se pueda calcular la nota de cuantos estudiantes se desee
    nRESET:
    //Llamado de la funcion para obtener las notas
    matriz(notas);
    //Llamado de la funcion para obtener el promedio de las notas
    total = totald(notas);
    cout<<"El total de las notas obtenidas por el estudiante es: "<<total<<endl;
    //Lamado de la funcion para saber si el estudiante aprobo o reprobo
    ar(total);
    goto nRESET;

   return 0; 
}
//Funcion que realiza la matriz
void matriz (float notas[]){

    int i;
    for (int i = 0; i < 5; i++)
    {
        cout<< "Por favor ingrese la nota "<< i+1<<" del estudiante: "<<endl;
        cin>>notas[i];
    }   
}

//Funcion que calcula el promedio de las notas
float totald(float notas[]){

    int i;
    float tol;
    float avance;

    avance = 0;
    for (int i = 0; i < 5; i++)
    {
        avance += notas[i];
    }
    tol= avance/5;  

    return tol;
}

//Funcion que determina si el estudiante aprobo o reprobo
void ar(float total){

    if (total >= 6)
    {
        cout<<"El estudiante aprobo el curso :)"<<endl;
    }
    else
    {
        cout<<"El estudiante reprobo el curso :("<<endl;
    }
}