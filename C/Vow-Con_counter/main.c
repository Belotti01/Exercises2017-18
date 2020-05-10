#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char s[100];
    int vow=0, cons=0, i, i2, c, sym=0;

    do{         //input stringa
        system("CLS");
    printf("Inserisci una stringa lunga massimo 100 caratteri\n");
    scanf("%s", s);}while(strlen(s)>100);

    for(i=0; i<strlen(s); i++)      //Conteggio vocali, consonanti e simboli
    {
        if(isalpha(s[i])){
               if(toupper(s[i])=='A' || toupper(s[i])=='E' || toupper(s[i])=='I' || toupper(s[i])=='O' || toupper(s[i])=='U')
                    vow++;
                else cons++;}
        else sym++;
    }
    printf("\n> Vocali: %d\n> Consonanti: %d\n> Simboli: %d", vow, cons, sym);

    for(i=0; i<strlen(s); i++){ //Conteggio caratteri
        c=0;
        if(s[i]!=' '){
        for(i2=0; i2<strlen(s); i2++){
            if(toupper(s[i])==toupper(s[i2])){
                    c++;
                    if(c!=1)s[i2]=' ';
            }
        }
        printf("\n> Il carattere %c e' presente %d volte", toupper(s[i]), c);}
    }


}
