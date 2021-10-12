#include <iostream>
using namespace std;

int CapturaEntero() {
    int num;
    cout << "Dame un valor entero\n";
    cin >> num;
    return num;
}

int main () {
    int numa,numb,numc;
    numa = CapturaEntero();
    numb = CapturaEntero();
    numc = CapturaEntero();
    cout << "Numa " << numa << endl;
    cout << "Numb " << numb << endl;
    cout << "Numc " << numc << endl;
    return 0;
}