#include <iostream>
#include <conio.h>

using namespace std;

int main(){

    float a[3],b[3],c[3],d[3],r1=0,r2=0,r3=0,r4=0,r5=0,r6=0,r7=0,r8=0,r9=0,r10=0,r11=0,r12=0;
    int i,n;

    cout<<"Calculadora de productos de vectores feos"<<endl;
    cout<<"Ingrese el tamaño del primer Vector a modo de [x] [x] [x]: "<<endl;
    cin>>a[0]>>a[1]>>a[2];
    cout<<"Ingrese el tamaño del segundo Vector a modo de [x] [x] [X]: "<<endl;
    cin>>b[0]>>b[1]>>b[2];

    do{
    cout<<"¿En que formato será el resultado?"<<endl;
    cout<<"Producto Punto: Introduzca (1)"<<endl;
    cout<<"Producto Cruz: Introduzca (2)"<<endl;
    cout<<"Salir (3)";
    cin>>n;

    if ( n==1 ){
    for(i=0 ; i<3 ; i++){

        r1 = a[0] * b[0];
        r2 = a[0] * b[1];
        r3 = a[0] * b[2];
        r4 = a[1] * b[0];
        r5 = a[1] * b[1];
        r6 = a[1] * b[2];
        r7 = a[2] * b[0];
        r8 = a[2] * b[1];
        r9 = a[2] * b[2];
        }
        
        cout<<"\nEl producto punto puntito es: "<<endl;
        cout<< "\n "<<r1<< " "<<r2<< " "<<r3<<endl;
        cout<< " "<<r4<< " "<<r5<< " "<<r6<<endl;
        cout<< " "<<r7<< " "<<r8<< " "<<r9<<endl;
    }
    
    else if ( n==2 ) {

        for( i=0 ; i<3 ; i++){

            r1 = a[0] * b[0];
            r2 = a[0] * b[1];
            r3 = a[0] * b[2];
            r4 = a[1] * b[0];
            r5 = a[1] * b[1];
            r6 = a[1] * b[2];
            r7 = a[2] * b[0];
            r8 = a[2] * b[1];
            r9 = a[2] * b[2];

            r10 = r1 + r2 + r3;
            r11 = r4 + r5 + r6;
            r12 = r7 + r8 + r8;

        }

        cout<<"\nEl producto cruz cruzado es: "<<r10<< " "<<r11<< " "<<r12<<endl;

    }
    }
    while(n == 3);

    return 0;
}