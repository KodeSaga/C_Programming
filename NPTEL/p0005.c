//[Complete]Problem statement - Check if a number is a perfect number or not
// that is sum of its factors excluding the number itself = the number

#include<stdio.h>
int main() {
        int n, sum=0;
        scanf ("%d",&n);
        for(int i = 1; i < n; i++){
                if( n % i == 0)
                    sum += i;              
        }
        if( sum == n )
                printf("It's a perfect number");
        else
                printf("It's not a perfect number");  
        return 0;
}