#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a = 5, b = 10, answer = 0;
    // aggiunge 1 a prima di eseguire l'ooperazione
    answer = ++a * b;
    printf("ANswer is %d \n", answer);

    a = 5, b = 10, answer = 0;
    answer= a++ * b;

    printf("Answer %d \n", answer);

    return 0;
}




/* [Verifica se un nome inizia con lalettera m e lo inerisce nella ripsettiva squadra]
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char lastName[20];
    printf("Enter your last name: \n");
    scanf(" %s", lastName); // Le string non necessitano di '&'

    (lastName[0] < 'M') ? printf("Blue team") : printf("Red team");

    return 0;
}
*/





/* [Codice che fa il test per aggiungere la s al plurale (caso di più di 1 amico)]
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int friends;

    printf("Insert number of friends:\n");
    scanf("%d", &friends);

    printf("I have %d friend%s.\n", friends, (friends != 1) ? "s" : "");

    return 0;
}
*/
