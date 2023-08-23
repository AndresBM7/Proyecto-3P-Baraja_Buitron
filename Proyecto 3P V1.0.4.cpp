#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <locale.h>
#include <conio.h>
#include <windows.h>

#define ANSI_BACKGROUND_BLUE "\033[42m"
#define ANSI_BACKGROUND_RESET "\033[0m"

using namespace std;

//estructura que nos permitira el ingreso de fecha de nacimiento
struct Fnacimiento{
  int anio;
  int mes;
  int dia;
};

//nos permite ingresar el nrc y las notas de algebra
struct Algebra{
  int notafinal;
  char nrc[5];
};

//nos permite ingresar el nrc y las notas de calculo
struct Calculo{
  int notafinal;
  char nrc[5];
};

//nos permite ingresar el nrc y las notas de biologia
struct Biologia{
  int notafinal;
  char nrc[5];
};

//nos permite ingresar el nrc y las notas de programacion
struct Progra{
  int notafinal;
  char nrc[5];
};

//nos permite ingresar el nrc y las notas de quimica
struct Quimica{
  int notafinal;
  char nrc[5];
};

//nos permite ingresar el nrc y las notas de metodologia de la investigacion
struct Metodo{
  int notafinal;
  char nrc[5];
};


struct Promedios{
  Algebra algebra;
  Calculo calculo;
  Biologia biologia;
  Progra progra;
  Quimica quimica;
  Metodo metodo;
};

struct TituloP {
    char profesioncarrera[20];
    char niveleducacion[20]; 
    int nregistro;
};

struct Estudiante{
  char nombres[25];
  char apellidos[25];
  int cedula;
  Fnacimiento fnacimiento;
  char direccion[30];
  int telefono;
  int id;
  char correo[30];
  Promedios promedios;
  
};

struct Docente{
  char nombre[25];
  char apellido[25];
  int cedula;
  Fnacimiento fnacimiento;
  char direccion[30];
  int telefono;
  char correo[20];
  TituloP titulo;
};

struct DatosGen{
  Estudiante estudiante;
  Docente docente;
  
};

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void lineasV(int c,int f){
	int i;
	for(i=1;i<f;i++){
		gotoxy(c,i);
		printf("%c",186);
	}
}

void lineasV2(int c,int f){
	int i;
	for(i=1;i<f;i++){
		gotoxy(c,i);
		printf("%c",176);
	}
}

void lineasV3(int c,int f){
	int i;
	for(i=1;i<f;i++){
		gotoxy(c,i);
		printf("%c",4);
	}
}

void lineasH(int c,int f){
	int i;
	for(i=1;i<c;i++){
		gotoxy(i,f);
		printf("%c",4);
	}
}

void lineasH2(int c,int f){
	int i;
	for(i=1;i<c;i++){
		gotoxy(i,f);
		printf("%c",207);
	}
}

void Caratula(){
	lineasV(1,24);
	lineasV(80,24);
	
	lineasV2(3, 24);
	lineasV2(78, 24);
	
	lineasV3(5, 24);
	lineasV3(76, 24);
	
	lineasH(80,1);
	lineasH(80,24);
	
	gotoxy(1,1);
	printf("%c",201);
	
	gotoxy(1,24);
	printf("%c",200);
	
	gotoxy(80, 1);
	printf("%c",187);
	
	gotoxy(80, 24);
	printf("%c",188);
	
	gotoxy(20, 4);
	printf("UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE");
	
	gotoxy(25, 6);
	printf("FUNDAMENTOS DE LA PROGRAMACION");
	
	gotoxy(30, 8);
	printf("%c %c %c %c %c %c %c %c %c %c %c",3,3,3,3,3,3,3,3,3,3,3,3);
	
	gotoxy(35, 9);
	printf("MECATRONICA");
	
	gotoxy(35, 11);
	printf("INTEGRANTES:");
	
	gotoxy(34, 12);
	printf("BARAJA MILENA");
	
	gotoxy(34, 13);
	printf("BUITR�N ANDR�S");
	
	gotoxy(23, 15);
	printf("DOCENTE: EDGAR FERNANDO SOLIS ACOSTA");

	gotoxy(36, 17);
	printf("NRC: 9890");
	
	gotoxy(30, 19);
	printf("%c %c %c %c %c %c %c %c %c %c %c",223,223, 223, 223, 223, 223, 223, 223,223, 223, 223, 223);
	
}

