#include <stdio.h>
 // le stringhe sono un insieme di caratteri, ossia gli array
int main()
{
int numeri[5]={7, 14, 44, 99, -31}; //indici. vanno da 0 a n-1
printf("%d\n", numeri[2]);

int i= 0; 
while(i<5)
{
    printf("%d\n", numeri[i]);
    i=i+1;
}



int num2[100];
int b= 0;
while (b<100)
{
    printf("inserisci un numero\n");
    scanf("%a", &num2[b]);
    b=b+1;
}

}