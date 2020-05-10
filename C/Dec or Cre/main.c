#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dec=1, cre=1, min, max, count, n, hi, lo;
    printf("\nInserisci il numero min di valori: ");
    scanf("%d", &min);
    fflush(stdin);
    printf("\nInserisci il numero max di valori: ");
    scanf("%d", &max);
    fflush(stdin);
    for(count=0; count<max; count++)
    {
        printf("\nInserisci un numero [0 per fermare il programma]: ");
        scanf("%d", &n);
        fflush(stdin);
            if(n==0)
                if(count>=min)
                    count=max;
            if(n>lo && lo!=0)
                dec=0;
            if(n<hi && hi!=0)
                cre=0;
            if(n<lo || lo==0)
                lo=n;
            if(n>hi || hi==0)
                hi=n;
    }
    if(dec==1)
        printf("\nI numeri inseriti sono in ordine decrescente");
    else if(cre==1)
        printf("\nI numeri inseriti sono in ordine crescente");
    else printf("\nI numeri non sono ordinati ne' in ordine crescente ne' decrescente");
    return 0;
}
