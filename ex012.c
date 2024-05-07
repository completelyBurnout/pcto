#include <stdio.h>

int main()
{
    int a;
    a = 0;

    while(a<100) //con == i valori rimangono sempre uguali, devo cambiare il valore assicurandomi che cambiano valore///while viene usato con variabile DEDICATA,
    {
        printf("%d\n", a+1);
        a=a+1; //adesso a deve aumentare di 1, quindi si aggiunge la variabile perchè il valore attribuito deve cambiare//
    }         // altri modi per scriverlo : a++; a+=1;
}