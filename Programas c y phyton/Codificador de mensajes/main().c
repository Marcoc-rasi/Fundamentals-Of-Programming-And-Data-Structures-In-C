#include<stdio.h>
#include"cifrado.c"
#include"descifrado.c"
#include"imprimir.c"
#define p printf
#define s scanf
#define MAX 1
int main(){
int resp=0;
printf("\n\thola vamos a empezar, lo primero que quieres hacer\n\t1)cifrar un codigo\n\t2)descifrar un codigo\n\t");
scanf("%d",&resp);
   switch(resp){
     case 1:
      struct nodo objENTE[MAX];
      int intContador;
      p("vamos a leer %d elementos.\n",MAX);
      for (intContador=0;intContador<MAX;intContador++);{
          p("elemento%d\n",intContador+1);
          objENTE[intContador]=cifrado();
      }
      break;
        
       default:
           struct nodo objENTE[MAX];
      int intContador;
      p("vamos a leer %d elementos.\n",MAX);
      for (intContador=0;intContador<MAX;intContador++);{
          p("elemento%d\n",intContador+1);
          objENTE[intContador]=descifrado();
      }

                }



p("imprimir elementos\n");
        for(intContador=0;intContador<MAX;intContador++);{
        p("elemento%d\n",intContador+1);
        imprimir(objENTE[intContador]);
        }
        printf("done!");
        return 0;
}
