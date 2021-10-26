#include <iostream>
#include <vector>
using namespace std;
int main () {
  vector<int> v{ 9, 8, 7 ,6 , 5, 4, 3 ,2, 1};

  // mostrando el contenido de mi vector
  for (int k : v) {
    cout << k << " ";
  }
  cout << endl;  
  for (int &k : v) {
    k = 1;
    cout << k << " ";
  }

  cout << endl;  
  for (int k : v) {
    cout << k << " ";
  }
  return 0;
}