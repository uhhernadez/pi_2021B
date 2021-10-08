#include <iostream>
using namespace std;
int main () {
    int N = 10;

    for (int j = 0 ; j < N; j++) {
        if ( j == 0 || j == N-1) {
            for (int k = 0; k < N ; k++) {
                cout << "*";
            }
        } else {

            for (int i = 0 ; i < N ; i++) {
                if ( i == 0) {
                    cout << '*';
                } else if ( i == N -1 ) {
                    cout << '*';
                } else {
                    cout << ' ';
                }
            }
        }
        cout << endl;
    }
}