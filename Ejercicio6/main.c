#include <stdio.h>
#include <stdlib.h>

float frac();

int main()
{
    int num=0;
    float octva=0;
    printf("Ingrese un numero entero ");
    scanf("%d",&num);
    octva = frac(num);
    printf("La octava parte de %d  es %.1f", num, octva);
    return 0;
}
float frac(int num)
{
    return num/8;
}
