#include <iostream>
#include <vector>

using namespace std;
int main() {
    int a[4];
    
    a[0] = 4;
    a[1] = 3;
    a[2] = 2;
    a[3] = 1;

    // Foreach
    for (int &i : a) {
        cout << " " << i << endl;
    }

    return 0;
}