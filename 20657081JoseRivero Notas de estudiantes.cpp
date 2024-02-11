#include <iostream>
#include <string>

using namespace std;

int main() {
  // Arreglo para almacenar los nombres de los estudiantes
  string nombres[10];

  // Arreglos para almacenar las 3 notas de cada estudiante
  int notas1[10], notas2[10], notas3[10];

  // Leer los nombres y notas de los estudiantes
  cout << "Ingrese los nombres de 10 estudiantes:" << endl;
  for (int i = 0; i < 10; i++) {
    cin >> nombres[i];
  }

  cout << endl << "Ingrese las 3 notas de cada estudiante:" << endl;
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> notas[i][j];
    }
  }

  // Calcular la nota final de cada estudiante
  int notasFinales[10];
  for (int i = 0; i < 10; i++) {
    notasFinales[i] = (notas1[i] + notas2[i] + notas3[i]) / 3;
  }

  // Mostrar la información en forma de tabla
  cout << endl << "-------------------------------------------------" << endl;
  cout << "| Estudiante | Nota 1 | Nota 2 | Nota 3 | Nota Final |" << endl;
  cout << "-------------------------------------------------" << endl;
  for (int i = 0; i < 10; i++) {
    cout << "| " << nombres[i] << " | " << notas1[i] << " | " << notas2[i] << " | " << notas3[i] << " | " << notasFinales[i] << " |" << endl;
  }
  cout << "-------------------------------------------------" << endl;

  return 0;
}
