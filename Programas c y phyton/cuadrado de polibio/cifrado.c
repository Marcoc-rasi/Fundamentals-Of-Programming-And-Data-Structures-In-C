#include<stdio.h>
#include<string.h>
#include"pedidoDatos.c"
#define p printf
#define s scanf
struct nodo llenarnodo(){
struct nodo usuario;
int longitudcodigo,cont1,longitudclave=6,cont2=0,i,j,e,c;
char cuadrado[4][4],abc[4][4]={'a','b','c','d','e','f','g','h','i','j',"kq",'n','l','o','p','r','s','t','u','v','w','x','y','z'};
p("\n\n\thola este programa usa el cuadrado de polibio para cifrar un codigo, estara cifrada tu palabra clave al inicion del cuadrado, por eso tu palabra clave tiene que ser menor o igual a 5 letras\n\t");
while(longitudclave>5){
p("\n\t que palabra clave deseas usar\n\t");
gets(usuario.clave);
longitudclave=strlen(usuario.clave); 
 if(longiudclave>5)
   printf("\nlo sentimos tu palabra clave es invalida\n\t");
}
p("\n\n\tdame el mensaje completo que quieres cifrar\n\t");
gets(usuario.mensaje);
longitudmensaje=strlen(usuario.mensaje);
for(i=0;i<4;i++)
   for(j=0;j<4;j++)
      {
      if(cont1<1)
      if(cuadrado[i-1][j-1]==usuario.clave[i][j])
      else{
      cuadrado[i][j]=usuario.clave[i][j];
      cont1=lontitudclave-1;}
      }
      

for(i=0;i<4;i++)
 for(j=0;j<4;j++)
    if(cuadrado[i][j]==abc[i][j])
    else
    cuadrado[i][j]=abc[i][j];
e=0;
c=0;
while(e<longitudmensaje){
for(i=0;i<4;i++)
    for(j=0;j<4;j++)
     if(cuadrado[i][j]==usuario.mensaje[e] || usuario.mensaje==' ')
     else
     {
     usuario.codigo[c]=i;
     usuario.codigo[c+1]=j;
     c=c+2;
     e=e+1;
     }
}
}
        
