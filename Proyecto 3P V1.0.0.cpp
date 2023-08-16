#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <locale.h>

struct Fnacimiento{
  int anio;
  int mes;
  int dia;
};

struct Algebra{
  int notas1p;
  int notas2p;
  int nrc;
};

struct Calculo{
  int notas1p;
  int notas2p;
  int nrc;
};

struct Biologia{
  int notas1p;
  int notas2p;
  int nrc;
};

struct Progra{
  int notas1p;
  int notas2p;
  int nrc;
};

struct Quimica{
  int notas1p;
  int notas2p;
  int nrc;
};

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
  profesion carrera[20];
  char niveleducacion;//poner menu de opciones (maestría, licenciatura, doctorado)
  int nregistro;

}

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
}

struct DatosGen{
  Estudiante estudiante;
  Docente docente;
  
}

void ingresarDatos(struct DatosGen *datosgen, int j){

  
}

int main(){
  int n;

  printf("Ingrese la cantidad de personas a ingresar:\n");
  scanf("%d",&n);

  struct DatosGen datosgen[n];
  
  for(int i=0; i<n; i++){
    ingresarDatos(&datosgen[n], i+1);
  }
  return 0; 
}
