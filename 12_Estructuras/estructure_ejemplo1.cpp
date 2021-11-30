#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Gato {
  string nombre;
  float peso;
  float edad;
  Gato(string n, float p, float e) { // Constructor
    nombre = n;
    peso = p;
    edad = e;
  }
};

struct Vec {
  float x;
  float y;
};
Vec Sumar (Vec a, Vec b) {
  Vec c;
  c.x = a.x + b.x;
  c.y = a.y + b.y;
  return c;
}

void Mostrar (Gato &g) {
  cout << g.nombre << " " << g.peso << " "<< g.edad << endl;  
}


int main() {
  int year = 2021;
  Gato gato("Gertrudis", 5.5, 10); // Lo elementos de la estructura no están inicializados

  vector<Gato> gatos;
  gatos.push_back(gato);
  gatos.push_back(Gato("Don Gato", 10, 10));
  gatos.push_back(Gato("Felpuchina", 2, 6));
  gatos.push_back(Gato("Benito", 10, 3));

  for (Gato &g : gatos ) {
    Mostrar(g);
  }



  return 0;
}