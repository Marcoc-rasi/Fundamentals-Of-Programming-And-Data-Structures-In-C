void nuevoUsuario();
void nuevoUsuario(){
int i=0;
printf("\n\tBien vamos a empezar gracias por elejir nuestro banco\n\t");
printf("\n\tTenemos tres tipos de usuarios\n\t1)Esmeralda\n\t2)Golden\n\tPlatinum\n\t");
printf("\n\tDeacuerdo a la cantidad de dinero en la cuenta se le asignara su usuario\n\t");
printf("\n\t0-1,000------Platino\n\t1,000-100,000-----Golden\n\t100,000-INFINITO------Esmeralda\n\t");
printf("\n\tPrimero crearemos un usuario con contraseña\n\t");
printf("\n\tNombre de usuario\n\t");
getchar();
if(numUsuario==0){
pusuario=(struct nodo1 *)malloc(sizeof(struct nodo1));
gets(pusuario->cliente.nombre);
printf("\n\tContraseña, puede contener caracteres y numeros\n\t");
gets(pusuario->cliente.contrasena);
printf("\n\tEmpezaras tu cuenta en  0 pesos\n\tPresiona enter para continuar\n\t");
getchar();
respMenu=0;
pusuario->cliente.numUsuario=0;
numUsuario++;
}
else{
pusuario2=(struct nodo1 *)realloc(pusuario,sizeof(struct nodo1));
gets((pusuario+numUsuario)->cliente.nombre);
printf("\n\tContraseña, puede contener caracteres y numeros\n\t");
gets((pusuario+numUsuario)->cliente.contrasena);
printf("\n\tEmpezaras tu cuenta en 0 pesos\n\t");
respMenu=0;
(pusuario+i)->cliente.numUsuario=numUsuario;
cont1=numUsuario;
numUsuario++;
}}
