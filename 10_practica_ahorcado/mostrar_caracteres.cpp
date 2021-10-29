#include <iostream>
#include <string>
#include <vector>
using namespace std;

void Ejemplo(string secreta) {
  for (int k=0; k < secreta.size(); k++) {
    cout << secreta[k] << endl;
  }
}

void MostrarProgreso(string palabra, vector<bool> estado) {
  for (int i = 0; i < palabra.size(); i++) {
    if(estado[i]) {
      cout << palabra[i];
    } else  {
      cout << '-';
    }
  }
  cout << endl;
}


void MostrarProgreso(string palabra, vector<bool> estado, char vacio) {
  for (int i = 0; i < palabra.size(); i++) {
    if(estado[i]) {
      cout << palabra[i];
    } else  {
      cout << vacio;
    }
  }
  cout << endl;
}

int main() {
  string secreta = "Aguacate"; // palabra secreta
  vector<bool> mostrar(secreta.size());
  mostrar[2] = true;
  // secreta.size() == mostrar.size() 
  MostrarProgreso(secreta, mostrar);
  mostrar[5] = true;
  MostrarProgreso(secreta, mostrar, '_');

  mostrar[7] = true;
  MostrarProgreso(secreta, mostrar, '_');

  int count = 0;
  for (int j =0; j< mostrar.size() ;j++) {
    mostrar[j] = true;
  }
  MostrarProgreso(secreta, mostrar, '_');

  for (int k =0; k < mostrar.size(); k++) {
    if (mostrar[k]) {
        count++;
    } 
  }

  if (count == mostrar.size()) {
    cout << "Se han descubierto todas las letras" << endl; 
  }

  cout << "Numero true: " << count << endl;
  return 0;
}
