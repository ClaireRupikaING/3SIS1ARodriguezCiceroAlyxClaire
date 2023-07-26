#include <iostream>
#include <string>

using namespace std;

void init(string contnombre[], string contper[], string contcel[], string contcasa[], string contofi[]);
void GuardarContacto(string contnombre[], string contper[], string contcel[], string contcasa[], string contofi[], int i);
void VerContacto(string contnombre[], string contper[], string contcel[], string contcasa[], string contofi[], int i);
void EliminarContacto(string contnombre[], string contper[], string contcel[], string contcasa[], string contofi[], int i);

int main() {
    string contnombre[10];
    string contper[10];
    string contcel[10];
    string contcasa[10];
    string contofi[10];
    int numer, i, k, j, da, co, ax, op;
    j = 0;
    k = 0;
    i = 0;
    op = 0;
    co = 0;

    init(contnombre, contper, contcel, contcasa, contofi);

    do {
        cout << "Agenda Telefonica Generica De Claire" << endl;
        cout << "Elija una Opcion" << endl;
        cout << "(1) Crear Contacto Generico" << endl;
        cout << "(2) Ver Contacto Registrado Generico" << endl;
        cout << "(3) Eliminar Un Contacto Generico (Por Numero)" << endl;
        cout << "(4) Salir" << endl;
        cin >> op;

        switch (op) {
            case 1:
                for (j = 0; j < 1; j++) {
                    if (contnombre[0] == "0") {
                        co = co + 1;
                        k = j;
                        j = 8;
                    }
                }
                if (i < 3 || co > 8) {
                    ax = i;
                    i = k;
                    GuardarContacto(contnombre, contper, contcel, contcasa, contofi, i);
                    co = 0;
                    i = ax;
                    i = i + 1;
                }
                break;
            case 2:
                VerContacto(contnombre, contper, contcel, contcasa, contofi, i);
                break;
            case 3:
                EliminarContacto(contnombre, contper, contcel, contcasa, contofi, i);
                break;
        }
    } while (op != 4);

    return 0;
}

void init(string contnombre[], string contper[], string contcel[], string contcasa[], string contofi[]) {
    for (int a = 0; a < 10; a++) {
        contnombre[a] = "0";
        contper[a] = "0";
        contcel[a] = "0";
        contcasa[a] = "0";
        contofi[a] = "0";
    }
}

void GuardarContacto(string contnombre[], string contper[], string contcel[], string contcasa[], string contofi[], int i) {;
    string numer;
    int co = 0;
    int val = 0;
    cout << "Ingrese el Nombre del Contacto a Guardar: ";
    cin >> contnombre[i];
    while (val == 0) {
        cout << "Ingrese el Numero de Telefono Personal: ";
        cin >> numer;
        cout << "Ingrese el Numero de Telefono Celular: ";
        cin >> numer;
        cout << "Ingrese el Numero de Telefono de Casa: ";
        cin >> numer;
        cout << "Ingrese el Numero de Telefono de Oficina: ";
        cin >> numer;

        if (numer.length() == 10) {
            contper[i] = numer;
            contcel[i] = numer;
            contcasa[i] = numer;
            contofi[i] = numer;
            val = 1;
        }
        else {
            cout << "Numero Tan Invalido Como Tus Sueños, Vuelva A Ingresar Un Numero No Mayor A 10 Digitos" << endl;
            val = 0;
            co = 0;
        }
    }
}

void VerContacto(string contnombre[], string contper[], string contcel[], string contcasa[], string contofi[], int i) {
    for (int j = 0; j < 10; j++) {
        if (contper[j] != "0") {
            cout << "Nombre: " << contnombre[j] << endl;
            cout << "Telefono Personal: " << contper[j] << endl;
            cout << "Telefono Celular: " << contcel[j] << endl;
            cout << "Telefono de Casa: " << contcasa[j] << endl;
            cout << "Telefono de Oficina: " << contofi[j] << endl;
        }
    }
}

void EliminarContacto(string contnombre[], string contper[], string contcel[], string contcasa[], string contofi[], int i) {
    string numer;
    cout << "Ingrese el Numero de Telefono del Contacto: ";
    cin >> numer;
    for (int j = 0; j < i; j++) {
        if (contper[j] == numer || contcel[j] == numer || contcasa[j] == numer || contofi[j] == numer) {
            contper[j] = "0";
            contcel[j] = "0";
            contcasa[j] = "0";
            contofi[j] = "0";
        }
    }
}