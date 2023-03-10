//le funcion recibe los vuelos hechos y realiza un boleto el cual es asignado a cada pasajero
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "stpasajeros.h"
void crearBoletos(pasajero **nod,char *destino[15]){
    int a;
    srand(time(NULL));
    boleto *boletoFinal;
    printf("\n\thola\n\t");
    strcat(boletoFinal->destino,destino);
    printf("%s",destino);
    //el boleto ya tiene destino falta asignarle un piloto pero eso lo haremos mas adelante porque todavia el avion no tiene piloto
    printf("\n\tTope1\n\t");
    a=rand()%1001;
    boletoFinal->codigo=a;
    (*nod)->bole=boletoFinal;
    printf("\n\tTopeboleto\n\t");
}
