#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a, b, c;

    printf("Inserisci primo numero \n");
    scanf("%d", &a);

    printf("Inserisci secondo numero \n");
    scanf("%d", &b);

    printf("Inserisci terzo numero \n");
    scanf("%d", &c);

    if (a > b)
    {
        if (a > c) printf("il numero maggiore è %d \n", a);
        else printf("Il numero maggiore è %d \n", c);

    } else {

        if (b > c) printf("Il numero maggiore è %d \n", b);
        else printf("Il numero maggiore è %d \n", c);

    }

    return 0;
}
