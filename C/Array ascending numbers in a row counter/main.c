#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dim,i;
    printf("> Inserisci la lunghezza del vettore: ");
    scanf("%d", &dim);

    int n[dim], c=0, max=0, max_pos=0;
    printf("\n> Inserisci i numeri che compongono l'array: ");
    for(i=0; i<dim; i++)
    {
        scanf("%d", &n[i]);
    }

    for(i=1; i<dim; i++)
    {
        if(n[i-1]<n[i]) c++;
        else
        {
            c=1;
        }
        if(c>max)
        {
            max=c;
            max_pos=i-c+1;
        }
    }
    printf("> La sequenza ");
    for(i=0; i<max; i++) printf("%d, ", n[max_pos+i]);
    printf("formata da %d numeri, e' la sequenza in ordine crescente piu' lunga contenuta nell'array", max);
    return 0;
}
