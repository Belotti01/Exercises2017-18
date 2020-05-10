#include <stdio.h>
#include <stdlib.h>

int main()
{
    const char CHART='^', CHARQ='-';
    int lato=10, cont, cont_tri, cont2;

    for(cont_tri=1; cont_tri<lato;cont_tri+=2)
    {
        for(cont=0; cont<(lato-cont_tri)/2; cont++)
            printf("%c", CHARQ);

        for(cont=0; cont<cont_tri; cont++)
            printf("%c", CHART);

        for(cont=0; cont<(lato-cont_tri)/2; cont++)
            printf("%c", CHARQ);
        printf("\n");

    }
    return 0;
}
