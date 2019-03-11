//[Complete]Problem statement - print prime numbers till a, assuming values greater than 3
#include <stdio.h>
#include <math.h>  
int main()
{
        int flag = 0;
        int a,i,j;
        scanf("%d",&a);
        
        printf("2\n3\n");
        for (j=5; j<=a; j=j+2){
                flag = 0;
                i = 3;
                while (i<(int)sqrt(j)) {
                        if ((j%i)==0)
                                flag = 1;
                        i += 2;
                        //printf("here flag=%d j=%d i=%d\n",flag,j,i);
                }
                if (flag == 0)
                    printf("%d\n",j);
        }
        //printf("%d\n",flag);
        return 0;
}