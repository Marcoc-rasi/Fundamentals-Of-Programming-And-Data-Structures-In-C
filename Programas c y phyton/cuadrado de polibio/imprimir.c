#include<stdio.h>
#include"pedidoDatos.c"
#include"cifrado.c"
#include"descifrado.c"
#define p printf
#define s scanf
int imprimirNodo(struct nodo usuario,struct nodo llenarnodo){
if(resp==1){
printf("\n\tbien ya esta listo\n\teste es el cuadrado del cual fue cifrado tu codigo\n\t");
   for(i=0;i<4;i++)
    {
      printf("\n");
      for(j=0;j<4;j++)
       printf("%c\t",cuadrado[i][j]);
    }
printf("\n\teste es tu mensaje cifrado de acuerdo al cuadrado de polibio, recuerda que las posiciones empiezan en 0\n\t");
for(i=0;i<(lontigudmensaje*2);i++)
     printf("%d",usuario.codigo[i]);
            }
else{
printf("\n\tbien tu mensaje ya descifrado es este\n\t");
    for(i=0;i<(longitudcodigo/2);i++)
       printf("%s",usuario.mensaje[i]);
    }
}
