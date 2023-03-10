#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stpiloto.h"
#include "stpasajeros.h"
#include "stavion.h"
void cambiodevuelo(listaAV **listaAviones){
    if((*listaAviones)==NULL){
        printf("\n\tNO HAY AVIONES\n\t");
        printf("\n\tPresione cualquier tecla para continuar\n\t");
        getchar();
        getchar();
    }
    else{
        char q[30];
        char w[30];
        int resp=0;
        avion *avion1;
        pasajero *pasajero1;
        avion1=(*listaAviones)->h;
        printf("\n\tBuscar cliente\n\t");
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
                return;
            pasajero1=avion1->listaPasajeros->h;
            while(pasajero1!=NULL && strcmp((pasajero1->nombre),w)!=0){
                pasajero1=pasajero1->sig;
            }
            if(pasajero1==NULL){
                printf("\n\tNo se encontro al pasajero, por favor vuelva a intentarlo\n\t");
                getchar();
                getchar();
            }
            else{
                printf("\n\n\tInformacion del pasajero:\n\t");
                printf("\n\tNombre: %s\n\t",pasajero1->nombre);
                printf("\n\tNacionalidad: %s\n\t",pasajero1->nacionalidad);
                printf("\n\tEdad: %d\n\t",pasajero1->edad);
                printf("\n\tEl destino es %s\n\t",avion1->destino);
                char g[30];
                avion *avion3;
                avion *avion4;
                pasajero *pasajero3,*pasajero4;
                avion3=(*listaAviones)->h;
                int a=0;
                printf("\n\n\tVuelos disponibles\n\t");
                while(avion3!=NULL){
                    printf("\n\tDestino: %s\n\t",avion3->destino);
                    avion3=avion3->sig;
                }
                printf("\n\n\tQue vuelo desea?: \n\t");
                getchar();
                gets(g);
                avion4=(*listaAviones)->h;
                while(avion4!=NULL && strcmp(avion4->destino,g)!=0 ){
                    a=strcmp(avion4->destino,g);
                    avion4=avion4->sig;
                }
                if(avion4==NULL){
                    printf("\n\tEl vuelo que esta solicitando no esta doisponible, vuelva a intentar\n\t");
                    printf("\n\tPresiona una tecla para continuar\n\t");
                    getchar();
                    getchar();
                }
                else{
                    pasajero3=(pasajero *)malloc(sizeof(pasajero));
                    if(avion4->listaPasajeros==NULL){
                        avion4->listaPasajeros=(listaPA*)malloc(sizeof(listaPA));
                        avion4->listaPasajeros->h=pasajero3;
                        avion4->listaPasajeros->t=pasajero3;
                        pasajero3->sig=pasajero3->ant=NULL;
                        pasajero3->sig=NULL;
                        pasajero3->ant=NULL;
                    }
                    else{
                        avion4->listaPasajeros->t->sig=pasajero3;
                        pasajero3->ant=avion4->listaPasajeros->t;
                        pasajero3->sig=NULL;
                        avion4->listaPasajeros->t=pasajero3;
                    }
                    printf("\n\tNombre de pasajero:\n\t");
                    gets(pasajero3->nombre);
                    printf("\n\tEdad: \n\t");
                    scanf("%d",&pasajero3->edad);
                    printf("\n\tNacionalidad: \n\t");
                    getchar();
                    gets(pasajero3->nacionalidad);
                    strcpy(pasajero3->bole->destino,avion4->destino);
                    pasajero3->bole->pilo=avion4->pilo;
                    printf("\n\tConfirmacion de cambio de vuelo exitosa %s\n\t",pasajero3->nombre);
                    system("cls");
                    getchar();
                    }
                if(pasajero1==avion1->listaPasajeros->h && pasajero1->sig==NULL){
                        avion1->listaPasajeros=NULL;
                        return 0;
                    }
                    if(pasajero1==avion1->listaPasajeros->h && pasajero1->sig!=NULL){
                       avion1->listaPasajeros->h=avion1->listaPasajeros->h->sig;
                       avion1->listaPasajeros->h->ant=NULL;
                       return 0;
                    }
                    if(pasajero1==avion1->listaPasajeros->t && pasajero1!=avion1->listaPasajeros->h){
                       avion1->listaPasajeros->t=pasajero1->ant;
                       avion1->listaPasajeros->t->sig=NULL;
                       return 0;
                    }
                    if(pasajero1!=avion1->listaPasajeros->t && pasajero1!=avion1->listaPasajeros->h){
                       pasajero1->ant->sig=pasajero1->sig;
                       pasajero1->sig->ant=pasajero1->ant;
                       free(pasajero1);
                       return 0;
                    }
            }
        }
    }

}
