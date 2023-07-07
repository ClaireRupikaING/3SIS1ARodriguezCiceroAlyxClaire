#include <iostream>
#include <string>

using namespace std;

void init(string DetX[], string DetY[], string DetGen[]);
void DosPorDos(string DetX[], string DetY[], string DetGen[]);
void TresPorTres(string DetX[], string DetY[], string DetGen[]);

int main() {
    string DetX[10];
    string DetY[10];
    string DetGen[10];
    int op, comatrix, x, y, z, gx, ax, zx;

    init(DetX, DetY, DetGen);

    cout << "Calculadora básicota de determinantes" << endl;
    cout << "Ingrese la opción deseada" << endl;
    cout << "Para 2x2 ingrese (1) y para 3x3 ingrese (2): " << endl;
    cin >> op;

    if (op == 1) {
        cout << "Ingrese los coeficientes de la matriz 2x2:" << endl;
        DosPorDos(DetX, DetY, DetGen);
    } else if (op == 2) {
        cout << "Ingrese los coeficientes de la matriz 3x3:" << endl;
        TresPorTres(DetX, DetY, DetGen);
    } else {
        cout << "HAHAHAHA ¿No sabes leer? Escribe 1 o 2." << endl;
    }

    return 0;
}

void init(string DetX[], string DetY[], string DetGen[]) {
    for (int i = 0; i < 10; i++) {
        DetX[i] = "";
        DetY[i] = "";
        DetGen[i] = "";
    }
}

void DosPorDos(string DetX[], string DetY[], string DetGen[]) {
    int matrix[2][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Ingrese el valor [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrix[i][j];
        }
    }

    cout << "Matriz del determinante:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    int determinant = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
    cout << "El feo determinante es: " << determinant << endl;
    cout << "Gracias por esta cosa :3" << endl;
}

void TresPorTres(string DetX[], string DetY[], string DetGen[]) {
    int matrix[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Ingrese el valor [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrix[i][j];
        }
    }

    cout << "Matriz del determinante:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    int determinant = matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]) -
                      matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]) +
                      matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);

    cout << "El feo determinante es: " << determinant << endl;
    cout << "Gracias por esta cosa :3" << endl;
}
