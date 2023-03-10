#include"llenarNodo.c"
#include"imprimirNodo.c"
#include"imprimirLista.c"
int main(){
	int numElementos=0, entID=0, cont,lim=0;
	double total=0;
	struct nodo *carrito;
	char opt;
    int num,i;
    carrito=(struct nodo*)calloc(lim, sizeof(struct nodo));
    printf("\n\n\t\t******** iShop en linea, bienvenido ********\n\n\n\tQue desea hacer?\n");
	while(1){
		printf("\n\ta) Lista de nuestros productos\n\tb) Agregar un articulo al carrito de compras\n\tc) Ver el carrito de compras\n\td) Pagar y salir\n\n\tIngrese una opcion: ");
		setbuf(stdin,NULL);
		scanf("%c",&opt);
		getchar();
        system("cls");
			switch(opt){
				case 'a': case 'A':
					imprimirLista();
					break;
				case 'b': case 'B':
                    if(numElementos<=lim){
                        imprimirLista();
                        printf("\n\n\tIngrese el ID del articulo que desee agregar: ");
                        scanf("%d", &entID);
                            while(entID<1||entID>15){
                             entID=0;

                            printf("\n\n\tIngrese un ID valido\n\n\tPor favor intente de nuevo: ");
                                getchar();
                                scanf("%d", &entID);
                            }
                         agregarNodo(entID);
                         numElementos++;
                        /*(carrito+numElementos++)=agregarNodo(entID-1);*/
                    }
                    else{
                        carrito=(struct nodo*)realloc(carrito,sizeof(struct nodo));
                        imprimirLista();
                        printf("\n\n\tIngrese el ID del articulo que desee agregar: ");
                        scanf("%d", &entID);
                            while(entID<1||entID>15){
                                entID=0;
                                getchar();
                                printf("\n\n\tIngrese un ID valido\n\n\tPor favor intente de nuevo: ");
                                scanf("%d", &entID);
                            }
                         agregarNodo(entID);
                         numElementos++;
                        /*(carrito+numElementos++)=agregarNodo(entID-1);*/
                    }
					break;
				case 'c': case 'C':
					if(numElementos==0)
						printf("\n\n\tEl carrito esta vacio.\n\n");
					else{
						for(cont=0;cont<numElementos;cont++){
							imprimirNodo(*(carrito+cont));
						printf("\n\n\tPresione enter para continuar: ");
						getchar();
						system("cls");
					}
                    break;
                case 'd': case 'D':
                    if(numElementos==0)
						printf("\n\n\tEl carrito esta vacio\n\n");
					else{
                        for(cont=0;cont<numElementos;cont++){
                            imprimirNodo(*(carrito+cont));
                            total+= *(precio+(carrito[cont].ID))*(*(carrito+cont)).cantidad;
                        }
                        printf("\n\n\n\n\t\t*** iShop en linea le agradece su preferencia ***\n\n\n\n\tSu total a pagar es de $: %.2f\n\n\n\t\t\t\tHasta pronto!!\n\n", total);
                        free(carrito);
                        return 0;
					}
                    break;
                default:
                  printf("\n\n\tPor favor ingresa una opcion valida");
			}
        printf("\n\n\tQue mas desea hacer?\n");
	}
}}
