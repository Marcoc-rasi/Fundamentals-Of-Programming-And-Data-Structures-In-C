//crea los vuelos para devolver la lista a la funcion crearBoletos();
//vamos a crear unos destinos y seleccionar cuantos vuelos van a salir
#include <time.h>
char *crearDestino(){
    srand(time(NULL));
    char *destino[15];
    char *destinos[9]={"EUA","brasil","canada","mexico","vietnam","egipto","finlandia","noruega","italia"};
    strcat(destino,destinos[rand()%10]);
    return destino;
}
