#ifndef aero_h
    #define aero_h
    typedef struct aero{
        char nombre[30];
        struct aero *sig;
        struct aero *ant;
    }aerolin;
    typedef struct{
        aerolin *h;
        aerolin *t;
    }listaAEL;
#endif // aero_h


