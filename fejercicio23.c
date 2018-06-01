#include <string.h>
#include <stdio.h>
#include "ejercicio23.h"

status_t insertar_cadena (char *original, char *agregado, int posicion) {
	char *separacion_ptr, aux [MAX_STR];
	if(!original || !agregado){
		return ST_PUNTERO_NULO;
	}
	if(posicion < 0){
		return ST_ERROR_LONG;
	}
	strcpy(aux,original);
	separacion_ptr = strtok(original, (original + posicion));
	strcpy(original, separacion_ptr);
	strcat(original, agregado);
	strcat(original, aux + posicion);
	return ST_OK;
}
	
