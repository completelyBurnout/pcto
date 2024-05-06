int main()
{
    //VARIABILI//

    int a; //num interi, %d//
    float b = 2.3; //numeri a virgola mobile, %f/ 
    double c = 2.7; //%lf, differenza è quanti numeri possono esserci, DOUBLE massimo 15 numeri dopo virgola e FLOAT max. 6//

    a = 61;
    //printf("a: %d\n", a); //identificatore per int: %d//
    //printf("b: %f\n", b);//
    //printf("c: %lf\n", c);//

    //printf("a+10 = %d", a + 10);//
    printf("somma: %d\n", a+b);
    float differenza = a-b;
    printf("differenza: %f\n", differenza);
    float divisione = a/b;
    printf("divisione: %f\n", divisione);
}         
