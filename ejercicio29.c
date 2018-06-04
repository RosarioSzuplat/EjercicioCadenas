#include <stdio.h>
#include <stdlib.h>
#include "ejercicio29.h"
#include "errores.h"
#include "ingreso_palabras.h"
#include "imprimir_palabras.h"

int main (void) {
	char vector_palabras [MAX_PALABRAS] [MAX_STR], *char_ptr, aux [MAX_STR];
	int cant_palabras;
	puts(MSJ_INGRESO_CANT);
	if(!(fgets(aux, MAX_STR, stdin))){
		fprintf(stderr, "%s: %s\n", MSJ_ERROR, MSJ_EOF);
		return EXIT_FAILURE;
	}
	cant_palabras = strtol (aux, &char_ptr, 10);
	if(*char_ptr != '\0' && *char_ptr != '\n'){
		fprintf(stderr, "%s: %s\n", MSJ_ERROR, MSJ_NUMERO_INVALIDO);
		return EXIT_FAILURE;
	}
	if(cant_palabras > MAX_PALABRAS) {
		fprintf(stderr, "%s: %s\n", MSJ_ERROR, MSJ_DIMENSION);
		return EXIT_FAILURE;
	}
	puts(MSJ_INGRESO_PALABRAS);
	ingresar_palabras(vector_palabras, cant_palabras);
	if((ordenar_palabras(vector_palabras)) == ST_PUNTERO_NULO){
		fprintf(stderr, "%s: %s\n", MSJ_ERROR, MSJ_PUNTERO_NULO);
		return EXIT_FAILURE;
	}
	imprimir_palabras(vector_palabras, cant_palabras);
	return EXIT_SUCCESS;
}
