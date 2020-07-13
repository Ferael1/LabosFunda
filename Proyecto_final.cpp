#include <iostream>
#include <string.h>
#include <string>

const int longCad = 20;

using namespace std;

//Aqui se forma la estructura del arreglo
struct costoporArt
{
    char nombreArt[longCad+1];
    int cantidad;
    float precio;
    float costo;
};

//Funcion que se encarga de recibir y almacenar los datos de la compra
void Almdedatos (costoporArt lista[], int n){

    string prod;

    cout<<"Por favor ingrese el nombre del producto, la cantidad que desea compra y su precio"<<endl;
    for (int i = 0; i < n; i++)
    {
        //Ingreso del nombre del producto
        cout<<endl;
        cout<<"Nombre del producto: ";
        getline(cin, prod, '\n');
        strncpy(lista[i].nombreArt, prod.c_str( ), longCad);
        lista[i].nombreArt[longCad] ='\0';
        
        //Ingreso de la cantidad de producto a comprar
        cout<<endl;
        cout<<"Cantidad de unidades a comprar: ";
        cin>> lista[i].cantidad;
        //Condicion que se asegura que el usuario no coloque un numero menor o igual a 0
        while (lista[i].cantidad <=0)
        {
            cout<<endl;
            cout<<"La cantidad de unidades no es valida"<<endl;
            cout<<endl;
            cout<<"Cantidad de unidades a comprar: ";
            cin>> lista[i].cantidad;
        }

        //Ingreso del precio unitario del producto
        cout<<endl;
        cout<<"Precio por unidad: ";
        cin>>lista[i].precio;
        //Condicion que se asegura que el usuario no coloque un numero menor o igual a 0
        while (lista[i].precio <=0)
        {
            cout<<endl;
            cout<<"Ha introducido un precio invalido intentelo de nuevo"<<endl;
            cout<<endl;
            cout<<"Precio por unidad: ";
            cin>>lista[i].precio;
        } 
        cin.ignore(100,'\n');
    }
}

//Esta funcion se encarga de obtener el costo de los productos comprados
void operacion (costoporArt lista[], int n){

    for (int i = 0; i < n ; i++)
    {
        lista[i].costo = lista[i].cantidad*lista[i].precio;
    }
}

//Funcion que se encarga de mostrar todos los articulo comprados a modo de factura
void mostrar (costoporArt lista[], int n){
    
    cout<<endl;
    cout<<"FACTURA:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"Nombre del articulo: "<<lista[i].nombreArt<<endl;
        cout<<"Precio unitario del producto: $"<<lista[i].precio<<endl;
        cout<<"Cantidad del producto a llevar: "<<lista[i].cantidad<<endl;
        cout<<"Costo total por esta articulo: $"<<lista[i].costo<<endl;
        cout<<endl;
    }
    
}

//Funcion que calcula el costo total de todos los productos comprados
float totalapagar (costoporArt lista[],int n){

    float totalapag;

    for (int i = 0; i < n; i++)
    {
        totalapag += lista[i].costo; 
    }
    
    return totalapag;
}

int main()
{
    float total;
    int n;
    cout<<endl;
    cout<<"Procesamiento de compra."<<endl;
    
    //La lista que se presenta aqui es solamente representativa para dar opciones
    //y precios al usuario y no los tenga que inventar, sin embargo, el programa
    //no es capaz de restringir las opciones del usuario para que solo pueda escoger
    //los prouctos presentes en la lista.
    cout<<"A continuacion le mostraremos una lista de productos lo cuales ";
    cout<<"puede adquirir junto con su precio unitario."<<endl;
    cout<<endl;
    cout<<"Pan de caja--------$2.00"<<endl;
    cout<<"Arroz--------------$0.70"<<endl;
    cout<<"Cereal-------------$2.50"<<endl;
    cout<<"Frijol rojo--------$1.50"<<endl;
    cout<<endl;

    //Aqui se especifica cuantos productos se compraran
    cout<<"Por favor ingrese la cantidad de productos que desea comprar: "<<endl;
    cin>>n;

    //Condicon que evita que el usuario coloque un numero menor o igual a 0
    while (n <= 0)
    {
        cout<<endl;
        cout<<"Por favor vuelva a intentar con una cantidad valida"<<endl;
        cout<<endl;
        cout<<"Por favor ingrese la cantidad de productos que desea comprar: "<<endl;
        cin>>n;
    }
    cin.ignore(100,'\n');

    costoporArt lista[n];
    
    //Llamado de las funciones presentadas anteriormente
    Almdedatos (lista,n);
    operacion (lista,n);
    mostrar (lista, n);
    total = totalapagar (lista,n);

    cout<<"El total de su comprar es de: $"<<total ;

    return 0;
}
