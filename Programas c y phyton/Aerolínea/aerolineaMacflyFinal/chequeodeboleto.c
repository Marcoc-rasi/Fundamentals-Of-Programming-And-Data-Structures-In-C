#include <stdio.h>
#include <string.h>
#include "stavion.h"
#include "stpasajeros.h"
#include "stpiloto.h"
void chequeodeboleto(listaAV **listaAviones){
    if((*listaAviones)==NULL){
        printf("\n\tNO HAY AVIONES\n\t");
        printf("\n\tPresione cualquier tecla para continuar\n\t");
        getchar();
        getchar();
    }
    else{
        char q[30];
        char w[30];
        avion *avion1;
        pasajero *pasajero1;
        avion1=(*listaAviones)->h;
        system("cls");
        printf("\n\tBuscar cliente\n\n\t");
        printf("\n\tDestino del vuelo: \n\t");
        getchar();
        gets(q);
        printf("\n\tNombre del cliente: \n\t");
        scanf("%s",&w);
        while(avion1!=NULL && strcmp(avion1->destino,q)!=0){
            avion1=avion1->sig;
        }
        if(avion1==NULL){
            printf("\n\tEl destino no se encontro por favor vuelva a intentarlo\n\t");
            getchar();
            getchar();
        }
        else{
            if(avion1->listaPasajeros==NULL)
                return 0;
            pasajero1=avion1->listaPasajeros->h;
            while(pasajero1!=NULL && strcmp((pasajero1->nombre),w)!=0){
                pasajero1=pasajero1->sig;
            }
            if(pasajero1==NULL){
                printf("\n\tNo se encontro a la persona por favor vuelva a intentarlo\n\t");
                getchar();
                getchar();
            }
            else{
                printf("\n\tInformacion Cliente:\n\t");
                printf("\n\tNombre: %s\n\t",pasajero1->nombre);
                printf("\n\tNacionalidad: %s\n\t",pasajero1->nacionalidad);
                printf("\n\tEdad: %d\n\t",pasajero1->edad);
                printf("\n\tEl destino es %s\n\t",avion1->destino);
                getchar();
                getchar();
            }
        }
    }
}
