#include <iostream>
#include <vector>
#include <string>
using namespace std;


void PrimerEnfoque () {
  cout << "1 Taco chorizo" << endl;
  cout << "2 Quesadilla pastor" << endl;
  cout << "3 Taco pastor" << endl;
  cout << "4 Torta campechana" << endl;
  cout << "5 No falla" << endl;
  int opcion;
  cout << "Que precio quieres saber?" <<endl;
  cin >> opcion;
  if(opcion == 1) { cout << "11.0 MXM" << endl; }
  if(opcion == 2) { cout << "22.0 MXM" << endl; }
  if(opcion == 3) { cout << "11.5 MXM" << endl; }
  if(opcion == 4) { cout << "33.7 MXM" << endl; }
  if(opcion == 5) { cout << "100.8 MXM" << endl; }
}

void SegundoEnfoque () {
  cout << "1 Taco chorizo" << endl;
  cout << "2 Quesadilla pastor" << endl;
  cout << "3 Taco pastor" << endl;
  cout << "4 Torta campechana" << endl;
  cout << "5 No falla" << endl;
  int opcion;
  cout << "Que precio quieres saber?" <<endl;
  cin >> opcion;
  switch (opcion) {
    case 1: { cout << "11.0 MXM" << endl; } break;
    case 2: { cout << "22.0 MXM" << endl; } break;
    case 3: { cout << "11.5 MXM" << endl; } break;
    case 4: { cout << "33.7 MXM" << endl; } break;
    case 5: { cout << "100.8 MXM" << endl;} break;
  }
}

void TercerEnfoque () {
  vector<string> comidas{"Taco chorizo", "Quesadilla pastor", "Tacos pastor", "Torta campechana", "No falla"};
  vector<float> precios{11.0, 22.0, 11.5, 33.7, 100.8};

  for (int k = 0; k < 5; k++) {
    cout << (k+1) <<" "<< comidas[k] << endl;
  }

  int opcion;
  cout << "Que precio quieres saber?" <<endl;
  cin >> opcion;
  cout << precios[opcion-1] << endl;
}


struct Taqueria {
  vector<string> comidas;
  vector<float> precios;

  Taqueria() {
    comidas.push_back("Taco chorizo"); 
    comidas.push_back("Quesadilla pastor");  
    comidas.push_back("Tacos pastor");  
    comidas.push_back("Torta campechana");  
    comidas.push_back("No falla");

    precios.push_back(11.0); 
    precios.push_back(22.0); 
    precios.push_back(11.5); 
    precios.push_back(33.7); 
    precios.push_back(100.8); 
  }
};

void MostrarMenu(Taqueria &t) {
  for(int k=0; k< t.comidas.size(); k++) {
    cout << (k+1) << " " << t.comidas[k] << endl;
  }
}

void MostrarPrecio(Taqueria &t, int opcion) {
  cout << t.comidas[opcion-1] << " " << t.precios[opcion-1] << "$" << endl;
}

int main () {
  Taqueria cruzRoja;
  MostrarMenu(cruzRoja);
  int opcion;
  cout << "Que precio quieres saber?" <<endl;
  cin >> opcion;
  MostrarPrecio(cruzRoja,opcion);
}
