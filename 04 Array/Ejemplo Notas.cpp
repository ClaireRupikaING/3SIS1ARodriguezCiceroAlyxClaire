#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	float notas[20];
	int i = 0;
	float suma = 0;
	float media;
	
	for(i = 0; i <20; i++){
		cout<<endl<<"Alumno : "<<i+1<< "Nota Final : \n"<<endl;
		cin>>notas[i];
	}
	for(i = 0; i < 20;i++){
		suma = suma + notas[i];
	}
	media = suma / 20;
	cout<<fixed<<setprecision(2);
	cout<<endl<<"Notas Promedio del Curso : "<<media<<endl;
	cout<<"Alumnos Superiores al Promedio :\n";
	
	for(i = 0; i < 20; i++){
		if(notas[i] > media){
			cout<<"Id del Alumno : "<<i+1<<endl;
			cout<<"Nota Final: "<<notas[i]<<endl;
		}
	}
}