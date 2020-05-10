#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dim;
    printf("inserisci la quantita' di numeri da inserire: ");
    scanf("%d", &dim);
    int v1[dim], i, i2, n, vnum[dim], max=0;
    for(i=0; i<dim; i++)
    {
        printf("Inserisci l'elemento %d: ", i+1);
        scanf("%d", &v1[i]);
        if(v1[i]>max)
            max=v1[i];
    }
    int vquant[max];

    for(i=0; i<=max; i++)
    {
        vquant[i]=0;
    }
    for(i=0; i<dim; i++)
    {
        vquant[v1[i]]++;
    }
    for(i=0; i<=max; i++)
    {
        if(vquant[i]!=0)
            printf("\nIl numero %d e' presente %d volte", i, vquant[i]);
    }

}
