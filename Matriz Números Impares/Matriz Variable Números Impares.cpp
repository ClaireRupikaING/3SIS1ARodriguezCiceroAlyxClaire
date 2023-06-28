#include <iostream>

int main() {
    int filas, columnas;
    std::cout << "Ingrese el número de filas: ";
    std::cin >> filas;
    std::cout << "Ingrese el número de columnas: ";
    std::cin >> columnas;

    int** matriz = new int*[filas];

    
    int numero = 1;  
    for (int i = 0; i < filas; ++i) {
        matriz[i] = new int[columnas];
        for (int j = 0; j < columnas; ++j) {
            matriz[i][j] = numero;
            numero += 2;  
        }
    }

    std::cout << "Matriz generada:\n";
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            std::cout << matriz[i][j] << '\t';
        }
        std::cout << '\n';
    }

    
    for (int i = 0; i < filas; ++i) {
        delete[] matriz[i];
    }

    
    delete[] matriz;

    return 0;
    //Literalmente es lo mismo que con los números pares pero ahora se empieza con el 1   B R U H
}
