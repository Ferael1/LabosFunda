#include <iostream>
#include <string>

using namespace std;

int main()
{

    string producto;
    int precio;
    int cantidad;
    float total;    

    cout << "\n" << "Bienvenido a nuestra tienda online\n"; 
    cout << "La lista de nuestros productos y sus precios es\nAudifonos $5.00 \nMouse $10.00 \nTeclado $20.00 \n";

    nNAME: 
    cout << "Por favor ingrese el nombre del producto que desea comprar\n";
    cin >> producto;

    if ( producto == "Audifonos" || producto == "audifonos")
    {
        precio = 5;
    }
    else if ( producto == "Mouse" || producto == "mouse")
    {
        precio = 10;
    }
    else if ( producto == "Teclado" || producto == "teclado")
    {
        precio = 20;
    }

    else 
    {
        cout << "El nombre del producto que ha ingresado es incorrecto\n";
        goto nNAME; 
    }

    cout << "Por favor ingrese la cantidad de " << producto << " que desea comprar\n";
    cin >> cantidad;
    cout << "Segun la cantidad ingresada, usted ha ordenado : " << cantidad << " " << producto << ".\n";

    total = (precio * cantidad);

    cout << "Su total de compra es $" << total << "\n" << "\n";
    cout << "Gracias por su compra, vuelva pronto.\n"; 
    return 0;

}