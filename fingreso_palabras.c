#include <stdio.h>
#include <stdlib.h>
#include "ingreso_palabras.h"

void ingresar_palabras (char vector_palabras [MAX_PALABRAS] [MAX_STR], int cant_palabras){
	int i;
	for(i = 0; i < cant_palabras; i++) {
		fgets(*(vector_palabras + i), MAX_STR, stdin);
	}
}
