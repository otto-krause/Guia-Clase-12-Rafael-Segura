#include <stdio.h>
#include <stdlib.h>

int numero();

int main()
{
    int a=0, b=0;

    printf ("Ingrese el primer valor: ");
    a=numero();
    printf ("Ingrese el segundo valor: ");
    b=numero();
    system ("cls");
    printf ("los valores ingresados fueron:\n%d \n%d", a, b);
    return 0;
}
int numero(){
    int num=0;
    scanf ("%d",&num);
    return num;

}
