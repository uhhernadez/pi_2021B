#include <iostream>
using namespace std;
int main () {
    // hora es menor de 12 horas 
    int hora;
    cout << "Hora en formato 24 horas: \n";
    cin >> hora;
    cout << "La hora en formato de 12 horas es: " << hora % 12 << endl; 
}