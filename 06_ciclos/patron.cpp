/*
    *****
   *****
  *****
 *****
*****

*/

#include <iostream>
using namespace std;

int main () {
    // i, j, k
    int N = 5;
    for (int i = 0; i < N; i++) {
        int espacio = N - 1 - i;
        for(int j = 0; j < espacio; j++) {
            cout << ' ';
        }

        for (int k = 0; k < N; k++) {
            cout << '*';    
        } 
        cout << endl;
    }
}