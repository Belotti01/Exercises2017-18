#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, c=5, n2;
    printf("Inserisci il numero: ");
    scanf("%d", &n1);
    for(c=5; c<=(5*20)+n1; c=c+5)
    {
        n2=c+n1;
        printf("\n%d", n2);
    }
    return 0;
}
