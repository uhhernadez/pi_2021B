#include <iostream>
using namespace std;
int main () {
    char letra = ' ';    
    while ( letra != 'q') {
        cout << "Quieres continuar? \nEscribe 'q' salir o cualquier otra letra para continuar" << endl;
        cin >> letra;
    }
}