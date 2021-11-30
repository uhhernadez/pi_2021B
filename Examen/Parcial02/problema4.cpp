#include <iostream>
#include <vector>
using namespace std;

int main () {
  vector<float> v { 1, 2, 3, 4, 5};
  float aux = v[0] + v[1] + v[2] + v[3] + v[4];
  cout << "Promedio " << (aux/5.0) << endl;
}