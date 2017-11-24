#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a;
    int b;

    printf("Inserire primo numero: \n");
    scanf("%d", &a);

    printf("Inserire secondo numero: \n");
    scanf("%d", &b);

    int c = (a + b) / 2;

    printf("Il risultato e': %d \n", c);

    return 0;
}
