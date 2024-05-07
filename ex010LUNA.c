#include <stdio.h>

int main()
{
    int anno;
    printf("QUANTA DIFFERENZA C'E' DALLA TUA DATA DI NASCITA ALL'ARRIVO SULLA LUNA?\n\n");
    printf("inserisci anno di nascita: ");
    scanf("%d", &anno);
    
    if(anno==1969)
        {
            printf("\nsei nato nell'anno in cui per la prima volta gli umani sono sbarcati sulla luna!!! ti senti vecchio?\n");
        }
    else if(anno<476)
        {
            printf("\nviva l'antica Roma! sono comunque passati %d anni dal primo sbarco sulla luna.\n", 1969-anno);
        }
    else if(anno==2007)
    {  
    printf("\nNever gonna give you up,\nnever gonna let you down,\nnever gonna run around\nand desert you\n\nsono passati %d anni.\n", anno-1968);
    }
    else if(anno=1492)
        {   
            printf("\ndal primo sbarco sulla luna da parte degli Americani sono passati %d anni dalla scoperta del loro paese.\n", 1969-anno);
        }
    else if(anno<1900)
        {
            printf("\nsei sicuro di essere nato in quell'anno? sono comunque passati %d anni dal primo sbarco sulla luna.\n", 1969-anno);
        }
    else if(anno<1969)
        {
        printf("\nsei nato %d anni prima dell'anno in cui l'uomo è per la prima volta arrivato sulla luna. sei proprio uno schifoso vecchiaccio!\n", 1969-anno);
        }
    else
    {
    printf("\nsei nato %d anni dopo l'anno in cui per la prima volta l'uomo è sbarcato sulla luna.\n\n", anno-1968);
    }
}