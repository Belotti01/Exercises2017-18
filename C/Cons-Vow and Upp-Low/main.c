#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
    do{
        system("CLS");
        printf("\nInserire una lettera: ");
        fflush(stdin);
        scanf("%c", &x);
    }while(!isalpha(x));
    x=toupper(x);
switch(x){
case 'A':
    printf("\nLa lettera %c e' una vocale", x);
    break;
case 'E':
    printf("\nLa lettera %c e' una vocale", x);
    break;
case 'I':
    printf("\nLa lettera %c e' una vocale", x);
    break;
case 'O':
    printf("\nLa lettera %c e' una vocale", x);
    break;
case 'U':
    printf("\nLa lettera %c e' una vocale", x);
    break;
default:
    printf("\nLa lettera %c e' una consonante", x);
    break;
    }
}
