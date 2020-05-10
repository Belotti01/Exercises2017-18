#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l, c, cc;
    printf("Inserisci la lunghezza del lato del quadrato\n");
    scanf("%d", &l);
    for(c=1; c<=l; c++)
    {
        printf("\n");
        for(cc=1; cc<=l; cc++)
        {
           printf("* ");
        }
    }
}
