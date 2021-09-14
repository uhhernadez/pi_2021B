#include <iostream>
using namespace std;
int main() {
    float a, b;
    cout << "Dame los valores de a y b" << endl;
    cin >> a >> b;
    char operacion;
    cout << "Dame la operacion" << endl;
    cin >>  operacion;
    switch(operacion) {
        case '*': cout << "La multiplicacion es: " << a*b  << endl; break;
        case '/': cout << "La division es: " << a/b  << endl; break;
        case '+': cout << "La suma es: " << a+b  << endl; break;
        case '-': cout << "La resta es: " << a-b  << endl; break;
        default: cout << "Operacion no soportada" << endl; break;
    }
}