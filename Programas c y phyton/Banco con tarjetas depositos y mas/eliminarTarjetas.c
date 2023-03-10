void eliminarTarjetas();
void eliminarTarjetas(){
int num=0;
char contrasena[4];
int e=0,cop1=0;
int resp1=0;
printf("\n\tBien vamos a eliminar tarjetas\n\tEstas son las que tienes en tu cuenta\n\t");
tarjetasEnCuenta();
printf("\n\tIngresa el numero unico de la tarjeta a eliminar\n\t");
scanf("%d",&num);
for(e=0;e<=numTarjetas;e++){
   if((ptarjetas+e)->numUsuario==(pusuario+cont1)->cliente.numUsuario) 
             if((ptarjetas+e)->numTarjeta==num){
                printf("\n\tTarjeta encontrada\n\t");
                printf("\n\tDame su contraseña\n\t");
                getchar();
                gets(contrasena);
                cop1=strlen((ptarjetas+e)->contrasena);
                for(cont=0;cont<=cop1;cont++){
                    if((ptarjetas+e)->contrasena[cont]!=contrasena[cont]){
                         system("clear");
			 resp1=1;
                         //printf("\n\tcontraseña incorrecta\n\t");
                         respMenu=0;
		         break;
			
	            }
	            if(cont==cop1){
                         printf("\n\tcontraseña correcta\n\tTarjeta eliminada\n\t");
			 (ptarjetas+e)->cancelado=1;
			 (pusuario+cont1)->cliente.numTarjetas--;
			 resp1=2;
		    }
	        }
               
              }
 if(resp1==1)
     break;   
          }
if(resp1==0){	   
printf("\n\tNumero unico no encontrado\n\t");
}
		  
if(resp1==1)
printf("\n\tContrasena  incorecta\n\t");
}
