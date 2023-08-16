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

void ingresarDatosEst(struct DatosGen *datosgen, int j){

  printf("-------------------------------------------------------------------------\n\t\t   Ingreso de datos del estudiante %d:\n-------------------------------------------------------------------------\n",j);
  
  printf("Nombres:\n");
  fflush(stdin);
  gets(datosgen->estudiante.nombres);

  printf("\nApellidos:\n");
  fflush(stdin);
  gets(datosgen->estudiante.apellidos);

  printf("\nCédula:\n");
  fflush(stdin);
  scanf("%d", &datosgen->estudiante.cedula);

  printf("\nFecha de nacimiento (año/mes/día):\n");
  fflush(stdin);
  scanf("%d %d %d",&datosgen->estudiante.fnacimiento.anio, &datosgen->estudiante.fnacimiento.mes, &datosgen->estudiante.fnacimiento.dia);

  printf("\nDirección:\n");
  fflush(stdin);
  gets(datosgen->estudiante.direccion);

  printf("\nTelefono:\n");
  fflush(stdin);
  scanf("%d", &datosgen->estudiante.telefono);
  
  printf("\nID:\n");
  fflush(stdin);
  scanf("%d", &datosgen->estudiante.id);
  
  printf("\nCorreo:\n");		//mas adelante tenemos que hacer que se muestre un correo generado automaticamente con el nombre proporcionado
  fflush(stdin);
  gets(datosgen->estudiante.correo);
  
  
  //ingreso de materias y nrc
  printf("\n-------------------------------------------------------------------------\n\t\t   Ingreso de promedios y NRC:\n-------------------------------------------------------------------------\n",j);
  
  printf("\nPromedio de álgebra:\n");
  fflush(stdin);
  printf("-> ");
  scanf("%d", &datosgen->estudiante.promedios.algebra.notafinal);
  printf("NRC de álgebra:\n");
  fflush(stdin);
  printf("-> ");
  gets(datosgen->estudiante.promedios.algebra.nrc);
  
  printf("\nPromedio de cálculo:\n");
  fflush(stdin);
  printf("-> ");
  scanf("%d", &datosgen->estudiante.promedios.calculo.notafinal);
  printf("NRC de cálculo:\n");
  fflush(stdin);
  printf("-> ");
  gets(datosgen->estudiante.promedios.calculo.nrc);
  
  printf("\nPromedio de biología:\n");
  fflush(stdin);
  printf("-> ");
  scanf("%d", &datosgen->estudiante.promedios.biologia.notafinal);
  printf("NRC de biología:\n");
  fflush(stdin);
  printf("-> ");
  gets(datosgen->estudiante.promedios.biologia.nrc);
  
  printf("\nPromedio de programación:\n");
  fflush(stdin);
  printf("-> ");
  scanf("%d", &datosgen->estudiante.promedios.progra.notafinal);
  printf("NRC de programación:\n");
  fflush(stdin);
  printf("-> ");
  gets(datosgen->estudiante.promedios.progra.nrc);
  
  printf("\nPromedio de química:\n");
  fflush(stdin);
  printf("-> ");
  scanf("%d", &datosgen->estudiante.promedios.quimica.notafinal);
  printf("NRC de química:\n");
  fflush(stdin);
  printf("-> ");
  gets(datosgen->estudiante.promedios.quimica.nrc);
  
  printf("\nPromedio de metodología de la investigación:\n");
  fflush(stdin);
  printf("-> ");
  scanf("%d", &datosgen->estudiante.promedios.metodo.notafinal);
  printf("NRC de metodología de la investigación:\n");
  fflush(stdin);
  printf("-> ");
  gets(datosgen->estudiante.promedios.metodo.nrc);
  
  //funcion para registrar estos datos en el archivo "ESTUDIANTES.txt"
  
  printf("\t Regresando al menú principal, presione ""Esc"" dos veces...");  
}

