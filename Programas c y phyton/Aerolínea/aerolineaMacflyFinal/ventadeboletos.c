#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stavion.h"
#include "stpasajeros.h"

void ventadeboletos(listaAV **listaAviones){
     if((*listaAviones)==NULL){
        printf("\n\t ##Lo sentimos## \n\n\t\Por el momento la aerolinea no cuenta con vuelos disponibles,  por favor intente mas tarde\n\t");
        printf("\n\tPresione cualquier tecla para continuar\n\t");
        getchar();
        getchar();
    }
    else{
        char c[30];
        avion *avion1;
        avion *avion2;
        pasajero *pasajero1;
        avion1=(*listaAviones)->h;
        printf("\n\t\t\t\t\t============BIENVENIDO============\n\t\t\t==============La aerolinea MackFly le ofrece los siguientes destinos:==============\n\n");
        while(avion1!=NULL){
            printf("\n\t * %s\n\t",avion1->destino);
            avion1=avion1->sig;
        }
        printf("\n\n\tQue vuelo desea?: \n\t");
        getchar();
        gets(c);
        avion2=(*listaAviones)->h;
        while(avion2!=NULL && strcmp(avion2->destino,c)!=0 ){
            avion2=avion2->sig;
        }
        if(avion2==0){
            printf("\n\tEl vuelo que está solicitando no se encuentra disponible o no existe, vuelva a intentarlo\n\t");
            printf("\n\tPresione una tecla para continuar\n\t");
            getchar();
            getchar();
        }
        else{
            pasajero1=(pasajero *)malloc(sizeof(pasajero));
            if(avion2->listaPasajeros==NULL){
                avion2->listaPasajeros=(listaPA *)malloc(sizeof(listaPA));
                avion2->listaPasajeros->h=pasajero1;
                avion2->listaPasajeros->t=pasajero1;
                pasajero1->sig=pasajero1->ant=NULL;
                pasajero1->sig=NULL;
                pasajero1->ant=NULL;
            }
            else{
                avion2->listaPasajeros->t->sig=pasajero1;
                pasajero1->ant=avion2->listaPasajeros->t;
                pasajero1->sig=NULL;
                avion2->listaPasajeros->t=pasajero1;
            }
            printf("\n\t Para continuar ingrese los siguientes datos para finalizar su compra exitosamente:\n\t");
            printf("\n\tNombre de pasajero:\n\t");
            gets(pasajero1->nombre);
            printf("\n\tEdad: \n\t");
            scanf("%d",&pasajero1->edad);
            printf("\n\tNacionalidad: \n\t");
            getchar();
            gets(pasajero1->nacionalidad);
            printf("\n\tSU VUELO HA SIDO CONFIRMADO CON EXITO %s\n\t",pasajero1->nombre);
            getchar();
            getchar();
            }
    }
}
