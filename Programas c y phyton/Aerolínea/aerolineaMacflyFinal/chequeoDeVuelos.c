#include "stavion.h"
void chequeoDeVuelos(listaAV **listaAviones){
    if((*listaAviones)==NULL){
        printf("\n\tNo hay aviones que checar\n\t");
        printf("\n\tPresione cualquier tecla para continuar\n\t");
        getchar();
        getchar();
    }
    else{
        avion *avion1;
        avion1=(*listaAviones)->h;
        while(avion1!=NULL){
            system("cls");
            printf("\n\tTipo de avion %s\n\t",avion1->tipo);
            printf("\n\tDestino %s\n\t",avion1->destino);
            printf("\n\tNumero de pasajeros %d\n\t",avion1->numDePasajeros);
            printf("\n\tTiempo para salir %d minutos\n\t",avion1->tiempoDeSalidaent/60);
            printf("\n\tTiempo para llegar a su destino %d minutos\n\t",avion1->tiempoDeLlegadaent/60);
            printf("\n\tNombre del piloto abordo %s\n\t",avion1->pilo->nombre);
            if(avion1->sig!=NULL)
                printf("\n\tPara avanzar al siguiente avion presione una tecla\n\t");
            else
                printf("\n\tEste es el ultimo avion presione una tecla para salir al menu\n\t");
            getchar();
            getchar();
            avion1=avion1->sig;
        }
    }
}
