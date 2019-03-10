//[Complete]Problem statement - Find the GREATEST COMMON DIVISOR of two numbers
#include <stdio.h>  
int main()
{
        int a,b,temp;
        scanf("%d%d",&a,&b);
        if (a > b){
                temp = a;
                a = b;
                b = temp;
        }
        while((b % a) != 0){
            temp = b % a;
            b = a;
            a = temp;
        }
        printf("\nThe GCD is %d.",a);
    return 0;
}