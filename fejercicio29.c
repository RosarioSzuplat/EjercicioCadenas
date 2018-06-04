#include <string.h>
#include "ejercicio29.h"

status_t ordenar_palabras (char palabras [MAX_PALABRAS] [MAX_STR]){
	int i, j, minimo;
	if(!*palabras){
		return ST_PUNTERO_NULO;
	}
	for(j = 0; j < MAX_PALABRAS - 1; j++){
		minimo = j;
		for (i = 1 + j;  i < MAX_PALABRAS; i++){
			if(strcmp(*(palabras + i), *(palabras + minimo)) < 0 ) {
				minimo = i;
			}
		}
		if (minimo != j) {
			intercambiar_palabras(*(palabras + j), *(palabras + minimo));
		}
	}
	return ST_OK;
}
