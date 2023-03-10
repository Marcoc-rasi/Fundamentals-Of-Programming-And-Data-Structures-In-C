#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int i=0;
    time_t tf,ti;
    double secs=0;
        ti=clock();
        for(i=0;i<100;i++)
            printf("hola");
        tf=clock();
        secs=(double)(tf-ti);
        printf("\n\tTiempo transcurrido %f\n\t",secs);

    return;

}
