#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"variables.c"
#include"menuentrada.c"
#include"menumanejodecuenta.c"
#include"menuprincipal.c"
#include"menupagodeservicios.c"
#include"menutarjetas.c"
#include"estadodecuenta.c"
#include"entradaUsuario.c"
#include"nuevousuario.c"
#include"creartarjetas.c"
#include"tarjetasencuenta.c"
#include"telefono.c"
#include"luz.c"
#include"internet.c"
#include"cable.c"
#include"tarjetas.c"
#include"eliminarTarjetas.c"
#include"depositarAMiCuenta.c"
#include"cambioContrasena.c"
#include"cambioTarjetas.c"
main(){
    while(respMenu!=3){
         system("clear");
         menuEntrada();
         switch(respMenu){
               case 1:
                      system("clear");
                      respMenu=0;
                     while(respMenu==0){
                     entradaUsuario();}
                      while(respMenu!=5){
                            menuPrincipal();
                            switch(respMenu){
                                  case 1:
                                         system("clear");
                                         estadoDeCuenta();
                                         break;
				  case 2:
                                         system("clear");
					 while(respMenu!=4){
                                         menuManejoDeCuenta();
				    	 switch(respMenu){
						case 1:
							system("clear");
                                                        cambioContrasena();
					                break;

                                                case 2:
							system("clear");
                                                        cambioTarjetas();
					                break;
						case 3:
							system("clear");
							depositarAMiCuenta();
							break;
						default:
							printf("\n\trespom=%d\n\t",respMenu);
							if(respMenu!=4)
                                                        printf("\n\tlo sentimos respuesta incorrecta\n\t");
                                         }}
					 system("clear");
					 respMenu=6;
                                         break;
				  case 3:
                                         system("clear");
					 while(respMenu!=4){
                                         menuTarjetas();
                                         switch(respMenu){
						case 1:
							system("clear");
                                                        tarjetasEnCuenta();
					                break;
                                                case 2:
							system("clear");
                                                        crearTarjetas();
					                break;
                                                case 3:
							system("clear");
                                                        eliminarTarjetas();
					                break;
						default:
							if(respMenu!=4)
                                                        printf("\n\tlo sentimos respuesta incorrecta\n\t");
                                         }}
					 system("clear");
					 respMenu=6;
				         break;

				  case 4:
				         system("clear");
                                         menuPagoDeServicios();
					 respMenu=0;
                                         while(respMenu!=6){
 						switch(respMenu){
						case 1:
							system("clear");
							telefono();
							break;
						case 2:
							system("clear");
							luz();
							break;
						case 3:
							system("clear");
							cable();
							break;
						case 4:
							system("clear");
							internet();
							break;
						case 5:
							system("clear");
							tarjetas1();
							break;
						default:system("clear");
							printf("\n\tLo sentimos respuesta incorrecta\n\t");}
				          system("clear");
				          menuPagoDeServicios();
					  scanf("%d",&respMenu);	}
                                         break;
				  default:
                                          if(respMenu!=5)
                                          printf("\n\topcion incorrecta intente de nuevo\n\t");
                                          system("clear");
                             }
                       }

                      respMenu=0;
                      break;
               case 2:
                      system("clear");
                      nuevoUsuario();
                      system("clear");
                      while(respMenu!=5){
                      menuPrincipal();
		      switch(respMenu){
                                  case 1:
                                         system("clear");
                                         estadoDeCuenta();
                                         break;
				  case 2:
                                         system("clear");
					 while(respMenu!=4){
                                         menuManejoDeCuenta();
				    	 switch(respMenu){
						case 1:
							system("clear");
                                                        cambioContrasena();
					                break;

                                                case 2:
							system("clear");
                                                        cambioTarjetas();
					                break;
						case 3:
							system("clear");
							depositarAMiCuenta();
							break;
						default:
							printf("\n\trespom=%d\n\t",respMenu);
							if(respMenu!=4)
                                                        printf("\n\tlo sentimos respuesta incorrecta\n\t");
                                         }}
					 system("clear");
					 respMenu=6;
                                         break;
				  case 3:
                                         system("clear");
					 while(respMenu!=4){
                                         menuTarjetas();
                                         switch(respMenu){
						case 1:
							system("clear");
                                                        tarjetasEnCuenta();
					                break;
                                                case 2:
							system("clear");
                                                        crearTarjetas();
					                break;
                                                case 3:
							system("clear");
                                                        eliminarTarjetas();
					                break;
						default:
							if(respMenu!=4)
                                                        printf("\n\tlo sentimos respuesta incorrecta\n\t");
                                         }}
					 system("clear");
					 respMenu=6;
				         break;

				  case 4:
				         system("clear");
                                         menuPagoDeServicios();
					 respMenu=0;
                                         while(respMenu!=6){
 						switch(respMenu){
						case 1:
							system("clear");
							telefono();
							break;
						case 2:
							system("clear");
							luz();
							break;
						case 3:
							system("clear");
							cable();
							break;
						case 4:
							system("clear");
							internet();
							break;
						case 5:
							system("clear");
							tarjetas1();
							break;
						default:system("clear");
							printf("\n\tLo sentimos respuesta incorrecta\n\t");}
				          system("clear");
				          menuPagoDeServicios();
					  scanf("%d",&respMenu);	}
                                         break;
				  default:
                                          if(respMenu!=5)
                                          printf("\n\topcion incorrecta intente de nuevo\n\t");
                                          system("clear");
                             }

                           }
                      respMenu=0;
                      break;
                      /*switch(respMenu){
                                  case 1:
                                         system("clear");
                                         estadoDeCuenta();
                                         break;
				  case 2:
                                         system("clear");
                                         menuManejoDeCuenta();
                                         break;
				  case 3:
                                         while(respMenu!=4){
					 system("clear");
                                         menuTarjetas();}
                                         respMenu=0;
					 break;
				  case 4:
                                         menuPagoDeServicios();
                                         break;
				  default:
                                          if(respMenu!=5)
                                          printf("\n\topcion incorrecta intente de nuevo\n\t");
                                          system("clear");
                             }
                      }
		      respMenu=0;
		      break;*/
               default:

                      if(respMenu!=3){
                      printf("\n\topcion incorrecta intente de nuevo\n\t");
                      respMenu=0;
                      system("clear");}
               }
         system("clear");
         }
}
