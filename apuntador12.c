#include <stdio.h>
#include <stdlib.h>
int i[10],x;
float f[10];
int main (void)
{
    printf("\t\tentero\t\tfloatante\n\n");
    for(x=0; x<10; x++);
    printf("elemento %d:|t%d\t\t%d\n", x, &i[x],&f[x]);
    //tarea medir los ciclos de reloj con apuntadores y sin apuntadores
}