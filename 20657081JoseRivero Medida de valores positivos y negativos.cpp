#include <iostream>

using namespace std;

int main() {
  // Arreglo para almacenar los 10 números enteros
  int numeros[10];

  // Leer los números por teclado
  cout << "Ingrese 10 números enteros:" << endl;
  for (int i = 0; i < 10; i++) {
    cin >> numeros[i];
  }

  // Calcular la suma de los valores positivos
  int sumaPositivos = 0;
  for (int i = 0; i < 10; i++) {
    if (numeros[i] > 0) {
      sumaPositivos += numeros[i];
    }
  }

  // Calcular la suma de los valores negativos
  int sumaNegativos = 0;
  for (int i = 0; i < 10; i++) {
    if (numeros[i] < 0) {
      sumaNegativos += numeros[i];
    }
  }

  // Calcular la medida de los valores positivos
  float medidaPositivos = 0;
  if (sumaPositivos > 0) {
    medidaPositivos = (float)sumaPositivos / 10;
  }

  // Calcular la medida de los valores negativos
  float medidaNegativos = 0;
  if (sumaNegativos < 0) {
    medidaNegativos = (float)sumaNegativos / 10;
  }

  // Mostrar los resultados
  cout << endl << "Suma de valores positivos: " << sumaPositivos << endl;
  cout << "Medida de valores positivos: " << medidaPositivos << endl;
  cout << "Suma de valores negativos: " << sumaNegativos << endl;
  cout << "Medida de valores negativos: " << medidaNegativos << endl;

  return 0;
}
