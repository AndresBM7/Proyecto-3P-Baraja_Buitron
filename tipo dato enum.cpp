#include <stdio.h>

enum diasemana{lunes, martes, miercoles, jueves, viernes, sabado, domingo
};

int main(){
	diasemana dia;
	
	for(int i=lunes; i<= domingo; i++){
		printf("%d", i);
	}
	printf("%s", 2);
	
}
