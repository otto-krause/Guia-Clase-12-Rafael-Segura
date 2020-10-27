#include <stdio.h>
#include <stdlib.h>

int total();

int main()
{
    int i, rt=0, r[5];
    printf("Ingresar los valores de las 5 resistsencias: ");
    for(i=0;i<5;i++){
        r[i]=total();
        rt = rt + r[i];
    }

    printf("La suma de las resistencias:");
    for(i=0;i<5;i++){
        printf(" %d,",r[i]);
    }
    printf(" \n Es: %d",rt);

    return 0;
}
int total()
{
    int resistencia=0;
    scanf("%d",&resistencia);
    return resistencia;
}
