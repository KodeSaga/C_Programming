//[Complete]Problem statement - print prime numbers till a, assuming values greater than 3, assumption a>=5
#include <stdio.h>
#include <math.h>
int main()
{
        int flag = 0;
        int a, i, j;
        scanf("%d", &a);

        printf("2\n3\n");
        for (j = 5; j <= a; j = j + 2)
        {
                flag = 0;
                i = 3;
                while (i < (int)sqrt(j))
                {
                        if ((j % i) == 0)
                                flag = 1;
                        i += 2;
                }
                if (flag == 0)
                        printf("%d\n", j);
        }
        return 0;
}