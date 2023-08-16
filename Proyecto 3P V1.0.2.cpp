#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <locale.h>
#include <conio.h>

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
  int notas1p;
  int notas2p;
  int nrc;
};

//nos permite ingresar el nrc y las notas de calculo
struct Calculo{
  int notas1p;
  int notas2p;
  int nrc;
};

//nos permite ingresar el nrc y las notas de biologia
struct Biologia{
  int notas1p;
  int notas2p;
  int nrc;
};

//nos permite ingresar el nrc y las notas de programacion
struct Progra{
  int notas1p;
  int notas2p;
  int nrc;
};

//nos permite ingresar el nrc y las notas de quimica
struct Quimica{
  int notas1p;
  int notas2p;
  int nrc;
};

//nos permite ingresar el nrc y las notas de metodologia de la investigacion
struct Metodo{
  int notas1p;
  int notas2p;
  int nrc;
};


struct Promedios{
  Algebra algebra;
  Calculo calculo;
  Biologia biologia;
  Progra progra;
  Quimica quimica;
  Metodo metodo;
};

struct TituloP{
  char profesioncarrera[20];
  char niveleducacion;//poner menu de opciones (maestría, licenciatura, doctorado)
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

void ingresarDatos(struct DatosGen *datosgen, int j){

  printf("Ingreso de datos del estudiante %d:\n",j);
  
  printf("Nombres:\n");
  fflush(stdin);
  gets(datosgen->estudiante.nombres);

  printf("Apellidos:\n");
  fflush(stdin);
  gets(datosgen->estudiante.apellidos);

  printf("Cédula:\n");
  fflush(stdin);
  scanf("%d", &datosgen->estudiante.cedula);

  printf("Fecha de nacimiento (año/mes/día):\n");
  fflush(stdin);
  scanf("%d %d %d",&datosgen->estudiante.fnacimiento.anio, &datosgen->estudiante.fnacimiento.mes, &datosgen->estudiante.fnacimiento.dia);

  printf("Dirección:\n");
  fflush(stdin);
  gets(datosgen->estudiante.direccion);

  printf("Telefono:\n");
  fflush(stdin);
  scanf("%d", &datosgen->estudiante.telefono);
  
}
//------------MENU TECLADO

void mostrarMenu(int opcionActual){
	printf("\t SISTEMA ESCOLASTICO\n\n");	
	for (int i=1; i<=31; i++){
		if(i==opcionActual){
			cout<<ANSI_BACKGROUND_BLUE;
		}
		else{
			cout<<ANSI_BACKGROUND_RESET;
		}
		switch(i){
			
		case 1:
			cout<<"ESTUDIANTE"<<endl;
			break;
		case 2:
			cout<<"DOCENTE"<<endl;
			break;
		case 3:
			cout<<"INGRESAR NUEVO MIEMBRO"<<endl;
			break;
		case 4:
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
			cout<<"VER INFORMACIÓN DEL ESTUDIANTE"<<endl;
			break;
		case 2:
			cout<<"NOTAS"<<endl;
			break;
		case 3:
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
						cout<< "\t VER INFORMACIÓN DEL ESTUDIANTE" << endl;
						printf("ingresar la funcion para mostrar la información");
					break;
					}
					case 2: {
						cout<< "\t VER NOTAS" << endl;
						printf("ingresar la funcion para mostrar NOTAS");
                		
                	break;
            		}
					case 3:
						cout<< "\t SALIENDO DEL PROGRAMA" << endl;
						printf("AYUDA ACORREGIR ESTO MAMAHUEVO");
					return 0;
				}
				_getch();
				regresarMenu();
				break;
		}
	}
}

void mostrarMenuDocente(int opcionActual){
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
			cout<<"VER INFORMACIÓN DEL DOCENTE"<<endl;
			break;
		case 2:
			cout<<"INGRESAR NOTAS"<<endl;
			break;
		case 3:
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
						cout<< "\t INFO DEL PROFE" << endl;
						printf("ingresar la funcion para mostrar la información");
					break;
					}
					case 2: {
						cout<< "\t MODIFICAR NOTAS NOTAS" << endl;
						printf("ingresar la funcion para mostrar NOTAS");
                		
                	break;
            		}
					case 3:
						cout<< "\t SALIENDO DEL PROGRAMA" << endl; 
						printf("AYUDA ACORREGIR ESTO MAMAHUEVO");
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
				opcionActual = (opcionActual >1)? opcionActual - 1:4;
				break;
			case 80: //pa abajo
				opcionActual = (opcionActual <4)? opcionActual + 1:1;
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
						cout<< "INGRESAR NUEVO MIEMBRO" << endl;
						printf("Ingrese la cantidad de personas a ingresar\n");
							int n;
						  scanf("%d",&n);
						
						  struct DatosGen datosgen[n];
						  
						  for(int i=0; i<n; i++){
						    ingresarDatos(&datosgen[n], i+1);
						  }
						  return 0; 
					break;
					}
					
					case 4:
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
	operarMenu();
	return 0;
}
