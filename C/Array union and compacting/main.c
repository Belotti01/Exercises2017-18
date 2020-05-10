#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v1[] = {4, 5, 8, 0}, v2[] = {1, 4, 5, 7, 9, 0}, v3[10], count, count2, count3=0, temp;

    for(count=0; count<4; count++)
    {
        temp=0;
        for(count2=0; count2<count3; count2++)
        {
            if(v1[count]==v3[count2])
            {
                temp=1;
                break;
            }
        }
        if(temp==0)
        {
            v3[count3]=v1[count];
            count3++;
        }
    }

    for(count=0; count<6; count++)
    {
        temp=0;
        for(count2=0; count2<count3; count2++)
        {
            if(v2[count]==v3[count2])
            {
                temp=1;
                break;
            }
        }
        if(temp==0)
        {
            v3[count3]=v2[count];
            count3++;
        }
    }
    for(count=0; count<count3; count++)
    {
        printf("%d, ", v3[count]);
    }
    return 0;
}