void ingresarDatosEst(struct DatosGen *datosgen, int j){

  printf("-------------------------------------------------------------------------\n\t\t   Ingreso de datos del estudiante %d:\n-------------------------------------------------------------------------\n",j);
  
  printf("Nombres:\n");
  fflush(stdin);
  gets(datosgen->estudiante.nombres);

  printf("\nApellidos:\n");
  fflush(stdin);
  gets(datosgen->estudiante.apellidos);

  printf("\nC�dula:\n");
  fflush(stdin);
  scanf("%d", &datosgen->estudiante.cedula);

  printf("\nFecha de nacimiento (a�o/mes/d�a):\n");
  fflush(stdin);
  scanf("%d %d %d",&datosgen->estudiante.fnacimiento.anio, &datosgen->estudiante.fnacimiento.mes, &datosgen->estudiante.fnacimiento.dia);

  printf("\nDirecci�n:\n");
  fflush(stdin);
  gets(datosgen->estudiante.direccion);

  printf("\nTelefono:\n");
  fflush(stdin);
  scanf("%d", &datosgen->estudiante.telefono);
  
  
  //ingreso de materias y nrc
  printf("\n-------------------------------------------------------------------------\n\t\t   Ingreso de promedios y NRC:\n-------------------------------------------------------------------------\n",j);
  
  printf("\nPromedio de �lgebra:\n");
  fflush(stdin);
  printf("-> ");
  scanf("%d", &datosgen->estudiante.promedios.algebra.notafinal);
  printf("NRC de �lgebra:\n");
  fflush(stdin);
  printf("-> ");
  gets(datosgen->estudiante.promedios.algebra.nrc);
  
  printf("\nPromedio de c�lculo:\n");
  fflush(stdin);
  printf("-> ");
  scanf("%d", &datosgen->estudiante.promedios.calculo.notafinal);
  printf("NRC de c�lculo:\n");
  fflush(stdin);
  printf("-> ");
  gets(datosgen->estudiante.promedios.calculo.nrc);
  
  printf("\nPromedio de biolog�a:\n");
  fflush(stdin);
  printf("-> ");
  scanf("%d", &datosgen->estudiante.promedios.biologia.notafinal);
  printf("NRC de biolog�a:\n");
  fflush(stdin);
  printf("-> ");
  gets(datosgen->estudiante.promedios.biologia.nrc);
  
  printf("\nPromedio de programaci�n:\n");
  fflush(stdin);
  printf("-> ");
  scanf("%d", &datosgen->estudiante.promedios.progra.notafinal);
  printf("NRC de programaci�n:\n");
  fflush(stdin);
  printf("-> ");
  gets(datosgen->estudiante.promedios.progra.nrc);
  
  printf("\nPromedio de qu�mica:\n");
  fflush(stdin);
  printf("-> ");
  scanf("%d", &datosgen->estudiante.promedios.quimica.notafinal);
  printf("NRC de qu�mica:\n");
  fflush(stdin);
  printf("-> ");
  gets(datosgen->estudiante.promedios.quimica.nrc);
  
  printf("\nPromedio de metodolog�a de la investigaci�n:\n");
  fflush(stdin);
  printf("-> ");
  scanf("%d", &datosgen->estudiante.promedios.metodo.notafinal);
  printf("NRC de metodolog�a de la investigaci�n:\n");
  fflush(stdin);
  printf("-> ");
  gets(datosgen->estudiante.promedios.metodo.nrc);
  
  //funcion para registrar estos datos en el archivo "ESTUDIANTES.txt"
  
  printf("\n Datos guardados!\nRegresando al men� principal, presione ""Esc"" dos veces...");  
}

void ingresarDatosDoc(struct DatosGen *datosgen, int j){

  printf("-------------------------------------------------------------------------\n\t\t   Ingreso de datos del docente %d:\n-------------------------------------------------------------------------\n",j);
  
  printf("Nombre:\n");
  fflush(stdin);
  gets(datosgen->docente.nombre);

  printf("\nApellido:\n");
  fflush(stdin);
  gets(datosgen->docente.apellido);

  printf("\nC�dula:\n");
  fflush(stdin);
  scanf("%d", &datosgen->docente.cedula);

  printf("\nFecha de nacimiento (a�o/mes/d�a):\n");
  fflush(stdin);
  scanf("%d %d %d",&datosgen->docente.fnacimiento.anio, &datosgen->docente.fnacimiento.mes, &datosgen->docente.fnacimiento.dia);

  printf("\nDirecci�n:\n");
  fflush(stdin);
  gets(datosgen->docente.direccion);

  printf("\nTelefono:\n");
  fflush(stdin);
  scanf("%d", &datosgen->docente.telefono);
  
  printf("\nCorreo:\n");		//mas adelante tenemos que hacer que se muestre un correo generado automaticamente con el nombre proporcionado
  fflush(stdin);
  gets(datosgen->docente.correo);
  
  printf("-------------------------------------------------------------------------\n\t\t   Formaci�n profesional del docente %d:\n-------------------------------------------------------------------------\n",j);
  
  printf("\nProfesi�n/carrera:\n");
  fflush(stdin);
  gets(datosgen->docente.titulo.profesioncarrera);

  printf("\nNivel de formaci�n:\n");
    printf("1. Tercer Nivel\n");
    printf("2. Posgrado\n");
    printf("3. Maestr�a\n");
    printf("4. Doctorado\n");
    int nivelEduc;
    do {
        printf("Ingrese la opci�n correspondiente: ");
        scanf("%d", &nivelEduc);

        switch (nivelEduc) {
            case 1:
                strcpy(datosgen->docente.titulo.niveleducacion, "Tercer Nivel");
                break;
            case 2:
                strcpy(datosgen->docente.titulo.niveleducacion, "Posgrado");
                break;
            case 3:
                strcpy(datosgen->docente.titulo.niveleducacion, "Maestr�a");
                break;
            case 4:
                strcpy(datosgen->docente.titulo.niveleducacion, "Doctorado");
                break;
            default:
                printf("Opci�n inv�lida, por favor ingrese nuevamente.\n");
        }
    } while (nivelEduc < 1 || nivelEduc > 4);
    
	  printf("\nNro. de registro del t�tulo:\n");
	  fflush(stdin);
	  scanf("%d", &datosgen->docente.titulo.nregistro);
  
  //funcion para registrar estos datos en el archivo "DOCENTES.txt"
  
  printf("\n Datos guardados!\nRegresando al men� principal, presione ""Esc"" dos veces...");  
}
//------------MENU TECLADO

