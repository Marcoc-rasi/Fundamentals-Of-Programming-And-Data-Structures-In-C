#ifndef boleto_h
    #define boleto_h
    #include "stpiloto.h"
    typedef struct bol{
        char destino[30];
        piloto *pilo;
        int codigo;
    }boleto;


    typedef struct pasaje{
           char *nombre[30];
           boleto *bole;
           char *nacionalidad[30];
           int edad;
           struct pasaje *sig;
           struct pasaje *ant;
    }pasajero;
    typedef struct{
        pasajero *h;
        pasajero *t;
    }listaPA;
#endif // boleto_h


