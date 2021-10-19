#include <iostream>
#include <vector>
using namespace std;

void ejemplo1() {
    int valores[] = {1, 2, 3, 4, 5};
    for (size_t k = 0; k < 5 ; k++) {
        valores[k] = valores[k]*2;
    }

    for (int &i : valores) {
        cout << i << endl;        
    }
}

void MostrarValores (vector<float> v) {
    for (float &i : v) {
        cout << i << endl;
    }
}

int main () {
    vector<float> v{8, 9, 10, 11, 0};
    MostrarValores(v);    
    return 0;
}