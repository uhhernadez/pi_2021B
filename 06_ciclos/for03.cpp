#include <iostream>
using namespace std;
int main () {
    int N = 4;
    for (int k = 0 ; k < N; k++) {
        for (int i = 0 ; i < N; i++) {
            cout << "*";
        }
        cout << "\n";
    }
}