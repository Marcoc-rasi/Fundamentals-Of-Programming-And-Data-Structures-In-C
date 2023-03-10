void depositarAMiCuenta();
void depositarAMiCuenta(){
float deposito=0;
printf("\n\tVamos a depositar a tu cuenta\n\t");
printf("\n\tEste es tu dinero en la cuenta\n\t%.2f\n\t",(pusuario+cont1)->cliente.dinero);
printf("\n\tCuanto dinero vas a depositar\n\t");
scanf("%f",&deposito);
(pusuario+cont1)->cliente.dinero=(pusuario+cont1)->cliente.dinero+deposito;
printf("\n\tEste es tu dinero con tu dpossito en la cuenta\n\t%.2f\n\t",(pusuario+cont1)->cliente.dinero);
}


