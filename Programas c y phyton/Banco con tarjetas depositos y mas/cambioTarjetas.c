void cambioTarjetas();
void cambioTarjetas(){
char contrasena[4];
int num=0;
int resp=0;
int e=0;
if((pusuario+cont1)->cliente.numTarjetas==0) 
   printf("\n\tLo sentimos no tienes tarjetas\n\t");
else{
printf("\n\tBien vamos a cambiar de contrasena a una de tus tarjetas\n\t");
printf("\n\tEstas son las tarjetas en tu cuenta\n\t");
tarjetasEnCuenta();
printf("\n\tIngresa el numero unico de la tarjeta a la que se le va a cambiar la contraseña\n\t");
scanf("%d",&num);
for(e=0;e<=numTarjetas;e++){
   if((ptarjetas+e)->numUsuario==(pusuario+cont1)->cliente.numUsuario) 
             if((ptarjetas+e)->numTarjeta==num){
		resp=1;
                printf("\n\tTarjeta encontrada\n\t");
                printf("\n\tDame su contraseña nueva\n\t");
                getchar();
                gets((ptarjetas+e)->contrasena);
                printf("\n\tContrasña cambiada con EXITO!!\n\t");
		printf("\n\tContraseña actual--- %s\n\t",(ptarjetas+e)->contrasena);
		tarjetasEnCuenta();
		break;}

if(resp==0 && e==numTarjetas)
printf("\n\tNumero unico no encontrado\n\t");
}}}
