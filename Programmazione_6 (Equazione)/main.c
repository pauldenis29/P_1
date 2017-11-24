#include <stdio.h>
#include <stdlib.h>

// Calcolare il valore di x dell'equazione di primo grado ax+b=0


int main()
{
    float a, b, x;

    printf("Inserire il valore del coefficiente a: \n");
    scanf("%f", &a);

    printf("Inserire il valore del coefficiente b: \n");
    scanf("%f", &b);

    x = -b/a;

    printf("Il valore dell'incognita x e' pari a: %.2f \n", x);

    return 0;
}
