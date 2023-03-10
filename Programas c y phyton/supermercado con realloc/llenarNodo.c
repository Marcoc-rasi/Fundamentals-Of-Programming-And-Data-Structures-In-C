#include"nodo.c"
char *nombre[]={"iPhone 6s plus","iPhone 6s","iPhone 6 plus","iPhone 6","Macbook","Macbook Air","Macbook Pro","iMac 21.5'","iMac 27","iPad Pro","iPad Air","iPad Mini","Watch","Watch Sport","Watch Edition"};
char *descripcion[]={"sopa instanteanea","jabon de tocador","esencia a frutas","quita piojos","La mas liviana","Poderosa y delgada","La mas poderosa para llevarla a donde quieras","Rapidez y elegancia", "todo en uno","No hay otra igual...","La mas poderosa e innovadora herramienta en tus manos","Potencia y elegancia","Poder y livianez","Elegancia en tu muñeca","Alcanza tu objetivo dia a dia","Caja de oro de 18 kilates"};
float precio[]={16000,14500,13000,12000,21000,22500,24000,37000,47000,16500,9000,7300,10700,6800,275000};
struct nodo agregarNodo(int ID){
	struct nodo tmp;
	tmp.ID = ID;
	printf("\n\n\tIngrese la cantidad de articulos que desee comprar: ");
	scanf("%d",&tmp.cantidad);
        printf("%d",tmp.cantidad);
        while(tmp.cantidad<1){
            printf("\n\n\tPor favor ingrese una cifra valida\n\n\tintente de nuevo: ");
            scanf("%d",&tmp.cantidad);
        }
    printf("\n\n\tArticulo agregado! :)\n\n");
	return tmp;
}
