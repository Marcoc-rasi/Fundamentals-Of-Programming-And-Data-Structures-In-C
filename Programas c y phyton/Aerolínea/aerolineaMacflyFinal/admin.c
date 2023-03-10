#include <string.h>
int admin(){
    char contra[4],con[]="dios";
    int e=0;
    system("cls");
    printf("\n\tDame la contrasena\n\t");
    getchar();
    gets(contra);
    e=strcmp(con,contra);
    if(e==0)
        return 0;
    else
        return 1;
}
