#include <iostream>
#include <vector>
using namespace std;

void MostrarValores(vector<int> &v) {
  for (int &k : v) {
    cout << k << " ";
  }
  cout << endl;
}

void AsignarValores(vector<int> &v) {
  for (int &k : v) {
    k = 1;
  }
}

int main () {
  vector<int> a{1, 2, 3, 4};
  MostrarValores(a);
  AsignarValores(a);
  MostrarValores(a);
  return 0;
}