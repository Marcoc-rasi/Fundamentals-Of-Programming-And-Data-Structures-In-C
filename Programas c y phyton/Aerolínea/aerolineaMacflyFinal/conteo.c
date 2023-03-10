#include "stavion.h"
#include "stpiloto.h"
int  conteo(listaAV **listaAviones,listaPIL **listaPilotos){
    piloto *piloto1;
    avion *avion1;
    int contpil=0,contav=0;
    if((*listaAviones),(*listaPilotos)==NULL)
        return 1;
    else{
        if((*listaPilotos!=NULL) && (*listaAviones)!=NULL){
            piloto1=(*listaPilotos)->h;
            avion1=(*listaAviones)->h;
            while(piloto1!=(*listaPilotos)->t->sig){
                contpil++;
                piloto1=piloto1->sig;
            }
            while(avion1!=(*listaAviones)->t->sig){
                contav++;
                avion1=avion1->sig;
            }
            if(contpil>contav)
                return 0;
            else
                return 1;
        }
        if((*listaAviones)==NULL && (*listaPilotos)!=NULL){
            piloto1=(*listaPilotos)->h;
            avion1=NULL;
            while(piloto1!=(*listaPilotos)->t->sig){
                contpil++;
                piloto1=piloto1->sig;
            }
            if(contpil>contav)
                return 0;
            else
                return 1;
        }
    }
}
