#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char str[1000];
    int i, i2, sym=0, lines=0, words=0;
    printf("Inserire un massimo di 1000 frasi e scrivere 'FINE' per concludere:\n"); //input stringa
    scanf("%[^FINE][1000]s", &str);
    printf("\n%s", str);

    for(i=0; str[i]!='\0'; i++) //conteggio simboli, parole e righe
    {
        if(isalpha(str[i])==0 && isspace(str[i])==0)
            sym++;
        if(isspace(str[i])!=0 && isspace(str[i-1])==0 && isalpha(str[i-1]))
            words++;
        if(str[i]=='\n')
            lines++;
    }
    printf("\n> simboli: %d \n> parole: %d \n> righe: %d\n", sym, words, lines);
}
