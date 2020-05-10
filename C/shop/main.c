#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int n=5;
    int sw, prezzi[n-1], sconti[n-1], pezzi[n-1], quant=0, c, n_scon;
    char scelta;

    do{
    printf("Premi 1 per inserire un nuovo prodotto (fino a un massimo di %d;\n", n);
    printf("Premi 2 per sapere il numero di prodotti effettivamente presenti; \n");
    printf("Premi 3 per visualizzare tutti i prodotti;\n");
    printf("Premi 4 per visualizzare il n.ro di prodotti in sconto; \n");
    printf("Premi 0 per uscire dal programma; \n");
    scanf("%d", &sw);
    switch(sw)
    {
    case 1:
        if(quant!=n)
        {
            printf("\n Inserisci il prezzo, il numero di pezzi e la percentuale di sconto del prodotto: ");
        scanf("%d", &prezzi[quant]);
        fflush(stdin);
        scanf("%d", &pezzi[quant]);
        fflush(stdin);
        scanf("%d", &sconti[quant]);
        fflush(stdin);
        quant++;
        }
        else
            printf("\nSei arrivato al numero limite di prodotti disponibili");
        break;
    case 2:
        printf("\nSono presenti %d prodotti al momento.", quant);
        break;
    case 3:
        for(c=0; c<quant; c++)
        {
            printf("\n- %d : PREZZO: %d | PEZZI: %d | SCONTO: %d percento", c+1, prezzi[c], pezzi[c], sconti[c]);
        }
        break;
    case 4:
        n_scon=0;
        for(c=0; c<quant; c++)
        {
            if(sconti[c]!=0)
                n_scon++;
        }
        printf("\nSono presenti %d prodotti scontati", n_scon);
        break;
    default:
        printf("\n\nIl numero inserito non è presente nell'indice");
        break;
    }
    printf("\n\n\n\n\n");
    fflush(stdin);
    }while(sw!=0);
    return 0;
}
