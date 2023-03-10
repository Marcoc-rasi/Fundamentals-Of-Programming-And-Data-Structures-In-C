#include <time.h>
#ifndef avi_h
    #define avi_h
    #include "stpasajeros.h"
    #include "stpiloto.h"
    typedef struct avi{
        char tipo[10];
        char destino[15];
        listaPA *listaPasajeros;
        piloto *pilo;
        int tiempoDeLlegadaent;
        int tiempoDeSalidaent;
        double secs;
        clock_t tiempoDeLlegada;
        clock_t tiempoDeSalida;
        int numDePasajeros;
        struct avi *sig;
        struct avi *ant;
    }avion;
    typedef struct{
        avion *h;
        avion *t;
    }listaAV;
#endif // avi_h


