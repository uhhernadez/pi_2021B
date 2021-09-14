#include <iostream>
using namespace std;
int main() {
    int a;
    cout << "Dame el evaluar: "<< endl;
    cin >> a;
    if ( a < 0) {
        cout << "Negativo" << endl;
    } else {
        cout << "Positivo" << endl;
    }
}