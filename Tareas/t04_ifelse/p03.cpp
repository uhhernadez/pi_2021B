#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Dame dos valores: "<< endl;
    cin >> a >> b;
    if(a > b) {
        cout << "El numero a es mayor que b" << endl;
    } else {
        cout << "El numero b es mayor que a" << endl;
    }
}