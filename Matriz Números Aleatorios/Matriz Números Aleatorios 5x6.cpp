#include <iostream>
#include <random>

using namespace std;

int main() {
    // Crear una semilla de generador de números aleatorios
    std::random_device rd;
    std::mt19937 gen(rd());
    
    // Definir la distribución de números aleatorios (entre 0 y 100 en este caso)
    std::uniform_int_distribution<> dis(0, 100);
    
    // Crear la matriz de 5x6 e inicializarla con números aleatorios
    int matriz[5][6];
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 6; ++j) {
            matriz[i][j] = dis(gen);
        }
    }
    
    // Imprimir la matriz generada
    std::cout << "Matriz generada:\n";
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 6; ++j) {
            std::cout << matriz[i][j] << '\t';
        }
        std::cout << '\n';
    }
    
    return 0;
}
