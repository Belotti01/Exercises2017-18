#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    const int MIN=5, MAX=20;
    char lett, caps, scelta;
    int alt, c_alt, c_lun;

    printf("Inserisci una lettera\n");
    scanf("%c", &lett);
    caps=toupper(lett);
    if(isalpha(lett)!=0)
    {
        if(caps=='A' || caps=='E' || caps=='I' || caps=='O' || caps=='U')
            printf("\nLa lettera inserita e' una vocale");
        else
            printf("\nLa lettera inserita e' una consonante");

        if(lett>='A' && lett<='Z')
            printf(" maiuscola");
        else
            printf(" minuscola");
    }else
        printf("Il simbolo inserito %c non e' una lettera", lett);
        printf("\n\nInserire [S] per continuare: ");
    fflush(stdin);
    scanf("%c", &scelta);
    if(toupper(scelta)=='S')
    {
        system("CLS");
        do
        {
            printf("\nInserisci l'altezza delle figure [tra %d e %d]", MIN, MAX);
            fflush(stdin);
            scanf("%d", &alt);
        }while(alt<MIN || alt>MAX);
        printf("Inserire il simbolo di cui sono formate le forme: ");
        fflush(stdin);
        scanf("%c", &lett);
        for(c_alt=1; c_alt<=alt; c_alt++)
        {
            printf("\n");
            for(c_lun=1; c_lun<=c_alt; c_lun++)
            {
                printf("%c", lett);
            }
        }


        printf("\n\n");
        for(c_alt=1; c_alt<=alt; c_alt++)
        {
            printf("\n");
            for(c_lun=1; c_lun<=alt; c_lun++)
            {
                printf("%c", lett);
            }
        }
    }
    printf("\n\n\nProgramma terminato");
}
