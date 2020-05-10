#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c, vet[]={1, 4, 6, 3, 9 ,2, 77, 34};
    size_t n=sizeof(vet)/sizeof(vet[0]);
    printf("Array size: %d", n);
}
