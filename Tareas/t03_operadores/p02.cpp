#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath> // Bliblioteca para operaciones matemáticas 
#define PI 3.141592653589793238462643383279502884197169399375105820974944592307816406286 
using namespace std;
int main () {
    const float pi = 3.141592653589793238462643383279502884197169399375105820974944592307816406286;
    float radius;
    float A;
    cout << "Introduzca el valor del radio: " << endl;
    cin >> radius;
    A =  pi * pow(radius, 2);
    A =  PI * pow(radius, 2);
    A =  M_PI * pow(radius, 2);
    cout << "El area del circulo es: " << A << endl;
}