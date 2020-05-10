#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int bit=15;
    char bin[bit];
    int i, dec=0, due=1, cifra;

    printf("Inserisci il numero binario a 16 bit: ");
    scanf("%s", &bin);

    for(i=bit; i>=0; i--)
    {
        if(bin[i]!='1' && bin[i]!='0') bin[i]='0'; //controllo che tutti gli input siano 0 o 1
        dec+=(bin[i]-48)*due;
        due*=2;
    }
    printf("\n> %sb = %dd", bin, dec);
    return 0;
}
