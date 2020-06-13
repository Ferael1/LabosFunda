#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;

int main(){
//Primero se establecen todas las variables que se van a utilizar para este programa
    string nemp;
//estas variables se colocaron como float debido a que para obtenerlas hay que operar con decimales
    float vht,vhe,isss,afp,renta,pt,pr,td;
 //estas variables se colocaron como int debido a que pueden ser expresadas por naturales
    int emp,contador,ht,he;

    contador = 0;
//Esta linea permite que se pueda calcular el salario de mas de una persona
    cout<< "Por favor ingrese el numero de personas de las cuales desea saber su salario: "<< endl;
    cin >> emp;
//El ciclo while hace que el programa siga hasta que se haya calculado el salario
// de todas los empleados en la variable emp
    while (contador != emp)
    {
        cout<<"Ingrese el nombre del empleado: "<<endl;
        cin>> nemp;
        cout<<"Ingrese la cantidad de horas que trabajo ese empleado: "<<endl;
        cin>>ht;
        cout<<"Ingrese la cantidad de horas extras que trabajo ese empleado: "<<endl;
        cin>>he;
    //formula necesarias para obtener el pago total y real
        vht = ht * 1.75;
        vhe = he * 2.5;
        pt = vht + vhe;
        isss = pt * 0.04;
        afp = pt * 0.0625;
        renta = pt * 0.1;
    //condicion para saber si incluir la renta para el pago real
        if (pt < 500)
        {
            td = isss + afp;
        }
        else
        {
            td = isss + afp + renta;
        }
        pr = pt - td;
    //Resultados por empleado    
        cout<< "El empleado "<<nemp<<" tiene un salario total de $"<<pt<< endl;
        cout<< "Una vez realizados los descuentos su salario real es de $"<<pr<<endl;
 
        contador++;
    }
    return 0;  
}