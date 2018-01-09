/*
  Angel Odiel Treviño Villanueva
  A01336559
  Tarea: 1 Fecha: 9/Enero Materia: Diseño de Algoritmos
*/

#include <iostream>
#include <string>

using namespace std;

int main(){

  string Entrada = "AABCCDDEEFF";

  for(int i = 0; i < Entrada.length()-1; i+=2){ //se mueve de dos en dos
    if(Entrada[i] != Entrada[i+1] ){ //cuando encuentra el unico se detiene
      cout << Entrada[i] << endl;
      break;
    }
  }

  return 0;
}
