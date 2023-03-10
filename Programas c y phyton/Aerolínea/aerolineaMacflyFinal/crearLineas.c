#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "staerolinea.h"
void crearLineas(listaAEL **listaAerolineas){
        aerolin *aerolinea1,*aerolinea2;
        printf("\n\tVamos a crear una linea\n\t");
        if((*listaAerolineas)==NULL){
           (*listaAerolineas)=(listaAEL*)malloc(sizeof(listaAEL));
           aerolinea1=(aerolin*)malloc(sizeof(aerolin));
           (*listaAerolineas)->h=aerolinea1;
           (*listaAerolineas)->t=aerolinea1;
           aerolinea1->sig=NULL;
           aerolinea1->ant=NULL;
           printf("\n\tDame el nombre de tu aerolinea");
           getchar();
           gets(aerolinea1->nombre);
        }
        else{
           aerolinea1=(aerolin*)malloc(sizeof(aerolin));
           aerolinea2=(*listaAerolineas)->h;
           aerolinea2->sig=aerolinea1;
           aerolinea1->ant=aerolinea2;
           aerolinea1->sig=NULL;
           (*listaAerolineas)->t=aerolinea1;
           printf("\n\tDame el nombre de tu aerolinea");
           getchar();
           gets(aerolinea1->nombre);
        }
}
