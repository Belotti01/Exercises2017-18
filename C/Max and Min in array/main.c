#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, c, max=0, min=0;

    printf("Quanti numeri vuoi inserire?\n");
    scanf("%d", &n);

    int num[n];
    printf("Inserisci i numeri uno ad uno: ");
    for(c=1; c<=n; c++)
    {
        do
        {
            fflush(stdin);
            scanf("%d", &num[c]);
        }while(isalpha(num[c])!=0);
    }
    for(c=1; c<=n; c++)
    {
        if(num[c]>max || max==0)
            max=num[c];
        if(num[c]<min || min==0)
            min=num[c];
    }
    printf("Il numero piu' alto inserito vale %d , mentre quello piu' basso %d", max, min);
}
