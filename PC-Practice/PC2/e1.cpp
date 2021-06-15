#include <iostream>

using namespace std;

int** sumar_cruz(int** matriz, int tamano) {
  int** nueva_matriz = new int*[tamano];

  for (int i = 0; i < tamano; i++) {
    nueva_matriz[i] = new int[tamano];
  }
  
  for (int i = 0; i < tamano; i++) {
    for (int j = 0; j < tamano; j++) {
      nueva_matriz[i][j] = matriz[i][j];

      if(j == 0 && i == 0) {
        nueva_matriz[i][j] += matriz[i + 1][j];
        nueva_matriz[i][j] += matriz[i][j + 1];
      } else if(j == 0 && i == tamano - 1) {
        nueva_matriz[i][j] += matriz[i - 1][j];
        nueva_matriz[i][j] += matriz[i][j + 1];
      } else if(j == tamano - 1 && i == 0) {
        nueva_matriz[i][j] += matriz[i + 1][j];
        nueva_matriz[i][j] += matriz[i][j - 1];
      } else if(j == tamano - 1 && i == tamano - 1) {
        nueva_matriz[i][j] += matriz[i - 1][j];
        nueva_matriz[i][j] += matriz[i][j - 1];
      } else {
        if(j == 0) {
          nueva_matriz[i][j] += matriz[i][j + 1];
          if(i != 0) {
            nueva_matriz[i][j] += matriz[i + 1][j];
            nueva_matriz[i][j] += matriz[i - 1][j];
          } 
        } else if(j == tamano - 1) {
          nueva_matriz[i][j] += matriz[i][j - 1];
          if(i != 0) {
            nueva_matriz[i][j] += matriz[i + 1][j];
            nueva_matriz[i][j] += matriz[i - 1][j];
          } 
        } else if(i == 0) {
          nueva_matriz[i][j] += matriz[i + 1][j];

          if(j != 0) {
            nueva_matriz[i][j] += matriz[i][j + 1];
            nueva_matriz[i][j] += matriz[i][j - 1];
          } 
        } else if(i == tamano - 1) {
          nueva_matriz[i][j] += matriz[i - 1][j];
          if(j != 0) {
            nueva_matriz[i][j] += matriz[i][j + 1];
            nueva_matriz[i][j] += matriz[i][j - 1];
          } 
        }
      }

      if(j != 0 && j != tamano - 1 && i != 0 && i != tamano - 1) {
          nueva_matriz[i][j] += matriz[i + 1][j];
          nueva_matriz[i][j] += matriz[i - 1][j];
          nueva_matriz[i][j] += matriz[i][j + 1];
          nueva_matriz[i][j] += matriz[i][j- 1];

      }
    }
  }

  return nueva_matriz;
}

void print(int **matriz, int tamano) {
  for (int i = 0; i < tamano; i++) {
    for (int j = 0; j < tamano; j++) {
      cout << matriz[i][j] << " ";
    }

    cout << endl;
  }
}

int main() {
  int tamano = 0;
  cin >> tamano;

  int** matriz = new int*[tamano];

  for (int i = 0; i < tamano; i++) {
    matriz[i] = new int[tamano];
  }

  for (int i = 0; i < tamano; i++) {
    for (int j = 0; j < tamano; j++) {
      cin >> matriz[i][j];
      // matriz[i][j] = 1;
    }
  }

  print(matriz, tamano);

  auto nueva_matriz = sumar_cruz(matriz, tamano);
  print(nueva_matriz, tamano);

  return 0;
}