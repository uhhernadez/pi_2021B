#include <iostream>
using namespace std;
int main() {
    int limite_inferior;
    int limite_superior;
    cout << "Dame los limites" << endl;
    cin >> limite_inferior >> limite_superior;

    for (int k=limite_inferior; k< limite_superior;k++) {
        cout << k << " \n";
    }

    if (limite_inferior < limite_superior) {


    }
    while(limite_inferior < limite_superior) {
        cout << limite_inferior << endl;
        limite_inferior++;
    }
}