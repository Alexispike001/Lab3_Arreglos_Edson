#include <iostream>
using namespace std;


void ingresarNumeros(int arr[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> arr[i];
    }
}


double calcularPromedio(int arr[], int tam) {
    int suma = 0;
    for (int i = 0; i < tam; i++) {
        suma += arr[i];
    }
    return static_cast<double>(suma) / tam;
}

void crearArregloMayoresAlPromedio(int arr[], int tam, double promedio, int mayores[], int& tamMayores) {
    tamMayores = 0;  
    for (int i = 0; i < tam; i++) {
        if (arr[i] > promedio) {
            mayores[tamMayores] = arr[i];
            tamMayores++;
        }
    }
}

void imprimirArreglo(int arr[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    const int TAM = 15;
    const int TAM_MAX_MAYORES = 15;  
    int arreglo[TAM];  
    int arregloMayores[TAM_MAX_MAYORES]; 
    int tamMayores = 0;  

    
    ingresarNumeros(arreglo, TAM);

    
    double promedio = calcularPromedio(arreglo, TAM);
    cout << "El promedio de los numeros es: " << promedio << endl;

    
    crearArregloMayoresAlPromedio(arreglo, TAM, promedio, arregloMayores, tamMayores);

    
    cout << "Arreglo original: ";
    imprimirArreglo(arreglo, TAM);

    
    cout << "Arreglo con numeros mayores al promedio: ";
    imprimirArreglo(arregloMayores, tamMayores);

    return 0;
}
