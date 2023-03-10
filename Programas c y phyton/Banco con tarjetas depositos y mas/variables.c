struct nodo{
char contrasena[16];
char nombre[30];
float dinero;
int numTarjetas;
int numUsuario;
};


struct nodin{
int numUsuario;
int numTarjeta;
char contrasena[4];
int cancelado;
}tarjetas,*ptarjetas=&tarjetas,*ptarjetas2;

int respMenu=0;
int numTarjetas=0;
int numUsuario=0;
int saldo=0;
int cont=0;
int cont1=0;

struct nodo1{
struct nodo cliente;
}usuario,*pusuario=&usuario,*pusuario2;

