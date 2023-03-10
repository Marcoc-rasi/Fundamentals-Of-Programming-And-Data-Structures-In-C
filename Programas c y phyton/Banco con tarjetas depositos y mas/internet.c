void internet();
void internet(){
getchar();
printf("\n\tBienvenido al servicio de pago de telefono\n\t");
printf("\n\tLos pagos se envian a\n\t");
printf("\n\t#########INTERNETUNAM#######\n\t");
srand(time(NULL));
saldo=rand()%500;
printf("\n\tsaldo pendiente a pagar =   %d   \n\t",saldo);
printf("\n\tdinero en cuenta =   %f  \n\t",(pusuario+(pusuario->cliente.numUsuario))->cliente.dinero);
if((pusuario+(pusuario->cliente.numUsuario))->cliente.dinero <=0){
   printf("\n\tLo sentimos por el momento no puedes hacer el pago tu saldo es insuficiente\n\tPresione enter para continuar\n\t");
   getchar();}
else{
respMenu=0;	
while(respMenu!=2){
printf("\n\tDesea realizar el pago\n\t");
printf("\n\t1)Si\n\t2)No\n\t");
scanf("%d",&respMenu);
getchar();
	switch(respMenu){
		case 1:
			(pusuario+(pusuario->cliente.numUsuario))->cliente.dinero=(pusuario+(pusuario->cliente.numUsuario))->cliente.dinero-saldo;
			printf("\n\tBien pago realizado con exito tu saldo actual es %f \n\tPresiona enter para continuar\n\t",(pusuario+(pusuario->cliente.numUsuario))->cliente.dinero);
			getchar();
			respMenu=2;
			break;
	    case 2:
			respMenu=2;
	    default:
			 system("clear");
			 printf("\n\tLo sentimos  opcion incorrecta\n\t");}
    }}
respMenu=0;
saldo=0;    			
}
