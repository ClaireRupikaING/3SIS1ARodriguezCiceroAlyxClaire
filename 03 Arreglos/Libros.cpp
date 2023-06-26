#include <iostream>

#include <string>

using namespace std;

int main(){
	string titulos[5];
	string autores[5];
	
	cout<<"Por favor ingrese la sig. información";
	
	for(int i=0; i < 5 ; i++){
		cout<<"\n Datos del libro : "<< i + 1 <<" \n";
		cout<<"Título: ";
		//cin>>titulos[i]; esto está mal no sé por qué
		getline(cin, titulos[i]);
		cout<<"Autor: ";
		//cin>>autores[i]; esto también
		getline(cin, autores[i]);
		//Vivaaaaa si me salió
}
}
