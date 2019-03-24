//[Complete]Problem statement - Print a triangle of prime numbers upto given number of lines of the triangle.
#include<stdio.h>
 
int prime(int num); //Function to find whether the number is prime or not.
int main() {
        int lines;
        scanf("%d", &lines); 
        for(int i = 1,j = 1,count=0; i <= lines; i++){
                count=1;
                while(count <= i){
                        if (prime(j)){
                                printf("%d\t",j);
                                count++;
                        }
                        j++;
                }
                printf("\n");
        }
        return 0;
}

int prime(int num){
        int i = 2, count = 0;
        while (i < num)
                {
                        if ((num % i) == 0)
                                count ++;
                        i++;
                }
        if(num == 1)
    	        return 0;
        else if(num == 2)
    		    return 1;
    	else if(count == 0)
    			return 1;
        return 0; 
}