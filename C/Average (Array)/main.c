#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont, quant;
    float media, somma;

    printf("Inserisci il numero di voti di cui vuoi fare la media: ");
    scanf("%d", &quant);
    float voti[quant];

    for(cont=0; cont<quant; cont++)
    {
        do
        {
            printf("\nInserisci il voto numero %d: ", cont+1);
            fflush(stdin);
            scanf("%f", &voti[cont]);
        }while(voti[cont]<1 || voti[cont]>10);
        somma=somma+voti[cont];
    }

    media=somma/cont;
    printf("La media vale %.2f", media);
}
