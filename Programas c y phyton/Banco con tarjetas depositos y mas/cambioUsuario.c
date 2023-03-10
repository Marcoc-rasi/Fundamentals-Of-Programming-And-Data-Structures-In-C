void cambioUsuario();
void cambioUsuario(){
int resp=0,cont2=0,cont3=0,i=0,cop=0;
printf("\n\tVamos a cambiar tu usuario\n\t");
printf("\n\tEsta es tu usuario actual\n\t%s\n\t",(pusuario+cont1)->cliente.nombre);
printf("\n\tinserta tu nuevo usuario\n\t");
getchar();
gets((pusuario+cont1)->cliente.nombre);
for(i=0;i<numUsuario;i++){
       cop=strlen((pusuario+i)->cliente.nombre);
       resp=0;
            for(cont=0;cont<=cop;cont++){
               if((pusuario+i)->cliente.nombre[cont]!=(pusuario+cont1)->cliente.nombre[cont]){
                  system("clear");
                  if(i==numUsuario)
                  printf("\n\tusuario no encontrado\n\t");
                  resp=1;
                  respMenu=0;}}
       if(resp==0){
       printf("\n\tusuario encontrado\n\tporfavor elige otro");
       gets((pusuario+cont1)->cliente.nombre);
       cont1=i;
       
       i=0;}}





if(resp==1){
printf("\n\tListo usuario cambiado con EXITO!!!\n\t");
printf("\n\tUsuario actual--- %s\n\t",(pusuario+cont1)->cliente.nombre);
}}

