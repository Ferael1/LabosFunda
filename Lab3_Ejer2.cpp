#include <iostream>
#include <math.h>

using namespace std;

#define pi  3.141592653589793238462643383279502884

int main()
{
    int Radio;
    float Perimetro;
    float CirculoA;

    cout << "\n" << "Bienvenido, este programa se dedica a calcular el area y perimetro de un circulo\n";
    cout << "A continuacion, ingrese el radio del circulo (cm) del cual desea saber el area y perimetro:\n";
    cin >> Radio;

    Perimetro = (2 * pi * Radio);
    CirculoA = (pi * pow(Radio, 2));

    cout << "\n" << "Los calculos se han llevado a cabo, se presentan a continuacion:\n"<< "\n";
    cout << "El area del circulo es " << CirculoA << " centimetros cuadrados.\n" << "\n";
    cout << "El perimetro del circulo es " << Perimetro << " centimetros.\n"<< "\n"; 
    return 0;
}