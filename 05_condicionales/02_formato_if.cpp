#include <iostream>
using namespace std;
int main() {
    int b;
    cout << "Dame el valor de b : ";
    cin >> b;
    if ( b % 2 == 0) { // 2 % 2 = 0, 3 % 2 = 1, 7 % 2 = 1, 8 % 2 = 0, 4 % 2 = 0
        cout << "b es un numero par" << endl;
    } else {
        cout << "b es un numero impar" << endl;
    }
}