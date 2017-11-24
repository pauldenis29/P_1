#include <stdio.h>
#include <stdlib.h>

/* d = "numero divisori" (la prima volta che entra nel ciclo divide per 1 (i = 1),
poi se incontra più di due divisori la condizione c == 2 esclude eventuali numeri primi (true)*/

// Il ciclo do-while a differenza del ciclo "while", esegue prima tutte le istruzioni del do per POI verificare la condizione contenuta nel while!
// Quindi, nonostante l'if presente nel do venga soddisfatto, verrà comunque eseguita l'istruzione i++

int main()
{
    int num_utente;
    int divisori = 0;
    int flag = 1;

    printf("Inserisci un numero intero: \n");
    scanf("%d", &num_utente);

    do {
        if(num_utente % flag == 0)
        {
            divisori++;
        }
            flag++;

    } while(flag <= num_utente);

    if(divisori == 2) {

        printf("Il numero %d e' primo", num_utente);

    } else {

        printf("Il numero %d non e' primo, e ha %d divisori", num_utente, divisori);

    }

    return 0;

}


/*
int n, c, e;

    printf("Inserisci un numero \n");
    scanf("%d", &n);

    for(c = 2, e = 0; c < n; c++)  //c ed e sono inizlizzazioni di variabile; c < n è la condizione che deve "rispettare il ciclo"; c++ ogni giro del for c aumenta di 1 fino a diventare grande "quasi" quanto n (si ricorda c<n)
    {
        if(n % c == 0)
            e++; //può essere considerato un 'flag' in quanto ogni volta che si ripete il ciclo 'e' aumenta di 1
    }

    if(e == 0)
    {
            printf("Il numero %d e' primo. \n", n);

    } else {

        printf("Il numero %d ha %d divisore/i, quindi non e' numero primo", n, e);

    }
*/
