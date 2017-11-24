#include <stdio.h>
#include <stdlib.h>

int main()
{

    int uno;
    int due;


    printf("Inserisci un numero \n");
    scanf("%d", &uno );

    printf("Inserisci un numero \n");
    scanf("%d", &due );


    int tre = (uno + due ) / 2;

    printf("Il risultato è %d \n", &tre);

    return 0;
}
