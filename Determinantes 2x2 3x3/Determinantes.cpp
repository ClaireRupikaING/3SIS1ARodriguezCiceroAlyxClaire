#include <iostream>
#include <string>

using namespace std;

void init(string DetX[], string DetY[], string DetGen[]);
void DosPorDos(string DetX[], string DetY[], string DetGen[], int x);
void TresPorTres(string DetX[], string DetY[], string DetGen[], int x);

int main() {
    string DetX[10];
    string DetY[10];
    string DetGen[10];
    int comatrix, x, y, z, gx, ax, zx;
    x = 0;
    y = 0;
    z = 0;

    init(DetX, DetY, DetGen);

    cout << "Calculadora de determinantes o algo asi" << endl;
    cout << "Ingrese la opción 2x2 o 3x3 (1 o 2): ";
    cin >> x;

    if (x == 1) {
        cout << "Ingrese los coeficientes de la matriz 2x2:" << endl;
        DosPorDos(DetX, DetY, DetGen, x);
    } else if (x == 2) {
        cout << "Ingrese los coeficientes de la matriz 3x3:" << endl;
        TresPorTres(DetX, DetY, DetGen, x);
    } else {
        cout << "La tarea ha fallado con éxito, nah, elija 1 o 2." << endl;
    }

    return 0;
}

void init(string DetX[], string DetY[], string DetGen[]) {
    for (int y = 0; y < 10; y++) {
        DetX[y] = "";
        DetY[y] = "";
        DetGen[y] = "";
    }
}

void DosPorDos(string DetX[], string DetY[], string DetGen[], int x) {
    int matrix[2][2];
    // i es Y, j es Z
    for (int y = 0; y < x; y++) {
        for (int z = 0; z < x; z++) {
            cout << "Ingrese el valor [" << y + 1 << "][" << z + 1 << "]: ";
            cin >> matrix[y][z];
        }
    }

    cout << "Matriz del determinante:" << endl;
    for (int y = 0; y < x; y++) {
        for (int z = 0; z < x; z++) {
            cout << matrix[y][z] << " ";
        }
        cout << endl;
    }

    int determinant = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
    cout << "El resultado de tu fea determinante es: " << determinant << endl;
}

void TresPorTres(string DetX[], string DetY[], string DetGen[], int x) {
    int matrix[3][3];

    for (int y = 0; y < x; y++) {
        for (int z = 0; z < x; z++) {
            cout << "Ingrese el valor [" << y + 1 << "][" << z + 1 << "]: ";
            cin >> matrix[y][z];
        }
    }

    cout << "Matriz del determinante:" << endl;
    for (int y = 0; y < x; y++) {
        for (int z = 0; z < x; z++) {
            cout << matrix[y][z] << " ";
        }
        cout << endl;
    }

    int determinant = matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]) -
                      matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]) +
                      matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);

    cout << "El resultado de tu fea determinante es: " << determinant << endl;
}
