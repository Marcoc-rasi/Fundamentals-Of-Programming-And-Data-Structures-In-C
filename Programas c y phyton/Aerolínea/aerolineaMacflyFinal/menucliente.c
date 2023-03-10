int menucliente(){
    int resp=0;
    printf("\n\t##########BIENVENIDO CLIENTE##########");
    printf("\n\nSeleccione una de las siguientes opciones para continuar\n");
    printf("\n\t1)Venta de boletos\n\t2)Vuelos por partir\n\t3)Chequeo de boleto");
    printf("\n\t4)Cancelacion de boleto\n\t5)Cambio de vuelo\n\t6)Salir\n\t");
    scanf("%d",&resp);
    return resp;
}
