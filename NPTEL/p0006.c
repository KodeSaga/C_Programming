//[Complete]Problem statement - Digit Count
#include <stdio.h>

int main(){
        int n, count = 0;
        scanf("%d",&n);
        while(n > 0){
                count++;
                n /= 10;
        }
        printf("The No of digits are %d",count);
        return 0;
}