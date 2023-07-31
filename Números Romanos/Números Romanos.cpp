#include <iostream>
#include <string>

std::string intToRoman(int num) {
    if (num <= 0 || num > 3999) {
        return "Error: El número debe estar entre 1 y 3999.";
    }

    std::string result = "";

    // Arrays para almacenar los símbolos y sus valores respectivos en el sistema romano
    const int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    const std::string symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    // Recorremos los valores y restamos su valor al número original mientras construimos la representación romana
    for (int i = 0; i < 13; ++i) {
        while (num >= values[i]) {
            num -= values[i];
            result += symbols[i];
        }
    }

    return result;
}

int main() {
    int numero;
    std::cout << "Introduce un número (1-3999): ";
    std::cin >> numero;

    std::string romano = intToRoman(numero);
    std::cout << "El número " << numero << " en romano es: " << romano << std::endl;

    return 0;
}
