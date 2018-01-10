/*
  Angel Odiel Treviño Villanueva
  A01336559
  Tarea: 1 Fecha: 9/Enero Materia: Diseño de Algoritmos
*/

#include <iostream>
#include <string>

using namespace std;

int main(){

  string Entrada = "";//AABCCDDEEFF
  cout << "entrada"<< endl;
  cin >> Entrada;
  bool found = false;

  for(int i = 0; i < Entrada.length()-1 && found == false; i+=2){ //se mueve de dos en dos
    if(Entrada[i] != Entrada[i+1]){ //cuando encuentra el unico se detiene
      cout << Entrada[i] << endl;
      found = true;
    }
  }

  if(found == false){
    cout << "no encontrado" << endl;
  }

  return 0;
}
