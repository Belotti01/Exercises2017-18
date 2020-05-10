#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int TRY=7, MIN=1, MAX=99;
    int n, c=7, ins;
    do
    {
        printf("P1: Inserisci il numero da indovnare, compreso tra %d e %d: \n", MIN, MAX);
        scanf("%d", &n);
        system("CLS");
    }while(n<MIN || n>MAX);
    printf("Numero: ");
    for(c=TRY; c>0; c--)
    {
        fflush(stdin);
        scanf("%d", &ins);
        fflush(stdin);
        if(ins==n)
        {
            printf("\n\nHai indovinato!");
            return 0;
        }
        else
            printf("\nSbagliato! Tentativi rimanenti: %d\nNumero: ", c-1);
    }
    printf("\n\n Hai perso!\n\n");
    return 0;
}
