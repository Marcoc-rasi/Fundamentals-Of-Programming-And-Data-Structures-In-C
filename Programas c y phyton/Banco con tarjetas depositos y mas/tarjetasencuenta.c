void tarjetasEnCuenta();
void tarjetasEnCuenta(){
int i=0;
int e=0;
if((pusuario+cont1)->cliente.numTarjetas==0)
   printf("\n\tNo tienes tarjetas en cuenta\n\t");
else{
printf("\n\t########TARJETAS EN CUENTA##########\n\t");
         for(e=0;e<numTarjetas;e++){ 
             if((pusuario+cont1)->cliente.numUsuario==(ptarjetas+e)->numUsuario){
		if((ptarjetas+e)->cancelado!=1){
                   printf("\n\ttarjeta numero #%d\n\t",e+1);
                   printf("\n\tNumero unico de la tarjeta %d\n\t",(ptarjetas+e)->numTarjeta);
                   printf("\n\tContraseña tarjeta %s\n\t",(ptarjetas+e)->contrasena);
		 }
              }
          }
}
}