void mostrarMenu(int opcionActual){
	lineasV(1,24);
	lineasV(80,24);
	
	lineasV2(3, 24);
	lineasV2(78, 24);
	
	lineasV3(5, 24);
	lineasV3(76, 24);
	
	lineasH(80,1);
	lineasH(80,24);
	
	gotoxy(20,3);
	printf("\t SISTEMA ESCOLASTICO\n\n");	
	for (int i=1; i<=5; i++){
		if(i==opcionActual){
			cout<<ANSI_BACKGROUND_BLUE;
		}
		else{
			cout<<ANSI_BACKGROUND_RESET;
		}
		switch(i){
			
		case 1:
			gotoxy(20, 5);
			cout<<"ESTUDIANTE"<<endl;
			break;
		case 2:
			gotoxy(20,6);
			cout<<"DOCENTE"<<endl;
			break;
		case 3:
			gotoxy(20,7);
			cout<<"INGRESAR ESTUDIANTES"<<endl;
			break;
		case 4:
			gotoxy(20,8);
			cout<<"INGRESAR DOCENTES"<<endl;
			break;
		case 5:
			gotoxy(20,9);
			cout<<"SALIR"<<ANSI_BACKGROUND_RESET<<endl;
			break;
		}
	}
}

void regresarMenu (){
	while(1){
		if(_kbhit()){ //detecta presion de teclas
			int tecla=_getch(); //nos da la tecla presionada
			if(tecla == 27){
				break;
			}
		}
	}
}

void mostrarMenuEstudiante(int opcionActual){
	lineasV(1,24);
	lineasV(80,24);
	
	lineasV2(3, 24);
	lineasV2(78, 24);
	
	lineasV3(5, 24);
	lineasV3(76, 24);
	
	lineasH(80,1);
	lineasH(80,24);
	
	gotoxy(20,3);
	printf("\t ESTUDIANTE\n\n");	
	for (int i=1; i<=3; i++){
		if(i==opcionActual){
			cout<<ANSI_BACKGROUND_BLUE;
		}
		else{
			cout<<ANSI_BACKGROUND_RESET;
		}
		switch(i){
			
		case 1:
			gotoxy(20,5);
			cout<<"VER INFORMACI�N DEL ESTUDIANTE"<<endl;
			break;
		case 2:
			gotoxy(20,6);
			cout<<"NOTAS"<<endl;
			break;
		case 3:
			gotoxy(20,7);
			cout<<"SALIR"<<ANSI_BACKGROUND_RESET<<endl;
			break;
		}
			
	}
}

int menuEstudiante(){
	int opcionActual=1;

	while(1){
		system("cls");
		mostrarMenuEstudiante(opcionActual);
		char tecla = _getch();
		switch(tecla){
			case 72: //tecla pa arriba
				opcionActual = (opcionActual >1)? opcionActual - 1:3;
				break;
			case 80: //pa abajo
				opcionActual = (opcionActual <3)? opcionActual + 1:1;
				break;
			case 13:
				system("cls");
				
				switch(opcionActual){
					case 1: {
						cout<< "\t VER INFORMACI�N DEL ESTUDIANTE" << endl;
						//"ingresar la funcion para mostrar la informaci�n
					break;
					}
					case 2: {
						cout<< "\t VER NOTAS" << endl;
						//"ingresar la funcion para mostrar NOTAS
                		
                	break;
            		}
					case 3:
						cout<< "\t Regresando al menu principal, presione ""Esc"" dos veces..." << endl; 
					return 0;
				}
				_getch();
				regresarMenu();
				break;
		}
	}
}

