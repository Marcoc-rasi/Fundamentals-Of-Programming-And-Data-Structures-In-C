#include<stdio.h>
#include<string.h>
#include"pedidoDatos.c"
#define p printf
#define s scanf
struct nodo cifrado(){
struct nodo usuario;
int longitudclave=0,contclave=0,contcesar=0,longitudmensaje,i=0,j=0,c=0;
char cesar[25],clavebien[25],abc[4][4]={'a','b','c','d','e','f','g','h','i','j',"kq",'n','l','o','p','r','s','t','u','v','w','x','y','z'};
p("\n\n\thola este programa usa el cuadrado de polibio para cifrar un codigo, estara cifrada tu palabra clave al inicion del cuadrado, por eso tu palabra clave tiene que ser menor o igual a 5 letras\n\t");

p("\n\t que palabra clave deseas usar\n\t");
gets(usuario.clave);
longitudclave=strlen(usuario.clave); 

p("\n\n\tdame el mensaje completo que quieres cifrar\n\t");
gets(usuario.mensaje);
longitudmensaje=strlen(usuario.mensaje);
     while(contclave>0){
        for(i=0;i<longitudclave;i++){
            if(strchr(clavebien,clave[i])==NULL)
               clavebien[i]=clave[i];}
            contclave=longitudclave-1;}

   for(i=0;i<longitudclave;i++)
       if(clavebien[i]==' ')
       else{
       cesar[i]=clavebien[i];
       c++;}



     for(i=0;i<25;i++){
        for(j=0;j<25;j++){
             if(cesar[i]==abc[j])
                contcesar++;
             if(contcesar==0)
               cesar[i]=abc[j];}
        contcesar=0;}

while(lontigitudmensaje>0){
   for(i=0;i<25;i++)
     if(usuario.mensaje[c]==' ')
     if(usuario.mensaje[c]==cesar[i]){
        usuario.codigo[c]=cesar[i];
        c++;
        lontigudmensje=longitudmensaje-1;}
        i=25;}
}

     
    
     


        
