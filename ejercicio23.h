#ifndef EJERCICIO12__H
#define EJERCICIO12__H
#include "definiciones.h"
#include <stdlib.h>
#define MAX 5
#define MAX_STR 100
#define MSJ_INGRESO "Ingrese cadena"
#define MSJ_INGRESO_POSICION "Ingrese posicion para agregar cadena"
#define MSJ_INGRESO_AGREGADO "Ingrese cadena a agregar"

status_t insertar_cadena (char *original, char *agregado, int posicion);

#endif
