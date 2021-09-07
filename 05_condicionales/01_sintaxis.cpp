#include <iostream>
using namespace std;
int main() {
    int a = 10; // Valor por defecto 0 
    cout << "Dame el valor de a: "; 
    cin >> a;
    if (a > 4) {
        cout << "La variable a es mayor que 4" << endl;
    } else {
        cout << "La variable a es menor que 4" << endl; 
    }
}