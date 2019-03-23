//[Complete]Problem statement - Write a C Program to find HCF of 4 given numbers using recursive function.
#include <stdio.h>

int hcf(int a, int b){
        int temp;
        if(b<a){
                temp = a;
                a = b;
                b = temp;
        }
        if( b % a == 0 )
                return a;
        else
                return hcf(a, b%a);
}

int main(){
        int a,b,c,d;
        scanf("%d%d%d%d",&a,&b,&c,&d);
        printf("The HCF is %d",hcf(a,hcf(b,hcf(c,d))));
        return 0;
}