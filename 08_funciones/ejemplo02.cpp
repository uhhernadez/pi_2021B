#include <iostream>
using namespace std;

void funcionB() {
    cout << "Llamando a la funcion B \n";
}

void funcionA() {
    cout << "Llamando a la funcion A \n";
    funcionB();
}

int main() {
    funcionA();
    return 0;
}