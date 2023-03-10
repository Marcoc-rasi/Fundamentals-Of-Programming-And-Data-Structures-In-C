#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "menuinicio.h"
#include "menucliente.h"
#include "menuadmin.h"
#include "admin.h"
#include "stpiloto.h"
#include "stpasajeros.h"
#include "stavion.h"
#include "staerolinea.h"
#include "ia.h"
#include "crearAviones.h"
#include "crearBoletos.h"
#include "crearLineas.h"
#include "crearPasajeros.h"
#include "crearPilotos.h"
#include "crearDestino.h"
#include "tiempoVuelo.h"
#include "conteo.h"
#include "ventadeboletos.h"
#include "chequeodeboleto.h"
#include "chequeodeboleto.h"
#include "cancelaciondeboleto.h"
#include "cambiodevuelo.h"


int main()
{
    int resp=0,a=0;
    listaAV *listaAviones=NULL;
    listaAEL *listaAerolineas=NULL;
    //listaPA *listaPasajeros=NULL;
    listaPIL *listaPilotos=NULL;
    while (resp!=3){
        system("cls");
        resp=menuinicio();
        switch(resp){
           case 1:
                  while(resp!=6){
                      system("cls");
                      tiempoVuelo(&listaAviones);
                      resp=menucliente();
                      switch(resp){
                         case 1:
                                system("cls");
                                ventadeboletos(&listaAviones);
                                break;
                         case 2:
                                system("cls");
                                chequeoDeVuelos(&listaAviones);
                                break;
                         case 3:
                                system("cls");
                                chequeodeboleto(&listaAviones);
                                break;
                         case 4:
                                system("cls");
                                cancelaciondeboleto(&listaAviones);
                                break;
                         case 5:
                                system("cls");
                                cambiodevuelo(&listaAviones);
                                break;
                         default:
                                printf("\n\tOpciopn incorrecta intente de nuevo\n\t");
                      }
                  }
                  break;
           case 2:
                  if(0==(admin())){
                      while(resp!=5){
                           system("cls");
                           tiempoVuelo(&listaAviones);
                           resp=menuadmin();
                           switch(resp){
                              case 1:
                                     a=conteo(&listaAviones,&listaPilotos);
                                     crearAviones(&listaAviones,a,&listaPilotos);
                                     break;
                              case 2:
                                     crearPilotos(&listaPilotos);
                                     break;
                              case 3:
                                     crearLineas(&listaAerolineas);
                                     break;
                              case 4:
                                     chequeoDeVuelos(&listaAviones);
                                     break;
                              default:
                                     printf("\n\tOpciopn incorrecta intente de nuevo\n\t");
                           }
                      }
                  }
                  else{
                    printf("\n\tLo sentimos, contraseña incorrecta\n\t");
                    printf("\n\tPresiona cualquier tecla para continuar\n\t");
                    getchar();
                  }
                  break;
           case 3:
                  break;
           default:
                  printf("\n\tElije una opcion correcta\n\t");
        }
    }
    system("cls");
    printf("\n\tHasta luego\n\t");
    return 0;
}
