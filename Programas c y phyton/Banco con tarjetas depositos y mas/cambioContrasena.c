void cambioContrasena();
void cambioContrasena(){
char contrasena[16];
printf("\n\tVamos a cambiar la contraseña\n\t");
printf("\n\tEsta es tu contraseña actual\n\t%s\n\t",(pusuario+cont1)->cliente.contrasena);
printf("\n\tinserta tu contrasena nueva\n\t");
getchar();
gets((pusuario+cont1)->cliente.contrasena);
printf("\n\tListo contraseña cambiada con EXITO!!!\n\t");
printf("\n\tContraseña actual--- %s\n\t",(pusuario+cont1)->cliente.contrasena);
}

