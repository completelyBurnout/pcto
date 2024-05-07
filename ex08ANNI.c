#include <stdio.h> //UGUALE A EX008

int main()
{
    int anni;


    printf("inserisci la tua età:\n");
    scanf("%d", &anni);
    
    if (anni<18, !anni<0) //se si vuole fare con più condizioni si usano AND(&&), OR(||) e NOT(!). infatti tipo invece di compreso tra è anni>6 && anni<1//
        {
            printf("l'utente è minorenne.\n");
        }

//    if ((anni>18 && anni<30) || (anni>60 && anni<100))
//        {
//        printf("ma che bel giovincello");
//        }
//    else if ((anni>50 && anni<130) || (anni>18 && anni<30))
//        {
//        printf("A VECCHIACCIOOOOOOOOOO");
//        }
    else if (anni>130)
        {
            printf("ma pe quanto hai campato ao\n");
        }
    else if (anni==111)
        {
            printf("secret ending?\n");
        }
    else if (anni==33)
        {
        printf("gli anni de Cristo\n");
        }
    else if (anni==51)
        {
            printf("orv reference?\n");
        }
    else if (anni==49)
        {
            printf("orv reference?\n");
        
        }
    else if (anni<0)
        {
            printf("manco sei nato madò\n");
        }
    else if (anni==17)
        {
            printf("AHHAHA soffri la tua infanzia sta per finire però almeno tra poco ti puoi comprare alcolici pesanti\n");
        
        }
    else if (anni==18)
        {
            printf("in America ti saresti potuto comprare una pistola ma sei in italia sfigato\n");
        }
    else if (anni==40)
        {
            printf("non mi sembra tanto una bella età eh\n");
        }
   
    else 
        {
            printf("l'utente è maggiorenne.\n");
        }
}
