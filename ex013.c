
#include <stdio.h>

int main() // modulo si scrive con % e risultato è il resto
{
    int numero, divisore, resto, ndivisori;
    printf("CALCOLATORE DI NUMERI PRIMI\n\n");
    printf("inserisci un numero positivo ed intero e scopri se è primo!\n");
    scanf("%d", &numero); 
    divisore=numero-1;
    ndivisori=0;
     

    while(divisore>1) 
        {
            resto=numero%divisore;
            if(resto==0)
                {
                    ndivisori=ndivisori+1;
                   
                }
                else
                {
                    ndivisori=ndivisori;
                } 
            divisore=divisore-1;      
        }

        if(ndivisori==0 && numero>1)
        {
            printf("il numero %d è un numero primo.\n", numero);
        }
        else
        {
            printf("il numero %d non è un numero primo ed ha %d divisori oltre a se stesso ed 1.\n", numero, ndivisori);
        }

}