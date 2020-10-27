#include <stdio.h>
#include <stdlib.h>

int perimetro();
int area();

int ar, p;

int main()
{
    int a=0, b=0;
    printf("Ingrese el largo del rectangulo ");
    scanf("%d",&a);
    printf("Ingrese la altura del rectangulo ");
    scanf("%d",&b);
    p = perimetro(a,b);
    ar = area(a,b);

    printf("El perimetro del rectangulo es: %d",p);
    printf("\n Y el area es: %d",ar);
    return 0;
}
int perimetro(int a, int b)
{
    return 2*a+2*b;
}
int area(int a, int b)
{
    return a*b;
}
