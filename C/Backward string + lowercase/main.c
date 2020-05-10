#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[30], lowstr[30], revstr[30];
    int i, b;
    //input stringa di massimo 30 caratteri
    do
    {
        printf("Inserisci una frase di massimo 30 caratteri: ");
        scanf("%s", &str);
        system("CLS");
    }while(strlen(str)>30);
    printf("Frase: %s", str);

    //Creazione della stringa minuscola e della stringa invertita
    for(i=0; i<strlen(str); i++)
    {
        lowstr[i]=tolower(str[i]);
    }
    lowstr[i]='\0';
    for(i=0; i<strlen(str); i++)
    {
        revstr[i]=lowstr[strlen(str)-i-1];
    }
    revstr[i]='\0';
    printf("\nFrase minuscola: %s\n", lowstr);

    //controllo se la stringa è uguale se letta dal primo all'ultimo carattere
    if(strcmp(lowstr, revstr)==0) printf("La frase inserita e' uguale se letta al contrario\n");
    else printf("La frase è diversa se invertita\n");
    return 0;
}
