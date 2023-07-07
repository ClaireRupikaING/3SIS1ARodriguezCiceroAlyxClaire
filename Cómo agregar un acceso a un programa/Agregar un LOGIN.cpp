#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <iostream>
#define N 50

using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);


//PROTOTIPOS DE LAS FUNCIONES
void dibujarCuadro(int x1,int y1,int x2,int y2);
void gotoxy(int x,int y);
void CursorOn(bool visible, DWORD size);
void CursorOff();
void limpia();
void cambio(char a[]);
void login();
void leerPasw(char frase[]);
void menu();


//FUNCION PRINCIPAL MAIN: Aqu� dentro de main llamamos a las dem�s funciones.
int main(){
	system("COLOR F0");
	dibujarCuadro(0,0,78,24);//Cuadro grande
	dibujarCuadro(1,1,77,3);//Cuadro del titulo
	CursorOff();
	gotoxy(16,2); printf("Matriz Con Numeros Pares");  //Cambiar t�tulo del programa
	login();
	
	getch();
	return 0;
}


//FUNCION LOGIN: Se crean 2 variables, de usuario y contrase�a y se comparan para mostrar sus respectivos mensajes
void login(){
	CursorOn(1,10);
	char user[] = "Claire Rupika"; //Modificar colocando el usuario que deseean
	char contra[] = "Ninendo64"; //Modificar contrase�a que deseen
	char user2[20],contra2[20];
	int x=1000;
	int f=41;

	gotoxy(35,6); printf("LOGIN");
	dibujarCuadro(18,9,60,15);
	gotoxy(23,11); printf("Usuario: ");
	fgets(user2,20,stdin);
	cambio(user2);
	
	gotoxy(23,13); printf("Clave:   ");
	leerPasw(contra2);
	
	CursorOff();
	
	for(int i = 0; i < 3; i++ ){
		gotoxy(33,19); printf("Cargando");
		gotoxy(f,19); printf(".");
		f+=1;
		Sleep(x);
	}
	
	
	f=51;
	
	if ((strcmp(user2,user)) == 0 && (strcmp(contra2,contra)) == 0){
		gotoxy(30,19); printf("                                     ");
		for(int i = 0; i < 3; i++ ){
			gotoxy(30,19); printf("Accediendo al Sistema");
			gotoxy(f,19); printf(".");
			f+=1;
			Sleep(x);
		}
		limpia();	
		menu();
	} 
	
	
	else{
		gotoxy(35,19); printf("                                     ");
		gotoxy(30,19); printf("Jamás habias estado tan equivocado.");
		gotoxy(30,19); printf("Datos incorrectos");
		gotoxy(18,20); printf("Presione una tecla para volver a ingresar..");
		getch();
		limpia();
		login();
	}
}


//FUNCION LEER CONTRASE�A: proceso que permite mostrar asteriscos en la contrase�a
void leerPasw(char frase[])
{
    int i=0;
    cout.flush();
	int aux=0;
	
    do
    {
        frase[i] = (unsigned char)getch();

		
        if(frase[i]!=8)  // no es retroceso
        {
            cout << '*';  // muestra por pantalla
            i++;
            
            if (frase[i-1]==13){
        		printf("\b \b");
			}
        }
        
        
        
        else if(i>0)    // es retroceso y hay caracteres
        {
            cout << (char)8 << (char)32 << (char)8;
            i--;  //el caracter a borrar e el backspace
        }
        
        
        cout.flush();

    }while(frase[i-1]!=13);  // si presiona ENTER

    frase[i-1] = 0;
}



//FUNCI�N CAMBIO: Cambia el caracter \n por \0
void cambio(char a[]){
	int aux;
	aux = strlen(a);
	a[aux-1] = '\0';
}

//ESTA FUNCION LA HICE DE PRUEBA SOLO PARA MOSTRAR MENSAJES, AQUI DEBEN COLOCAR EL PROGRAMA QUE USTEDES DESEAN
int matriz(){
	int filas, columnas;
    std::cout << "Ingrese el número de filas: ";
    std::cin >> filas;
    std::cout << "Ingrese el número de columnas: ";
    std::cin >> columnas;

    // Crear una memoria de los datos introducidos para que las variables sean fijas
    int** matriz = new int*[filas];

    // Se crea un arreglo para cada fila
    for (int i = 0; i < filas; ++i) {
        matriz[i] = new int[columnas];
    }

    int numero = 2; 
    // Comenzamos con el primer número par, que es 2
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            matriz[i][j] = numero;
            numero += 2; 
            // Incrementamos el número por 2 para obtener el siguiente número par
        }
    }

    std::cout << "Matriz generada:\n";
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            std::cout << matriz[i][j] << '\t';
        }
        std::cout << '\n';
    }

    // Se libera la memoria y así se pueden ingresar nuevos datos después
    for (int i = 0; i < filas; ++i) {
        delete[] matriz[i];
    }

    // Se liberar la memoria del arreglo de filas igualmente
    delete[] matriz;
	return 0;
}








//************************************FUNCIONES ADICIONALES************************************************************


//FUNCION GOTOXY: Permite posicionar en pantalla mediante coordenadas X/Y
void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }
 
 
 
//FUNCION DIBUJAR CUADRO
void dibujarCuadro(int x1,int y1,int x2,int y2)
{

    int i;
    for (i=x1;i<x2;i++)
    {
	gotoxy(i,y1);printf("�") ;//linea horizontal superior
	gotoxy(i,y2);printf("�") ;//linea horizontal inferior
    }

    for (i=y1;i<y2;i++)
    {
	gotoxy(x1,i);printf("�") ;//linea vertical izquierda
	gotoxy(x2,i);printf("�") ;//linea vertical derecha
    }
    gotoxy(x1,y1);printf("�");
    gotoxy(x1,y2);printf("�");
    gotoxy(x2,y1);printf("�");
    gotoxy(x2,y2);printf("�");
}

//FUNCION LIMPIAR PANTALLA
void limpia(){
	int i,j;
	for(i=5;i<=23;i++){
		for(j=3;j<=76;j++){
			gotoxy(j,i); printf(" ");}}
}

// FUNCION PARA OCULTAR EL CURSOR
void CursorOff(){
  CONSOLE_CURSOR_INFO cursor = {1, FALSE};
  SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor);
}



//FUNCION PARA APARECER EL CURSOR
void CursorOn(bool visible, DWORD size) // set bool visible = 0 - invisible, bool visible = 1 - visible
{
	if(size == 0)
	{
		size = 20;	// default cursor size Changing to numbers from 1 to 20, decreases cursor width
	}
	CONSOLE_CURSOR_INFO lpCursor;	
	lpCursor.bVisible = visible;
	lpCursor.dwSize = size;
	SetConsoleCursorInfo(console,&lpCursor);
}

/**********PARA M�S INFORMACI�N**************
YOUTUBE: PROGRAMADOR EC
WHATSAPP: +593960631156
CORREO: info@programadorec.com
*/
