#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "stpiloto.h"
#include "stpasajeros.h"
#include "stavion.h"
#include "staerolinea.h"
void crearAviones(listaAV **listaAviones,int b,listaPIL **listaPilotos){
        system("cls");
        avion *avion1,*avion2,*avion3;
        piloto *piloto1;
        srand(time(NULL));
        int i=0,e=0,a=0,resp=0;
        if(b==0){
            printf("\n\tVamos a agregar un avion a tu linea este solo va atener un destino en su tiempo de vida\n\t");
            if(*listaAviones==NULL){
                (*listaAviones)=(listaAV *)malloc(sizeof(listaAV));
                avion1=(avion *)malloc(sizeof(avion));
                (*listaAviones)->h=avion1;
                (*listaAviones)->t=avion1;
                avion1->sig=NULL;
                avion1->ant=NULL;
                printf("\n\tDame el destino del avion\n\t");
                getchar();
                gets(avion1->destino);
                printf("\n\tDame el tipo tienes estas opciones\n\t1)Jet\n\t2)Ejecutivo\n\t3)AirBus\n\t");
                scanf("%d",&resp);
                avion1->listaPasajeros=NULL;
                while(e==0){
                    switch(resp){
                    case 1:
                        printf("\n\tBien Tu avion puede llevar maximo 6 pasajeros\n\t");
                        strcpy(avion1->tipo,"JET");
                        avion1->tiempoDeSalidaent=0;
                        avion1->tiempoDeLlegadaent=0;
                        avion1->numDePasajeros=6;
                        tiempoVuelo(listaAviones);
                        piloto1=(*listaPilotos)->h;
                       while(piloto1!=NULL){
                            a=strcmp(piloto1->estado,"activo");
                            if(a!=0){
                                avion1->pilo=piloto1;
                                strcpy(piloto1->estado,"activo");
                                piloto1=NULL;
                            }
                            else
                                piloto1=piloto1->sig;
                        }
                        e=1;
                        break;
                    case 2:
                        printf("\n\tBien Tu avion puede llevar maximo 100 pasajeros\n\t");
                        strcpy(avion1->tipo,"EJECUTIVO");
                        avion1->tiempoDeSalidaent=0;
                        avion1->tiempoDeLlegadaent=0;
                        avion1->numDePasajeros=100;
                        tiempoVuelo(listaAviones);
                        piloto1=(*listaPilotos)->h;
                        while(piloto1!=NULL){
                            a=strcmp(piloto1->estado,"activo");
                            if(a!=0){
                                avion1->pilo=piloto1;
                                strcpy(piloto1->estado,"activo");
                                piloto1=NULL;
                            }
                            else
                                piloto1=piloto1->sig;
                        }
                        e=1;
                        break;
                    case 3:
                        printf("\n\tBien Tu avion puede llevar maximo 6 pasajeros\n\t");
                        getchar();
                        getchar();
                        strcpy(avion1->tipo,"AIRBUS");
                        avion1->tiempoDeSalidaent=0;
                        avion1->tiempoDeLlegadaent=0;
                        avion1->numDePasajeros=500;
                        tiempoVuelo(listaAviones);
                        piloto1=(*listaPilotos)->h;
                        getchar();
                        getchar();
                        while(piloto1!=NULL){
                            a=strcmp(piloto1->estado,"activo");
                            if(a!=0){
                                avion1->pilo=piloto1;
                                strcpy(piloto1->estado,"activo");
                                piloto1=NULL;
                            }
                            else
                                piloto1=piloto1->sig;
                        }
                        e=1;
                        break;
                    default:
                        printf("\n\tOpcion incorrecta\n\t");
                        printf("\n\tDame el tipo tienes estas opciones\n\t1)Jet\n\t2)Ejecutivo\n\t3)AirBus\n\t");
                        scanf("%d",&resp);
                        getchar();
                        getchar();
                    }
                }
            }
            else{
                avion2=(*listaAviones)->t;
                avion1=(avion *)malloc(sizeof(avion));
                avion2->sig=avion1;
                avion1->ant=avion2;
                avion1->sig=NULL;
                (*listaAviones)->t=avion1;
                printf("\n\tDame el destino del avion\n\t");
                getchar();
                gets(avion1->destino);
                printf("\n\tDame el tipo tienes estas opciones\n\t1)Jet\n\t2)Ejecutivo\n\t3)AirBus\n\t");
                scanf("%d",&resp);
                avion1->listaPasajeros=NULL;
                while(e==0){
                    switch(resp){
                    case 1:
                        printf("\n\tBien Tu avion puede llevar maximo 6 pasajeros\n\t");
                        strcpy(avion1->tipo,"JET");
                        avion1->tiempoDeSalidaent=0;
                        avion1->tiempoDeLlegadaent=0;
                        avion1->numDePasajeros=6;
                        tiempoVuelo(listaAviones);
                        piloto1=(*listaPilotos)->h;
                        while(piloto1!=NULL){
                            a=strcmp(piloto1->estado,"activo");
                            if(a!=0){
                                avion1->pilo=piloto1;
                                strcpy(piloto1->estado,"activo");
                                piloto1=NULL;
                            }
                            else
                                piloto1=piloto1->sig;
                        }
                        e=1;
                        break;
                    case 2:
                        printf("\n\tBien Tu avion puede llevar maximo 100 pasajeros\n\t");
                        strcpy(avion1->tipo,"EJECUTIVO");
                        avion1->tiempoDeSalidaent=0;
                        avion1->tiempoDeLlegadaent=0;
                        avion1->numDePasajeros=100;
                        tiempoVuelo(listaAviones);
                        piloto1=(*listaPilotos)->h;
                        while(piloto1!=NULL){
                            a=strcmp(piloto1->estado,"activo");
                            if(a!=0){
                                avion1->pilo=piloto1;
                                strcpy(piloto1->estado,"activo");
                                piloto1=NULL;
                            }
                            else
                                piloto1=piloto1->sig;
                        }
                        e=1;
                        break;
                    case 3:
                        printf("\n\tBien Tu avion puede llevar maximo 6 pasajeros\n\t");
                        strcpy(avion1->tipo,"AIRBUS");
                        avion1->tiempoDeSalidaent=0;
                        avion1->tiempoDeLlegadaent=0;
                        avion1->numDePasajeros=500;
                        tiempoVuelo(listaAviones);
                        piloto1=(*listaPilotos)->h;
                        while(piloto1!=NULL){
                            a=strcmp(piloto1->estado,"activo");
                            if(a!=0){
                                avion1->pilo=piloto1;
                                strcpy(piloto1->estado,"activo");
                                piloto1=NULL;
                            }
                            else
                                piloto1=piloto1->sig;
                        }
                        e=1;
                        break;
                    default:
                        printf("\n\tOpcion incorrecta\n\t");
                        printf("\n\tDame el tipo tienes estas opciones\n\t1)Jet\n\t2)Ejecutivo\n\t3)AirBus\n\t");
                        scanf("%d",&resp);
                    }
                }
            }
        }

        else{
            printf("\n\tNo puedes crear aviones te falta contratar pilotos\n\t");
            getchar();
            getchar();
        }
return 0;
getchar();
getchar();
}
