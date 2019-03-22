//[Complete]Problem statement - Standard Deviation
#include <stdio.h>
#include <math.h>

int main(){
        double mean,std=0,sum = 0, a[] = {5,3,5,6,7,8,9,10};
        for(int i = 0; i < 8; i++){
                sum += a[i];
        }
        mean = sum / 8;
        for(int i = 0; i < 8; i++){
                std += pow((mean - a[i]),2);
        }
        std = pow(std,0.5);
        printf(" %f  %f ", mean, std);
        return 0;
}