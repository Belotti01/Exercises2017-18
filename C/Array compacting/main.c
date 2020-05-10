#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v1[14] = {1, 18, 3, 0, 24, 3, 6, 0, 18, 6, 49, 49, 1, 88}, c, c2, dimv2=0, v2[13], bit;

    printf("Vettore 2: ");
    for(c=0; c<=14; c++)
    {
        bit=0;
        for(c2=0; c2<=dimv2; c2++)
        {
            if(v1[c]==v2[c2])
            {
                bit=1;
            }
        }
        if(bit==0)
        {
            v2[dimv2]=v1[c];
            printf("%d, ", v2[dimv2]);
            dimv2++;
        }
    }
    return 0;
}
