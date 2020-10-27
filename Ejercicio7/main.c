#include <stdio.h>
#include <stdlib.h>

int numeros();

int main()
{
    int bool3=0, a=0, b=0;

    printf("Ingresa el primer numero ");
    scanf("%d",&a);
    printf("Ingresa el segundo numero ");
    scanf("%d",&b);
    bool3 = numeros(a,b);

    if (bool3!=0){
        if (bool3==1)
            printf("%d es mayor que %d",a,b);
        else
            printf("%d es mayor que %d",b,a);
    }
    else
        printf("Los numeros son iguales");
    return 0;
}

int numeros(int a, int b)
{
    if (a!=b){
        if (a>b)
            return 1;
        else
            return 2;
    }
    else
        return 0;
}
