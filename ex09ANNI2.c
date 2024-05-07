#include <stdio.h>

int main()
{
    int anni;


    printf("inserisci la tua età:\n");
    scanf("%d", &anni);
    
    if (anni<18) //se si vuole fare con più condizioni si usano AND(&&), OR(||) e NOT(!). infatti tipo invece di compreso tra è anni>6 && anni<1//
        {
            printf("l'utente è minorenne.\n");
        }

  if ((anni>18 && anni<30) || (anni>60 && anni<100))
        {
        printf("ma che bel giovincello");
        }
    else if ((anni>50 && anni<130) || (anni>18 && anni<30))
        {
        printf("A VECCHIACCIOOOOOOOOOO");
        }
}