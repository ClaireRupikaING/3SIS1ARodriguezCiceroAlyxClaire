#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <locale>


using namespace std;

struct Alumno {
    string nombre;
    int edad;
    string plantel;
    string numeroCuenta;
    string asignacionExtraordinario;
    double calificacionPromedio;
};

void inscripcion(Alumno& alumno);
void generarNumeroCuenta(Alumno& alumno);
void entregaComprobante(const Alumno& alumno);
void consultarAsignacion(const Alumno& alumno);
void obtenerCalificacionPromedio(Alumno& alumno);
void imprimirResultados(const Alumno& alumno);

int main() {
    setlocale(LC_ALL, "");  // Establecer la cosa de lenguaje según la configuración regional del sistema
    //Ahora si puedo imprimmir en espanish
    Alumno alumno;

    inscripcion(alumno);
    generarNumeroCuenta(alumno);
    entregaComprobante(alumno);
    consultarAsignacion(alumno);
    obtenerCalificacionPromedio(alumno);
    imprimirResultados(alumno);

    return 0;
}

void inscripcion(Alumno& alumno) {
    cout << "-----Sistema De Extraordinarios de la UTC-----" << endl;
    cout << "Inscripción de Extraordinarios" << endl;
    cout << "Ingrese su nombre: " << endl;
    getline(cin, alumno.nombre);

    cout << "Ingrese su edad: " << endl;
    cin >> alumno.edad;
    cin.ignore();

    cout << "Ingrese su plantel: " << endl;
    getline(cin, alumno.plantel);

    cout << "Inscripción exitosa, dios te bendiga." << endl;
}

void generarNumeroCuenta(Alumno& alumno) {
    srand(time(0));  
    //Se generan números aleatorios en esta cosa para disque dar un num. de cuenta

    int numeroAleatorio = rand() % 10000 + 1;
    alumno.numeroCuenta = "GX-" + to_string(numeroAleatorio);
    //Obvio no dejo pasar la oportunidad de agregar una referencia a F-Zero GX XD

    cout << "Tu número de cuenta asignado es: " << alumno.numeroCuenta << endl;
}

void entregaComprobante(const Alumno& alumno) {
    cout << "-----Entrega de Comprobante-----" << endl;
    cout << "---Favor de guardarlo en un lugar seguro---" << endl;
    cout << "Se imprimió el comprobante del alumno con número de cuenta: " << alumno.numeroCuenta << endl;
}

void consultarAsignacion(const Alumno& alumno) {
    cout << "-----Consultar Asignación del Extraordinario-----" << endl;
    srand(time(0));  // Inicializar generador de números aleatorios

    // Generar respuesta aleatoria (Sí o No)
    int respuestaAleatoria = rand() % 2;
    string respuesta = (respuestaAleatoria == 0) ? "No" : "Sí";

    cout << "La asignación del extraordinario para el alumno con número de cuenta " << alumno.numeroCuenta
         << " es: " << respuesta << endl;
}

void obtenerCalificacionPromedio(Alumno& alumno) {
    cout << "-----Obtener Calificación-----" << endl;
    srand(time(0));  // Inicializar generador de números aleatorios

    // Generar calificación promedio aleatoria entre 0 y 100
    alumno.calificacionPromedio = rand() % 101;

    cout << "La calificación del alumno con número de cuenta " << alumno.numeroCuenta
         << " es: " << alumno.calificacionPromedio << endl;
         if ( alumno.calificacionPromedio <= 60 ){
            cout << "¿En serio? Lo hiciste a propósito ¿no?" << endl;
        }
        else if (alumno.calificacionPromedio >= 60 ){
            cout << "Señor me has mirado a los ojos..." << endl;
        }
}
void imprimirResultados(const Alumno& alumno) {
    cout << "------Resultados Generales------" << endl;
    cout << "Nombre: " << alumno.nombre << endl;
    cout << "Edad: " << alumno.edad << endl;
    cout << "Plantel: " << alumno.plantel << endl;
    cout << "Número de Cuenta: " << alumno.numeroCuenta << endl;
    cout << "Asignación Extraordinario: " << alumno.asignacionExtraordinario << endl;
    cout << "Calificación Promedio: " << alumno.calificacionPromedio << endl;

    cout << "Datos enviados a coordinación" << endl;
    cout << "-----Créditos por si acaso-----" << endl;
    cout << "--------Alyx Claire--------" << endl;
}
