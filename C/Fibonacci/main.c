#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Inserire il numero limite");
    int n=1, s1=0, s2=1, limit;
    scanf("%d", &limit);
    printf("\n%d\n%d", s1, s2);
    while(n<limit)
    {
        printf("\n%d", n);
        s1=s2;
        s2=n;
        n=s1+s2;

    }
    return 0;
}
