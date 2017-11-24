#include <stdio.h>
#include <stdlib.h>

int main()
{
    float uno;

    printf("Inserisci il primo numero\n");
    scanf("%f", &uno);

    float due;

    printf("Inserisci il secondo numero\n");
    scanf("%f", &due);

    float tre;

    printf("Inserisci il terzo numero\n");
    scanf("%f", &tre);


    float media = (uno + due + tre)/3;


    printf("il risultato della media è: %f", media);


    return 0;
}