void mostrarMenuDocente(int opcionActual){
	lineasV(1,24);
	lineasV(80,24);
	
	lineasV2(3, 24);
	lineasV2(78, 24);
	
	lineasV3(5, 24);
	lineasV3(76, 24);
	
	lineasH(80,1);
	lineasH(80,24);
	
	gotoxy(20,3);
	printf("\t DOCENTE\n\n");	
	for (int i=1; i<=3; i++){
		if(i==opcionActual){
			cout<<ANSI_BACKGROUND_BLUE;
		}
		else{
			cout<<ANSI_BACKGROUND_RESET;
		}
		switch(i){
			
		case 1:
			gotoxy(20,5);
			cout<<"VER INFORMACI�N DEL DOCENTE"<<endl;
			break;
		case 2:
			gotoxy(20,6);
			cout<<"INGRESAR NOTAS"<<endl;
			break;
		case 3:
			gotoxy(20,7);
			cout<<"SALIR"<<ANSI_BACKGROUND_RESET<<endl;
			break;
		}
			
	}
}

int menuDocente(){
	int opcionActual=1;

	while(1){
		system("cls");
		mostrarMenuDocente(opcionActual);
		char tecla = _getch();
		switch(tecla){
			case 72: //tecla pa arriba
				opcionActual = (opcionActual >1)? opcionActual - 1:3;
				break;
			case 80: //pa abajo
				opcionActual = (opcionActual <3)? opcionActual + 1:1;
				break;
			case 13:
				system("cls");
				
				switch(opcionActual){
					case 1: {
						lineasV(1,24);
						lineasV(80,24);
						
						lineasV2(3, 24);
						lineasV2(78, 24);
						
						lineasV3(5, 24);
						lineasV3(76, 24);
						
						lineasH(80,1);
						lineasH(80,24);
						
						gotoxy(20,3);
						cout<< "\t INFO DEL PROFE" << endl;
						gotoxy(10, 5);
						printf("ingresar la funcion para mostrar la informaci�n");
					break;
					}
					case 2: {
						cout<< "\t MODIFICAR NOTAS NOTAS" << endl;
						printf("ingresar la funcion para mostrar NOTAS");
                		
                	break;
            		}
					case 3:
						cout<< "\t Regresando al menu principal, presione ""Esc"" dos veces..." << endl; 
					return 0;
				}
				_getch();
				regresarMenu();
				break;
		}
	}
}

int operarMenu(){
int opcionActual=1;

	while(1){
		system("cls");
		mostrarMenu(opcionActual);
		char tecla = _getch();
		switch(tecla){
			case 72: //tecla pa arriba
				opcionActual = (opcionActual >1)? opcionActual - 1:5;
				break;
			case 80: //pa abajo
				opcionActual = (opcionActual <5)? opcionActual + 1:1;
				break;
			case 13:
				system("cls");
				
				switch(opcionActual){
					case 1: {
						cout<< "\t ESTUDIANTE" << endl;
						menuEstudiante();
					break;
					}
					case 2: {
						cout<< "\t DOCENTE" << endl;
						menuDocente();
                		
                	break;
            		}
					case 3: {
						cout<< "INGRESAR NUEVO ESTUDIANTE" << endl;
						printf("Ingrese la cantidad de estudiantes a ingresar, ingrese ""0"" para cancelar:\n");
							int n;
						  	scanf("%d",&n);
						  
						if(n!=0){
							struct DatosGen datosgen[n];
						  
						  	for(int i=0; i<n; i++){
						    ingresarDatosEst(&datosgen[n], i+1);
							}
						}
						else{
							cout<< "\t Regresando al menu principal, presione ""Esc"" dos veces..." << endl; 
						}
					break;
					}
					
					case 4: {
						cout<< "INGRESAR NUEVO ESTUDIANTE" << endl;
						printf("Ingrese la cantidad de estudiantes a ingresar, ingrese ""0"" para cancelar:\n");
							int n;
						  	scanf("%d",&n);
						  
						if(n!=0){
							struct DatosGen datosgen[n];
						  
						  	for(int i=0; i<n; i++){
						    ingresarDatosDoc(&datosgen[n], i+1);
							}
						}
						else{
							cout<< "\t Regresando al menu principal, presione ""Esc"" dos veces..." << endl; 
						}
					break;
					}
					
					case 5:
						cout<< "\t SALIENDO DEL PROGRAMA" << endl;
					return 0;
				}
				_getch();
				regresarMenu();
				break;
		}
	}
	return 0;
}

int main(){
	setlocale(LC_ALL,("spanish"));
	
	Caratula();
	getch();
	operarMenu();
	
	getch();
	
	return 0;
}

