//En un municipio del estado de mexico se desea elegir a un nuevo representante vecinal. Hay cuatro contendientes, que registraran sus votos obtenidos en cuatro casillas principales
//Elabore un progranma que indique el nombre del candidato ganador y el total de sus votos.

#include<stdio.h>
#define p printf
#define s scanf
main()
{
int votos[4][4],i,j,suma[4]={0},max_votos,win;
char cand[4][20];
system("clear");
p("\n\n\tIngrese los nombres de los candidatos: ");
   for(i=0;i<4;i++)
   {
       p("\n\n\tCandidato %d: ",i+1);
       gets(cand[i]);
       system("clear");
   }
p("\n\n\tRegistre los votos obtenidos: ");
   for(i=0;i<4;i++)
   {
       for(j=0;j<4;j++)
       {
           p("\n\n\tPara %s ingrese los votos de la casilla %d: ",cand[i],j+1); 
           s("%d",&votos[i][j]);
           suma[i]+=votos[i][j];
       }
   system("clear");
   }
max_votos=suma[0];
    for(i=0;i<4;i++)
        if (max_votos<suma[i])
        {
            max_votos=suma[i];
            win=i;
        }
p("\n\n\tEL GANADOR ES %s CON UN TOTAL DE: %d VOTOS\n\n\n",cand[win],max_votos);
}
