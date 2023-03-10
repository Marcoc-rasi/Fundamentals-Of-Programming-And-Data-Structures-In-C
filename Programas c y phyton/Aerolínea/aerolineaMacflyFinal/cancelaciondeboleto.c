#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stpiloto.h"
#include "stpasajeros.h"
#include "stavion.h"

void cancelaciondeboleto(listaAV **listaAviones){
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
        system("cls");
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
            if(avion1->listaPasajeros==NULL){
                return 0;
            }
            pasajero1=avion1->listaPasajeros->h;
            while(pasajero1!=NULL && strcmp(pasajero1->nombre,w)!=0){
                pasajero1=pasajero1->sig;
            }
            if(pasajero1==NULL ){
                printf("\n\tNo se encontro a la persona por favor vuelva a intentarlo\n\t");
                getchar();
                getchar();
            }
            else{
                printf("\n\n\tInformacion Cliente:\n\t");
                printf("\n\tNombre: %s\n\t",pasajero1->nombre);
                printf("\n\tNacionalidad: %s\n\t",pasajero1->nacionalidad);
                printf("\n\tEdad: %d\n\t",pasajero1->edad);
                printf("\n\tDestino de vuelo %s\n\t",avion1->destino);
                printf("\n\tEste boleto se cancelara esta seguro\n\t1)Contuniar\n\t2)Cancelar\n\t");
                scanf("%d",&resp);
                if(resp==1){
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
    system("cls");
}
