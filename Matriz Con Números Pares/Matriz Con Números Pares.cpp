#include <iostream>

int main() {
    int filas, columnas;
    std::cout << "Ingrese el número de filas: ";
    std::cin >> filas;
    std::cout << "Ingrese el número de columnas: ";
    std::cin >> columnas;

    // Crear una memoria de los datos introducidos para que las variables sean fijas
    int** matriz = new int*[filas];

    // Se crea un arreglo para cada fila
    for (int i = 0; i < filas; ++i) {
        matriz[i] = new int[columnas];
    }

    int numero = 2; 
    // Comenzamos con el primer número par, que es 2
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            matriz[i][j] = numero;
            numero += 2; 
            // Incrementamos el número por 2 para obtener el siguiente número par
        }
    }

    std::cout << "Matriz generada:\n";
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            std::cout << matriz[i][j] << '\t';
        }
        std::cout << '\n';
    }

    // Se libera la memoria y así se pueden ingresar nuevos datos después
    for (int i = 0; i < filas; ++i) {
        delete[] matriz[i];
    }

    // Se liberar la memoria del arreglo de filas igualmente
    delete[] matriz;

    return 0;
}