#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    const int N_ELEM=10;
    int elem[N_ELEM], cont, quant=0, input, last=0;
    for(cont=1; cont<=N_ELEM; cont++)
    {
        elem[cont-1]=rand()%10;
        printf("\nrandomnumber %d: %d", cont, elem[cont-1]);
    }
    printf("\n\nInserisci il numero da ricercare compreso tra 0 e 9: ");
    scanf("%d", &input);
    for(cont=1; cont<=N_ELEM; cont++)
    {
        if(elem[cont]==input)
        {
            quant++;
            last=cont+1;
        }
    }
    printf("\nIl numero %d e' stato trovato %d volte e per l'ultima volta alla posizione %d", input, quant, last);
    return 0;
}
