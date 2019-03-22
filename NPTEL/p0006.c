//[Complete]Problem statement - Digit Count
#include <stdio.h>

int main(){
        int count = 0;
        long long n;
        scanf("%lld",&n);
        while(n > 0){
                count++;
                n /= 10;
        }
        printf("The No of digits are %d",count);
        return 0;
}