#include <iostream>
using namespace std;
int main () {
    int respuesta;

    cout << "Tienes un problema? " << endl; // No, no, negativo, nel
    cout << "Escribe 0 - si, 1 - no \n";
    cin >> respuesta;

    if (respuesta == 1) {
        cout << "Excelente, no hay de que preocuparse " <<endl;
    } else if (respuesta == 0) {
        cout << "Tiene solucion ?" << endl;
        cout << "Escribe 0 - si, 1 - no \n";
        cin >> respuesta;

        if (respuesta == 1) {
            cout << "No tiene, solucion no te preocupes" << endl;

        } else {
            cout << "Solucionalo" << endl;
        }
    } else {
        cout << "Por favor introduce el valor correcto" << endl;
    }

}