#include <stdio.h>
#include <stdlib.h>

//Puoi usare la formula C = 5/9(F - 32) per convertire i Fahrenheit in Celsius, e 9/5C = F - 32 per la conversione opposta.

    //c = 5/9 * (f - 32);
    //f = (9/5 * c) + 32;

int main()

{
    char n;
    float n2, c, f;

    printf("Inserire la scala di conversione di provenienza C/F (Celsius/Fahrenheit) e i gradi a essa corrispondenti: \n");
    scanf("%c%f", &n, &n2);

    if (n == 'c' || n == 'C') {

        f = (9 / 5.f * n2) + 32;
        printf("La temperatura in gradi Fahrenheit e' pari a: %.2f (Celsius = %.2f) \n", f, n2);

    } else if (n == 'f' || n == 'F'){

            c = (5 / 9.f) * (n2 - 32);
            printf("La temperatura in gradi Celsius e' pari a: %.2f (Fahrenheit = %.2f) \n", c, n2);

        } else {

            printf("Inserire un carattere valido! (scala conversione (C/F) + temperatura (gradi)) \n");

        }

    return 0;

}
