#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int year,nyear,month,nmonth,day,nday;

    nNAME:
    cout<<"Por favor introduzca un año: "<<endl;
    cin>>year;
    cout<<"Por favor introduzca el numero de mes: "<<endl;
    cin>>month;
    cout<<"Por favor introduzca el numero de dia: "<<endl;
    cin>>day;
    //condicion que evalua si se puede pasar al siguiente mes
    if ((day==30 and month==4 or month==6 or month==9 or month==11)or(day==29 and month==2)or(day==28 and month==2 and ((year % 4 !=0)or(year % 100==0 and year % 400!=0)))or(day==31))
    {
        nmonth=month + 1;
        nday = 1;
    }
    else
    {
        nday = day + 1;
    }
    //condicion que evalua si se puede pasar al siguiente año
    if (nday==1 and nmonth==13)
    {
        nmonth=1;
        nyear = year + 1;
    }
    else
    {
        nyear=year;
    }
    if ((day>30 and month==4 or month==6 or month==9 or month==11)or(day>=30 and month==2)or(day>31)or(month>=13))
    {
        cout<<"Coloco mal un dia o mes. Por favor introduzca una fecha valida"<<endl;
        goto nNAME;
    }
    
    //Si se introduce un año bisiesto y se indica el dia 28 de febrero el programa seguira al dia 29 sin embargo no colocara bien el numero del mes.
    //Si se itroduce un año no bisiesto y se indica el dia 28 de febrero el programa seguira hacia el mes de marzo. 
    cout<<"La fecha del dia siguiente es:"<<nday<<"/"<<nmonth<<"/"<<nyear<<endl;

    return 0;
}