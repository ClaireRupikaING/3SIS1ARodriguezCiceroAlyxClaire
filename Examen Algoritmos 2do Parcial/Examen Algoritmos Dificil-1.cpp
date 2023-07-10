#include <iostream>

using namespace std;

int main() {
    const int n = 3;
    float a[n][n], b[n][n], aux, pivote;

    do {
        cout << "Ingrese los valores de la matriz A (tamaño " << n << "x" << n << "):" << endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
                b[i][j] = (i == j) ? 1.0f : 0.0f;
            }
        }

        for (int i = 0; i < n; i++) {
            pivote = a[i][i];

            for (int k = 0; k < n; k++) {
                a[i][k] = a[i][k] / pivote;
                b[i][k] = b[i][k] / pivote;
            }

            for (int j = 0; j < n; j++) {
                if (i != j) {
                    aux = a[j][i];

                    for (int k = 0; k < n; k++) {
                        a[j][k] = a[j][k] - aux * a[i][k];
                        b[j][k] = b[j][k] - aux * b[i][k];
                    }
                }
            }
        }

        cout << "Matriz A invertida:" << endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }

        cout << "Matriz B invertida:" << endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << b[i][j] << " ";
            }
            cout << endl;
        }

        cout << "¿Desea repetir el programa? (S/N): ";
        char option;
        cin >> option;

        if (option != 'S' && option != 's') {
            break;
        }
    } while (true);

    return 0;
}