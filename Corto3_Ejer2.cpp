#include <iostream>

using namespace std;

int main(){
    //numero ganador
    int number = 74;
    //variable que indica la respuesta del jugador
    int guess;
    //contador para intentos
    int count = 0;
    //Este ciclo se repite hasta llegar a los 5 intentos o cuando se adivine el numero magico
    while (count != 5 and guess != 74)
    {
        //Aqui se pide un numero al jugador
        cout<< "Por favor introduzca un numero entre 1 y 100: "<< endl;
        cin>>guess;

        if(guess < 74)
        {
            cout<< "Su numero es muy bajo"<<endl;
            //Indicador de cuantos intentos le quedan al jugador
            cout<<"Le quedan "<<4-count<<" intento/s"<<endl;
        }    
        else if (guess > 74)
        {
            cout<< "Su numero es muy alto"<<endl;
            cout<<"Le quedan "<<4-count<<" intento/s"<<endl;
        }
        else if (guess == 74)
        {
            cout<< "Felicidades adivino el numero magico!"<<endl;
        }
        count++;
    }
    return 0;
}