#include "iostream"

using namespace std;

void Lectura (int, int[]);
void Sumatoria (int[], int[], int, int[]);
void Ans (int[], int);

int main ()
{
    int n;

    cout << "Por favor ingrese el tamaño de los arreglos: ";
    cin >> n;
        
    int primero[n];
    int segundo[n];
    int tercero[n];

    cout << "Ingrese los datos del primer arreglo: " << endl;
    Lectura (n, primero); 

    cout << "Ingrese los datos del segundo arreglo: " << endl;
    Lectura (n, segundo);

    Sumatoria (primero, segundo, n, tercero);

    Ans (tercero, n);

    return 0;
}

void Lectura (int n, int arreglo[])
{
    int i;
    for (i=0; i<n; i++)
    {
        cout << "Por favor ingrese un numero: ";
        cin >> arreglo[i];
    }

}

void Sumatoria (int primero[], int segundo[], int n, int tercero[])
{
    int i;
    for (i=0; i<n; i++)
    {
        tercero[i] = primero[i] + segundo[i];
    }
}

void Ans(int tercero[], int n)
{
    int i;
    cout << "La suma de los dos arreglos es: { ";
    for (i=0; i<n; i++)
    {
        cout << tercero[i];
        if (i<n-1){
            cout << ", ";
        }else{ 
        cout << " ";}
    }
    cout << "}";
}


