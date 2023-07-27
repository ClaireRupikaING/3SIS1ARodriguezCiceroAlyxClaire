#include <iostream>
#include <string>

using namespace std;

int main (){
    int *z = new int (5);
    delete z;
    cout << z << endl;
    //si se imprime solo z se muestra el sector de la memoria donde estaba guardado
    //por otra parte si se apunta con * se muestra el dato asignado
    return 0;
}