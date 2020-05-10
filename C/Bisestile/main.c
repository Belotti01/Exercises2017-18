#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anno;
    printf("Inserisci l'anno: ");
    scanf("%d", &anno);
    if(anno%4==0)
        if(anno%100==0)
            if(anno%400==400)  printf("\nL'anno inserito e' bisestile");
            else printf("\nL'anno inserito e' bisestile");
        else printf("\nL'anno inserito e' bisestile");
    else printf("\nL'anno inserito non e' bisestile");
    return 0;
}
