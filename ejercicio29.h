#ifndef EJERCICIO29__H
#define EJERCICIO29__H
#include "definiciones.h"
#define MAX_PALABRAS 10
#define MSJ_INGRESO_CANT "Ingrese la cantidad de palabras"
#define MSJ_INGRESO_PALABRAS "Ingrese las palabras"

status_t ordenar_palabras (char palabras [MAX_PALABRAS] [MAX_STR]);
void intercambiar_palabras(char *palabra_1, char *palabra_2);

#endif
