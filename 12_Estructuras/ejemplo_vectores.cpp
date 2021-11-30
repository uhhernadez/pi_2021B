#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Vec {
  float x;
  float y;

  Vec() {
    x = 0;
    y = 0;
  }

  Vec(float xx, float yy) {
    x = xx;
    y = yy;
  }
};

Vec Sumar (Vec a, Vec b) {
  Vec c;
  c.x = a.x + b.x;
  c.y = a.y + b.y;
  return c;
}

Vec sumar(Vec a, Vec b) {
  return Vec(a.x + b.x, a.y + b.y);
}

int main () {
  Vec a(10, 20), b(20, 30), c;
  //c = Sumar(a,b);
  c = sumar(a,b);
  cout << "(x , y) ("<<c.x << "," << c.y << ")" << endl; 
}