#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Dame un numero" << endl;
    cin >> num;

    for (int k=1;k < 11; k++) {
        cout << num << " x " << k << " = " << k*num << endl;
    }

}