void entradaUsuario();
void entradaUsuario(){
char usuario[30];
char contrasena[16];
int cop=0,cop1=0;
int cont=0,resp=0,i=0;
printf("\n\t1)INGRESAR DATOS\n\t2)SALIR\n\t");
scanf("%d",&respMenu);
switch(respMenu){
case 1:
       system("clear");
       printf("\n\tingresa los siguientes datos(si son incorrectos te sacaremos al inicio)\n\t");
       printf("\n\tUsuario(nombre)\n\t");
       getchar();
       gets(usuario);
       for(i=0;i<numUsuario;i++){
       cop=strlen((pusuario+i)->cliente.nombre);
       resp=0;
            for(cont=0;cont<=cop;cont++){
               if((pusuario+i)->cliente.nombre[cont]!=usuario[cont]){
                  system("clear");
                  if(i==numUsuario)
                  printf("\n\tusuario no encontrado\n\t");
                  resp=1;
                  respMenu=0;}}
       if(resp==0){
       printf("\n\tusuario encontrado\n\t");
       cont1=i;
       i=numUsuario;}}
             

            if(resp==0){
               printf("\n\tcontraseña\n\t");
               gets(contrasena);
               cop1=strlen((pusuario+cont1)->cliente.contrasena);
               for(cont=0;cont<=cop1;cont++){
                  if((pusuario+cont1)->cliente.contrasena[cont]!=contrasena[cont]){
                     system("clear");
                     printf("\n\tcontraseña incorrecta\n\t");
                     resp=2;
                     respMenu=0;}}}
        if(resp==0){   
          printf("\n\t########Acceso autorizado#######\n\t");
          respMenu=6;}
          i=0;
          //cont1=0;
          resp=0;
    
       break;
case 2:
       respMenu=5;
       break;
default:
       printf("\n\topcion incorrecta\n\t");
       respMenu=5;

}           
}
