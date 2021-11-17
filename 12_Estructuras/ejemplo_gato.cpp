#include <iostream>
#include <string>
using namespace std;

struct Gato {
  float edad;
  string nombre;
  bool vivo;
};

void Mostrar(Gato &g) {
  cout << "El nombre del gato es: " << g.nombre << " de " << g.edad << " anios de edad" << endl;
}
void Maullar (Gato &g) {
  if (g.vivo) {
    cout << g.nombre << " miiiiiiiiiaaaaaauuuuu!!  miiiiiiiiiaaaaaauuuuu!! " << endl;
  } else {
    cout << g.nombre << " buuuuuuuuuh buuuuuuuuuuuuh" << endl;
  }
}

void Envejecer(Gato &g, float cantidad) {
  g.edad = g.edad + cantidad;
  const float edad_maxima = 15;
  if (g.edad > edad_maxima) {
    g.vivo = false;
  }
}

int main () {
  Gato felpu;
  felpu.edad = 1.4; // Edad está en años
  felpu.nombre = "Felpuchina"; // Nombre del gato
  felpu.vivo = true;
  Gato gertru;
  gertru.nombre = "Gertrudis";
  gertru.edad = 6;
  gertru.vivo = true;

  Mostrar(felpu);
  Maullar(felpu);
  Envejecer(felpu, 2);
  Mostrar(felpu);

  Maullar(felpu);
  Envejecer(felpu, 10);
  Mostrar(felpu);
  
  Maullar(felpu);
  Envejecer(felpu, 10);
  Maullar(felpu);

  Envejecer(gertru, 20);
  Maullar(gertru);

  return 0;
}