#include <stdio.h>
#include "imprimir_palabras.h"

void imprimir_palabras(char palabras [MAX_PALABRAS] [MAX_STR], int cant_palabras){
	int i;
	for(i = 0; i < cant_palabras; i++){
		puts(*(palabras + i));
	}
}
