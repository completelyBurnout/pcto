#include <stdio.h>

int main()
{

    int a, b, c;

     scanf("%d", &a);
     scanf("%d", &b);
     scanf("%d", &c);

    
    if(a+b>c && b+c>a && a+c>b)
        {
            printf("è un triangolo ");
            if (a==b && a==c && b==c)
            {
                printf("equilatero\n");
            }
            else if(a==b || b==c || c==a)
            {
                printf("isoscele\n");
            }  
            else 
            {
                printf("scaleno\n");
            }
        }
    
    
    else
        {
            printf("nuh uh\n");
        }


}