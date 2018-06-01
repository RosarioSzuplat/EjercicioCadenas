#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ejercicio23.h"
#include "errores.h"

int main (void) {
	int posicion;
	char cadena_orig [MAX_STR], cadena_agregar [MAX_STR], aux [MAX_STR], *char_ptr;
	status_t validacion;
	puts(MSJ_INGRESO);
	if(!(fgets(cadena_orig, MAX_STR, stdin))){
		fprintf(stderr, "%s: %s\n", MSJ_ERROR, MSJ_EOF);
		return EXIT_FAILURE;
	}
	puts(MSJ_INGRESO_POSICION);
	if(!(fgets(aux, MAX_STR, stdin))){
		fprintf(stderr, "%s: %s\n", MSJ_ERROR, MSJ_EOF);
		return EXIT_FAILURE;
	}
	posicion = strtol(aux, &char_ptr, 10);
	if(*char_ptr != '\0' && *char_ptr != '\n') {
		fprintf(stderr, "%s: %s\n", MSJ_ERROR, MSJ_NUMERO_INVALIDO);
		return EXIT_FAILURE;
	}
	puts(MSJ_INGRESO_AGREGADO);
	if(!(fgets(cadena_agregar, MAX_STR, stdin))){
		fprintf(stderr, "%s: %s\n", MSJ_ERROR, MSJ_EOF);
		return EXIT_FAILURE;
	}
	char_ptr = strtok(cadena_agregar, "\n");
	if((validacion=((insertar_cadena(cadena_orig, char_ptr, posicion)))) == ST_PUNTERO_NULO){
		fprintf(stderr, "%s: %s\n", MSJ_ERROR, MSJ_PUNTERO_NULO);
		return EXIT_FAILURE;
	}
	if(validacion == ST_ERROR_LONG){
		fprintf(stderr, "%s: %s\n", MSJ_ERROR, MSJ_PUNTERO_NULO);
		return EXIT_FAILURE;
	}
	puts(cadena_orig);
	return EXIT_SUCCESS;
}
