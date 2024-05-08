#include <stdio.h>

int main ()
{
    char nome [5]= {'s', 'a', 'r', 'a', '\0'}; //alla fine di ogni stringa ci aiuta perchè codice così funziona per qualsiasi stringa, è CARAATTERE TERMINATORE
    int i=0;
    while(nome[i]!='\0')
    {
        printf("%c", nome[i]);
        i=i+1;
    }
//
    printf("%s", nome);
//
    char nome2[]="ciao brother";

    char nomeutente[50];
    scanf("%s", nomeutente);
    scanf("%c", &nomeutente[5]);

    scanf(%[^n]s");
}