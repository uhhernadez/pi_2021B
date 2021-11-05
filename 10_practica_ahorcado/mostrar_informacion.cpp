#include <iostream>
#include <vector>
#include <string>

using namespace std;

void Pantalla (int turno, vector<char> hist) {
  cout << "Ahorcado" <<endl;
  cout << "Número de turno: " << turno << endl; 
  
  for(char &c: hist) {
    cout << c ;
  }
  cout << endl;
}

int main () {
  char letra;
  int turnos = 1;
  vector<char> historial;

  do {
    Pantalla(turnos,historial);
    cout << "Dame un letra: " << endl;
    cin >> letra;
    turnos++;
    historial.push_back(letra);
  } while(letra != 'q') ;

}
