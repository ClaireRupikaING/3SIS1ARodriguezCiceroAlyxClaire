/*
Funciones

Las funciones son invocadas desde otras funciones con excepción de una funcion global

main()

3 características de una función

definicion
declaracion
llamada

tipo nombre_funcion (tipo argumentio1, tipo argumento 2, tipo argumento n){
    sentencias
    return expresion
}

ejemplo:
double calcula_media  (double num1, double num2){
    double media;
    media = (num1 + num2)/2;
    return media;
}




#include <iostream>

using namespace std;

//función

//double calcula_media(double, double); 

//declaración


double calcula_media  (double numero1, double numero2){
    double media;
    media = (numero1 + numero2)/2;
    return media;
}

//^^^^Esto es DECLARAR E INVOCAR

int main(){
    double numero1, numero2;
    cout << "Introduzca el primer numerito\n";
    cin >> numero1;
    cout << "Introduzca el segundo numerito\n";
    cin >> numero2;

    //^^^^invocación como en Yu Gi Oh ;3

    double resultado = calcula_media(numero1, numero2);
    cout << "La media de " <<numero1<< " y " << numero2 << " es " << resultado << ". \n ";

}


//funciones void

#include <iostream>

using namespace std;

void imprime_cadena(string cadena){
    cout << cadena;
    //Si se pone endl entonces se salta un espacio y la cadena sale 2 veces
}

int main(){
    string cadena = "Holiii";
    imprime_cadena(cadena);
    imprime_cadena(" mundito\n");

}
*/

//funciones sin argumentos

#include <iostream>

using namespace std;

void imprime_mensaje(){
    cout << "Este programita es neko kawaii desu ne equisde";
}

int main(){
    //string cadena = "Huye de la vida";
    imprime_mensaje();
}