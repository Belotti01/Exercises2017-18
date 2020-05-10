#include <stdio.h>
#include <stdlib.h>

void fillArray(int S, int arr[S][S]);
void printArray(int S, int arr[S][S]);
int checkDiagonals(int S, int arr[S][S]);

int main()
{
    const int S=4;
    int arr[S][S];
    fillArray(S, arr);
    printArray(S, arr);
    printf("\n\nReturn: %d", checkDiagonals(S, arr));
}

void fillArray(int S, int arr[S][S]){
    int i, i2;
    for(i=0; i<S; i++){
        for(i2=0; i2<S; i2++) scanf("%d", &arr[i][i2]);
    }
}

void printArray(int S, int arr[S][S]){
    int i, i2;
    for(i=0; i<S; i++){
        printf("\n | ");
        for(i2=0; i2<S; i2++) printf("%d | ", arr[i][i2]);
    }
}

int checkDiagonals(int S, int arr[S][S]){
    int i, i2, d1=0, d2=0, underd1=0;
    for(i=0; i<S; i++){
        for(i2=0; i2<S; i2++){
                if(i==i2) d1+=arr[i][i2];
                if(i==S-1-i2) d2+=arr[i][i2];
                if(i2<i) underd1+=arr[i][i2];
        }
    }
    printf("\nVALORI:\n%d\n%d\n%d\n", d1, d2, underd1);
    if(underd1 == d1 && d1 == d2) return 1; else return 0;
}
