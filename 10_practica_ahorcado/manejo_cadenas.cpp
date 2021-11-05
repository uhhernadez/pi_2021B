#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool ExisteLetra (string palabra, char letra) {
  for (int k = 0; k < palabra.size(); k++) {
    if(palabra[k] == letra) {
      cout << "La letra '" << letra << "' existe en la posicion: " << k << endl;
      return true;
    }
  }
  return false;
}

vector<int> ExisteLetraPosiciones (string palabra, char letra) {
  vector<int> posiciones;

  for (int k = 0; k < palabra.size(); k++) {
    if(palabra[k] == letra) {
      cout << "La letra '" << letra << "' existe en la posicion: " << k << endl;
      posiciones.push_back(k);
    }
  }
  return posiciones;
}

int main() {
  string secreta = "Sabado";
  char letra = 'p';

  if(ExisteLetra (secreta, letra) == true) {
    cout << "La palabra SI contiene a la letra" << endl;
  } else {
    cout << "La palabra No contiene a la letra" << endl;
  }

  vector<int> posiciones = ExisteLetraPosiciones (secreta, letra);

  for (int &p : posiciones) {
    cout << "Hay una letra '" << letra << "' en la posicion: " << p << endl; 
  }
  
  return 0;
}
