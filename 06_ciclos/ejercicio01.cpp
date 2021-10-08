#include <iostream>
using namespace std;
int main () {
    int N = 5; // Número de renglones

    cout << "Utilizando el ciclo for" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if ( j % 2 == 0) {
                cout << '*';
            } else {
                cout << '+';
            }
        } 
        cout << endl;
    }

    cout << "Utilizando el ciclo while" << endl;

    int m = 0, n = 0;

    while (m < N) {
        while (n < N) {
            if ( n % 2 == 0) {
                cout << '*';
            } else {
                cout << '+';
            }
            n++;                        
        }
        cout << endl;
        n = 0;
        m++;
    }
    cout << "Implementacion usando el ciclo do-while" << endl;
    m = 0;
    do {
        n = 0;
        do {
            if ( n % 2 == 0) {
                cout << '*';
            } else {
                cout << '+';
            }
            n++;                        
        } while (n < N); 
        cout << endl;
        m++;
    } while (m < N); 

}