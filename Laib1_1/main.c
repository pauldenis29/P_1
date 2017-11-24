#include <stdio.h>
#include <stdlib.h>

int main()
{

    int dato1;
    char carattere;
    float dato_fattoriale;

    printf("Inserisci un carattere e un numero intero: ");
    scanf("%c%d", &carattere, &dato1);

    printf("Hai inserito il carattere %c il numero %d\n", carattere, dato1);

    return 0;
}
