#include <stdio.h>
#include <stdlib.h>o
#include <string.h>
#include <time.h>
#include "stpiloto.h"
void crearPilotos(listaPIL **listaPilotos){
        piloto *piloto1,*piloto2;
            system("cls");
            printf("\n\tVamos a contratar a un nuevo piloto\n\t");
            if((*listaPilotos==NULL)){
                (*listaPilotos)=(listaPIL*)malloc(sizeof(listaPIL));
                piloto1=(piloto*)malloc(sizeof(piloto));
                (*listaPilotos)->h=piloto1;
                (*listaPilotos)->t=piloto1;
                piloto1->sig=NULL;
                piloto1->ant=NULL;
                printf("\n\tDame el nombre del piloto\n\t");
                getchar();
                gets(piloto1->nombre);
                strcpy(piloto1->estado,"inactivo");
            }
            else{
                piloto2=(*listaPilotos)->t;
                piloto1=(piloto*)malloc(sizeof(piloto));
                piloto2->sig=piloto1;
                piloto1->ant=piloto2;
                piloto1->sig=NULL;
                (*listaPilotos)->t=piloto1;
                printf("\n\tDame el nombre del piloto\n\t");
                getchar();
                gets(piloto1->nombre);
                strcpy(piloto1->estado,"inactivo");
            }
}

