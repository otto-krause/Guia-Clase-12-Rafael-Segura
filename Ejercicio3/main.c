#include <stdio.h>
#include <stdlib.h>

float percmen();

int main()
{
    int m=0, h=0;

    printf("Ingresar el total de mujeres que se presentaron ");
    scanf("%d",&m);
    printf("Ingresar el total de hombres que se presentaron ");
    scanf("%d",&h);

    printf("El %.1f%c son hombres, y el %.1f%c son mujeres.",percmen(m,h),'%',100-percmen(m,h),'%');
    return 0;
}
float percmen(int m, int h)
{
    return h*100/(h+m);
}
