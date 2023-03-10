void crearTarjetas(void);
void crearTarjetas(){
int i =0;
for(i=0;i<numUsuario;i++){
   if((pusuario+i)->cliente.numTarjetas!=0)
   cont=cont+((pusuario+i)->cliente.numTarjetas);
}
if(cont==0){
	ptarjetas=(struct nodin *)malloc(sizeof(struct nodin));	
	(pusuario+cont1)->cliente.numTarjetas++;
        ptarjetas->numUsuario=(pusuario+cont1)->cliente.numUsuario;
	printf("\n\tvamos a crear una tarjeta se te dara un mumero y tu pondras la contraseña\n\t");
	ptarjetas->numTarjeta=numTarjetas;
	printf("Num tarjeta =%d",ptarjetas->numTarjeta);
	printf("\n\tbien vamos a insertar la contraseña\n\t");
	getchar();
	gets(ptarjetas->contrasena);
	numTarjetas++;
}
else{
	ptarjetas2=(struct nodin *)realloc(ptarjetas,sizeof(struct nodin));
	if(ptarjetas2!=NULL){
	(pusuario+cont1)->cliente.numTarjetas++;
	(ptarjetas+numTarjetas)->numUsuario=(pusuario+cont1)->cliente.numUsuario;
	printf("\n\tvamos a crear una tarjeta se te dara un numero y tu pondras la contraseña\n\t");
	(ptarjetas+numTarjetas)->numTarjeta=numTarjetas;
	printf("Num tarjeta =%d",(ptarjetas+numTarjetas)->numTarjeta);
	printf("\n\tbien vamos a insertar la contraseña\n\t");
	getchar();
	gets((ptarjetas+numTarjetas)->contrasena);
	numTarjetas++;}
	else
	    printf("\n\tno hay memoria para guardar tu nueva tarjeta intenta mas tarde\n\t");
}

}
