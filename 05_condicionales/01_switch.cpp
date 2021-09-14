#include <iostream>
using namespace std;
int main() {
    int sel;
    cout << "Que opcion quieres ejecutar " << endl;
    cin >> sel;
    switch(sel) {
        case 1: cout << " Caso 1" << endl; break;
        case 2: cout << " Caso 2" << endl; break;
        case 3: cout << " Caso 3" << endl; break;
        default: cout << " Caso default" << endl; break;
    }
}