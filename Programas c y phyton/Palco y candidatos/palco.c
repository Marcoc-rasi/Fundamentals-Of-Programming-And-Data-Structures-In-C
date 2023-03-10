//En un palco de lujo de un estadio se cuenta con cuatro filas y con cuatro asientos por fila. Se le va a ofrecer a cada asistente un asiento, los que esten diponibles lo indicamos con "D"
//mayuscula, los que esten ocupados con "X" mayuscula. Si la persona elije un lugar disponible se le asigna y se cambia a ocupado, si esta ocupado, le ofrecemos otro. Repita el procedimient
//hasta que el palco este lleno.

#include<stdio.h>
#define s scanf
#define p printf
main()
{
int cont=0,i,j,fil,as;
char palco[5][5]={' ','1','2','3','4',
                  '1','D','D','D','D',
                  '2','D','D','D','D',
                  '3','D','D','D','D',
                  '4','D','D','D','D'};
system("clear");
do
{
p("\n\n\tBienvenido al palco, elija el lugar que desee:\n\n\t");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)   
            p("   %c",palco[i][j]);
        p("\n\t");
    }
p("\n\n\tIndique el numero de fila: ");s("%d",&fil);
p("\n\n\tIndique el numero de asiento: ");s("%d",&as);
    if(palco[fil][as]=='D')
    {
        p("\n\n\tBienvenido, pase Ud. al palco CHAVO");
        palco[fil][as]='X';
        cont++;
    }
    else
        p("\n\n\tPor favor elija un asiento disponible");
system("clear");
}
while(cont<16);
p("\n\n\tDisfrute el evento\n\n\n");
}
