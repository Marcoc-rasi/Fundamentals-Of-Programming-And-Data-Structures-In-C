#ifndef piloto_h
    #define piloto_h
    typedef struct pil{
        char nombre[30];
        char estado[10];
        struct pil *sig;
        struct pil *ant;
    }piloto;
    typedef struct{
        piloto *h;
        piloto *t;
    }listaPIL;
#endif // piloto_h
