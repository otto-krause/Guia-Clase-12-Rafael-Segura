#include <stdio.h>
#include <stdlib.h>

float presion();

int main()
{
    int F=0, S=0;
    printf("Ingresar la fuerza ");
    scanf("%d",&F);
    printf("Ingresar la superficie ");
    scanf("%d",&S);
    printf("La presion es: %.1f",presion(F,S));
    return 0;
}
float presion(int F,int S)
{
    return F/S;
}
