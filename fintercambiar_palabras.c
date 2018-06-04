#include <string.h>
#include "ejercicio29.h"

void intercambiar_palabras(char *palabra_1, char *palabra_2) {
	char palabra_aux [MAX_STR];
	strcpy(palabra_aux, palabra_1);
	strcpy(palabra_1, palabra_2);
	strcpy(palabra_2,palabra_aux);
}
	
