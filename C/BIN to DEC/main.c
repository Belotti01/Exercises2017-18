#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
    int c1, bit, due=1, somma=0;

printf("Inserisci il numero di bit: ");
    scanf("%d", &bit);
    fflush(stdin);
    for(c1=1; c1<bit; c1++)
{
    due=due*2;
}

system("CLS");
fflush(stdin);
for(c1=0; c1<bit; c1++)
{
    do{
        printf("\nInserisci 0 o 1\n");
        scanf("%c", &x);
        fflush(stdin);
    }while(x!='1' && x!='0');
    if(x=='1')
        somma=somma+due;
    due=due/2;
}
printf("\nLa somma vale %d", somma);
return(0);
}
