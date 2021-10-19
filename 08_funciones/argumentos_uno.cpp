#include <iostream>
using namespace std;

int SumaDos (int variable) {
    int resultado = variable + 2;
    return resultado;
} 

int main() {
    int var = 5;
    cout << SumaDos(var) << endl;
    return 0;    
}