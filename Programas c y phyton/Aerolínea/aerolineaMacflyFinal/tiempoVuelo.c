#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "stavion.h"
void tiempoVuelo(listaAV **listaAviones)
{
    if((*listaAviones)!=NULL){
        avion *avion1;
        avion1=(*listaAviones)->h;
        int e=0;
        clock_t tf;
        double secs=0;
        tf=clock();
        srand(time((NULL)));
        while(avion1!=NULL){
            if(avion1->tiempoDeSalidaent,avion1->tiempoDeLlegadaent==0){
                //iniciamos el tiempo de espera para este avion 3 minutos
                avion1->tiempoDeSalida=clock();
                avion1->tiempoDeSalidaent=180;
            }
            else{
                //comparamos para saber si ya salio o esta por salir asignarle de nuevo tiempos
                if(avion1->tiempoDeSalidaent<(double)(tf-avion1->tiempoDeSalida)){
                    avion1->tiempoDeLlegadaent=rand()%600+1;
                    avion1->tiempoDeLlegada=clock();
                }
                if(avion1->tiempoDeLlegadaent<(double)(tf-avion1->tiempoDeLlegada)){
                    avion1->tiempoDeSalidaent=180;
                    avion1->tiempoDeSalida=clock();
                }

            }
            avion1=avion1->sig;
        }
    }
    return 0;

}

