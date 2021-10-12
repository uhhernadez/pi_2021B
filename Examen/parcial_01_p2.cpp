#include <iostream>
using namespace std;
int main() {
    int m;
    do {
        cout << "Dame el numero de renglones" << endl;
        cin >> m;
    } while ( m > 9 || m < 1);

    for ( int i = 0; i < m; i++) {
        for (int j = 0; j < m - i; j++) {
            cout << (i+1) << " ";
        }
        cout << endl;
    }
}