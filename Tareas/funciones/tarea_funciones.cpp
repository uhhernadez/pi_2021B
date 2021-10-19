#include <iostream>

// Problema 1
int Maximo(int a, int b) {
    return (a > b)? a : b; // If inmediato
}
float Maximo(float a, float b) {
    if ( a > b) {
        return a;
    } 
    return b;
}
double Maximo(double a, double b) {
    float maximo;

    if(a > b) {
        maximo = a;
    } else {
        maximo = b;
    }

    return maximo;
}

// Problema 2
float MxnAUsd(float pesos);
float MxnAUsd(float pesos, float conversion);

// Problema 3
// PI = 3.1416...
float DiametroCirculo(float radio);
float AreaCirculo(float radio);
float PerimetroCirculo(float radio);

float CirculoDiametro(float radio);
float CirculoArea(float radio);
float CirculoPerimetro(float radio);

using namespace std;

int main( ) {
    float radio{4};
    float pesos{1000};

    // C imposible
    // C++ polimorfismo
    float mxn1 = MxnAUsd(pesos);
    float mxn2 = MxnAUsd(pesos, 0.049);


    cout << "Diametro: " << CirculoDiametro(radio) 
         << " Area: " << CirculoArea(radio) 
         << " Perimetro: " << CirculoPerimetro(radio) 
         << endl;
    return 0;
}