#include <stdio.h>
#include <stdlib.h>

int main()
{
    int argomento;
    int b;

    printf("Inserisci un numero intero (positivo o negativo): \n");
    scanf("%d", &argomento);

    if (argomento > 0) {

        printf("Il modulo del numero inserito e': %d \n", argomento);

    } else {

        b = - argomento;
        printf("Il modulo del numero negativo inserito e': %d", b);

    }

    return 0;
}
