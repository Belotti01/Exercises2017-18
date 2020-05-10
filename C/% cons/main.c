#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int n, c, cons=0;
    float cons_per;

    printf("Quante lettere vuoi inserire?\n");
    scanf("%d", &n);

    char lett[n];
    printf("Inserisci le lettere una ad una: ");
    for(c=0; c<n; c++)
    {
        do
        {
            fflush(stdin);
            scanf("%c", &lett[c]);
            lett[c]=toupper(lett[c]);
        }while(isalpha(lett[c])==0);
    }
    for(c=0; c<n; c++)
    {
        if(lett[c]!='A' && lett[c]!='E' && lett[c]!='I' && lett[c]!='O' && lett[c]!='U')
            cons++;
    }
    cons_per=(cons*100)/n;
    printf("\n\n\nIl %.2f percento delle lettere inserite sono consonanti", cons_per);
    return 0;
}
