#include <iostream>
#include <string>
using namespace std;

int main () {
  string nombres[] = {"Vinsmoke Sanji", "Roronoa Zoro", "Monkey D. Luffy", "Nico Robin", "Nami", "Tony Tony Chopper"};
  float alturas[] =  {1.80, 1.81, 1.74, 1.88, 1.70, 0.9};

  float max = alturas[0];
  int ind = 0;

  for (int k = 1; k < 6; k++) {
    if(max < alturas[k]) {
      max = alturas[k];
      ind = k;
    }
  }

  cout << "Personaje más alto: " << nombres[ind] << " es de " << alturas[ind] << " posicion " << ind << endl;
}