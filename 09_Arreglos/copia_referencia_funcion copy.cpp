#include <iostream>
#include <vector>
using namespace std;
// Paso de argumento por copia
void RellenaTazaCafe (int taza) {
  taza = 100;
}

void RellenaTazaCafeReferencia(int &taza) {
  taza = 100;
}

int main () {
  int mug = 0;
  RellenaTazaCafe(mug);
  cout << mug << endl;
  
  RellenaTazaCafeReferencia(mug);
  cout << mug << endl;
  return 0;
}