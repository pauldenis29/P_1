#include <stdio.h>
#include <stdlib.h>

int main()
{
    int operand1, operand2, result;

    printf("Inserire il primo numero da sommare: \n");
    scanf("%d", &operand1);

    //scanf("%d+%d", &operand1,&operand2);

    printf("Inserire il secondo numero da sommare: \n");
    scanf("%d", &operand2);

    result = operand1 + operand2;

    printf("il risultato della somma e' %d: \n", result);

    return 0;
}
