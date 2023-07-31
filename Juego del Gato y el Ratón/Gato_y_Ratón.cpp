#include <iostream>

using namespace std;

char gato[3][3];
bool bandera = true;

void imprimirgato();
void cambiarturno(char & t);
void introduce(char t, char orden);
short evalua(char t);

int main(){
    //mando llamar al primer metodo.
    imprimirgato();
//necesitamos saber turno.
    char t = "X";
    char posicon;
//ciclo de tirada
    while(bandera==true){
        cout<<"Es El Turno de : "<<t<<"Introduzca posicion"<<endl;
        cin>>posicion;

        posicion = toupper(posicion);
        introduce(t, posicion);
        //como vamos en el marcador
        evalua(t);
        //cambiar el turno
        cambiarturno(t);
        //imprimir gato
        imprimirgato();
    }

}

void imprimirgato(){
    cout<<"\n ++++++ GATO ++++++ \n";
    cout<<"\t"<<gato[0][0]<<" | "<<gato[0][1]<<" | "<<gato[0][2]<<"         a | b | c"<<endl;
    cout<<"\t <----------------"<<"\n";
    cout<<"\t"<<gato[1][10]<<" | "<<gato[1][1]<<" | "<<gato[1][2]<<"        d | e | f"<<endl;
    cout<<"\t <----------------"<<"\n";
    cout<<"\t"<<gato[2][0]<<" | "<<gato[2][1]<<" | "<<gato[2][2]<<"          g | h | i"<<endl;
    cout<<"\t <----------------"<<"\n";
}

void introduce(char t, char orden){
    swicht(orden){
        case "A":
                if(gato[0][0]!="X" && gato[0][0]!="O"){
                    gato[0][0] = t;
                    //cambiamos turno 
                    cambiarturno(t);
                }
                else{
                    cout<<"\n Posicion ocupada \n";
                }
                break;
         case "B":
                if(gato[0][1]!="X" && gato[0][1]!="O"){
                    gato[0][1] = t;
                    //cambiamos turno 
                    cambiarturno(t);
                }
                else{
                    cout<<"\n Posicion ocupada \n";
                }
                break;
        case "C":
                if(gato[0][2]!="X" && gato[0][2]!="O"){
                    gato[0][2] = t;
                    //cambiamos turno 
                    cambiarturno(t);
                }
                else{
                    cout<<"\n Posicion ocupada \n";
                }
                break;
        case "D":
                if(gato[1][0]!="X" && gato[1][0]!="O"){
                    gato[1][0] = t;
                    //cambiamos turno 
                    cambiarturno(t);
                }
                else{
                    cout<<"\n Posicion ocupada \n";
                }
                break;
        case "E":
                if(gato[1][1]!="X" && gato[1][1]!="O"){
                    gato[1][1] = t;
                    //cambiamos turno 
                    cambiarturno(t);
                }
                else{
                    cout<<"\n Posicion ocupada \n";
                }
                break;
        case "F":
                if(gato[1][2]!="X" && gato[1][2]!="O"){
                    gato[1][2] = t;
                    //cambiamos turno 
                    cambiarturno(t);
                }
                else{
                    cout<<"\n Posicion ocupada \n";
                }
                break;
        case "G":
                if(gato[2][0]!="X" && gato[2][0]!="O"){
                    gato[2][0] = t;
                    //cambiamos turno 
                    cambiarturno(t);
                }
                else{
                    cout<<"\n Posicion ocupada \n";
                }
                break;
        case "H":
                if(gato[2][1]!="X" && gato[2][1]!="O"){
                    gato[2][1] = t;
                    //cambiamos turno 
                    cambiarturno(t);
                }
                else{
                    cout<<"\n Posicion ocupada \n";
                }
                break;
        case "I":
                if(gato[2][2]!="X" && gato[2][2]!="O"){
                    gato[2][2] = t;
                    //cambiamos turno 
                    cambiarturno(t);
                }
                else{
                    cout<<"\n Posicion ocupada \n";
                }
                break; 
        default :
        cout<<"\n Introduzca una Posicion Valida \n";                       
    }
}

void cambiarturno(char & t){
    if(t=="X"){
        t = "O";
    }else{
        t = "X";
    }
    cout<<t;
}