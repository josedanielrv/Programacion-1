#include <iostream>
#include <random>

using namespace std;

int main() {
  // Generador de números aleatorios
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<int> dist(0, 9);

  // Arreglo para almacenar los 20 números aleatorios
  int numeros[4][5];

  // Generar y almacenar números aleatorios
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 5; j++) {
      numeros[i][j] = dist(gen);
    }
  }

  // Mostrar la matriz
  cout << "Matriz:" << endl;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 5; j++) {
      cout << numeros[i][j] << " ";
    }
    cout << endl;
  }

  // Calcular y mostrar las sumas parciales de filas
  cout << endl << "Sumas parciales de filas:" << endl;
  for (int i = 0; i < 4; i++) {
    int sumaFila = 0;
    for (int j = 0; j < 5; j++) {
      sumaFila += numeros[i][j];
    }
    cout << "Fila " << i + 1 << ": " << sumaFila << endl;
  }

  // Calcular y mostrar las sumas parciales de columnas
  cout << endl << "Sumas parciales de columnas:" << endl;
  for (int j = 0; j < 5; j++) {
    int sumaColumna = 0;
    for (int i = 0; i < 4; i++) {
      sumaColumna += numeros[i][j];
    }
    cout << "Columna " << j + 1 << ": " << sumaColumna << endl;
  }

  // Calcular y mostrar la suma total
  int sumaTotal = 0;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 5; j++) {
      sumaTotal += numeros[i][j];
    }
  }

  cout << endl << "Suma total: " << sumaTotal << endl;

  return 0;
}
