#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    for (int k = 0; k < argc; k++) {
        cout << argv[k] << endl;
    }

    return 0;
}