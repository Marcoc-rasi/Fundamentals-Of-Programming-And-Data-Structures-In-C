void estadoDeCuenta();
void estadoDeCuenta(){
int i=0;
printf("\n\t#########ESTADO DE CUENTA#######\n\t");
if((pusuario+cont1)->cliente.dinero<1000)
printf("\n\t1)Tipo de Cuenta----Platino \n\t");
if((pusuario+cont1)->cliente.dinero>1000 && (pusuario+cont1)->cliente.dinero<100000)
printf("\n\t1)Tipo de Cuenta----Golden \n\t");
if((pusuario+cont1)->cliente.dinero>100000)
printf("\n\t1)Tipo de Cuenta----Esmeralda \n\t");
printf("\n\t2)Nombre----%s\n\t",(pusuario+cont1)->cliente.nombre);
printf("\n\t3)Contraseña------%s\n\t",(pusuario+cont1)->cliente.contrasena);
printf("\n\t4)Dinero-----%.2f\n\t",(pusuario+cont1)->cliente.dinero);
printf("\n\t5)Numero de tarjetas------%d\n\t",(pusuario+cont1)->cliente.numTarjetas);
}
