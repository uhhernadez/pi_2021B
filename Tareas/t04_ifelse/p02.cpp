#include <iostream>
using namespace std;
int main() {
    int numero;
    cout << "Dame un numero entero: " << endl;
    cin >> numero; 

    if (numero >= 0) {
        if (numero <= 10) {
            cout << "El numero esta en el rango de 0 a 10" << endl;
        }
    }
    /*
    if (numero >= 0 && numero <= 10) {

    }
    */
}