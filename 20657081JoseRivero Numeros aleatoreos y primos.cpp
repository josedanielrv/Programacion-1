#include <iostream>
#include <random>

using namespace std;

int main() {
  // Generador de números aleatorios
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<int> dist(0, 99);

  // Arreglo para almacenar los 20 números aleatorios
  int numerosAleatorios[20];

  // Generar y almacenar números aleatorios
  for (int i = 0; i < 20; i++) {
    numerosAleatorios[i] = dist(gen);
  }

  // Arreglo para almacenar los números primos
  int numerosPrimos[20];
  int numPrimos = 0;

  // Recorrer el arreglo de números aleatorios
  for (int i = 0; i < 20; i++) {
    bool esPrimo = true;

    // Dividir el número por todos los números entre 2 y su raíz cuadrada
    for (int j = 2; j * j <= numerosAleatorios[i]; j++) {
      if (numerosAleatorios[i] % j == 0) {
        esPrimo = false;
        break;
      }
    }

    // Si el número es primo, agregarlo al arreglo de números primos
    if (esPrimo) {
      numerosPrimos[numPrimos++] = numerosAleatorios[i];
    }
  }

  // Mostrar los números de ambos arreglos
  cout << "Números aleatorios:" << endl;
  for (int i = 0; i < 20; i++) {
    cout << numerosAleatorios[i] << " ";
  }
  cout << endl << endl;

  cout << "Números primos:" << endl;
  for (int i = 0; i < numPrimos; i++) {
    cout << numerosPrimos[i] << " ";
  }
  cout << endl;

  return 0;
}
