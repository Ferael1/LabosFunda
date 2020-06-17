#include <iostream>

using namespace std;

int main(){

    int h,m,s;

    cout<<"Introduzca horas: "<<endl;
    cin>>h;
    cout<<"Introduzca minutos: "<<endl;
    cin>>m;
    cout<<"Introduzca segundos: "<<endl;
    cin>>s;
    
    //Condicion que verifica que los valores dados sean validos como hora
    if (h>=0 and h<=23 and m>=0 and m<=59 and s>=0 and s<=59)
    {
        //Condiciones que se encargan del aumento de la hora por un segundo
        s++;
        if (s==60)
        {
            s=0;
            m++;
            if (m==60)
            {
                m=0;
                h++;
                if (h==24)
                {
                    h=0;
                }
                
            }
            
        }
        cout<<"Un segundo despues a hora es "<<h<<":"<<m<<":"<<s<<endl;
    }
    //condicion en caso que no se introduzzca una hora valida
    else
    {
        cout<<"La hora que introdujo no es valida"<<endl;
    }
    return 0;
}