void ingresarDatosDoc(struct DatosGen *datosgen, int j){

  printf("-------------------------------------------------------------------------\n\t\t   Ingreso de datos del docente %d:\n-------------------------------------------------------------------------\n",j);
  
  printf("Nombre:\n");
  fflush(stdin);
  gets(datosgen->docente.nombre);

  printf("\nApellido:\n");
  fflush(stdin);
  gets(datosgen->docente.apellido);

  printf("\nCédula:\n");
  fflush(stdin);
  scanf("%d", &datosgen->docente.cedula);

  printf("\nFecha de nacimiento (año/mes/día):\n");
  fflush(stdin);
  scanf("%d %d %d",&datosgen->docente.fnacimiento.anio, &datosgen->docente.fnacimiento.mes, &datosgen->docente.fnacimiento.dia);

  printf("\nDirección:\n");
  fflush(stdin);
  gets(datosgen->docente.direccion);

  printf("\nTelefono:\n");
  fflush(stdin);
  scanf("%d", &datosgen->docente.telefono);
  
  printf("\nCorreo:\n");		//mas adelante tenemos que hacer que se muestre un correo generado automaticamente con el nombre proporcionado
  fflush(stdin);
  gets(datosgen->docente.correo);
  
  
  printf("\n-------------------------------------------------------------------------\n\t\t   Ingreso de promedios y NRC:\n-------------------------------------------------------------------------\n",j);
  
  printf("\nPromedio de álgebra:\n");
  fflush(stdin);
  printf("-> ");
  scanf("%d", &datosgen->estudiante.promedios.algebra.notafinal);
  printf("NRC de álgebra:\n");
  fflush(stdin);
  printf("-> ");
  gets(datosgen->estudiante.promedios.algebra.nrc);
  
  printf("\nPromedio de cálculo:\n");
  fflush(stdin);
  printf("-> ");
  scanf("%d", &datosgen->estudiante.promedios.calculo.notafinal);
  printf("NRC de cálculo:\n");
  fflush(stdin);
  printf("-> ");
  gets(datosgen->estudiante.promedios.calculo.nrc);
  
  printf("\nPromedio de biología:\n");
  fflush(stdin);
  printf("-> ");
  scanf("%d", &datosgen->estudiante.promedios.biologia.notafinal);
  printf("NRC de biología:\n");
  fflush(stdin);
  printf("-> ");
  gets(datosgen->estudiante.promedios.biologia.nrc);
  
  printf("\nPromedio de programación:\n");
  fflush(stdin);
  printf("-> ");
  scanf("%d", &datosgen->estudiante.promedios.progra.notafinal);
  printf("NRC de programación:\n");
  fflush(stdin);
  printf("-> ");
  gets(datosgen->estudiante.promedios.progra.nrc);
  
  printf("\nPromedio de química:\n");
  fflush(stdin);
  printf("-> ");
  scanf("%d", &datosgen->estudiante.promedios.quimica.notafinal);
  printf("NRC de química:\n");
  fflush(stdin);
  printf("-> ");
  gets(datosgen->estudiante.promedios.quimica.nrc);
  
  printf("\nPromedio de metodología de la investigación:\n");
  fflush(stdin);
  printf("-> ");
  scanf("%d", &datosgen->estudiante.promedios.metodo.notafinal);
  printf("NRC de metodología de la investigación:\n");
  fflush(stdin);
  printf("-> ");
  gets(datosgen->estudiante.promedios.metodo.nrc);
  
  //funcion para registrar estos datos en el archivo "ESTUDIANTES.txt"
  
  printf("\t Regresando al menú principal, presione ""Esc"" dos veces...");  
}
//------------MENU TECLADO

void mostrarMenu(int opcionActual){
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
			cout<<"VER DATOS DE UN ESTUDIANTE"<<endl;
			break;
		case 2:
			cout<<"VER DATOS DE UN DOCENTE"<<endl;
			break;
		case 3:
			cout<<"INGRESAR ESTUDIANTES"<<endl;
			break;
		case 4:
			cout<<"INGRESAR DOCENTES"<<endl;
			break;
		case 5:
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
				opcionActual = (opcionActual >1)? opcionActual - 1:5;
				break;
			case 80: //pa abajo
				opcionActual = (opcionActual <5)? opcionActual + 1:1;
				break;
			case 13:
				system("cls");
				
				switch(opcionActual){
					case 1: {
						cout<< "\t VER INFORMACIÓN DEL ESTUDIANTE" << endl;
						//"ingresar la funcion para mostrar la información
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
	printf("\t ESTUDIANTE\n\n");	
	for (int i=1; i<=3; i++){
		if(i==opcionActual){
			cout<<ANSI_BACKGROUND_BLUE;
		}
		else{
			cout<<ANSI_BACKGROUND_RESET; //
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
						cout<< "INGRESAR NUEVO DOCENTE" << endl;
						printf("Ingrese la cantidad de docentes a ingresar, ingrese ""0"" para cancelar:\n");
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
	operarMenu();
	return 0;
}
