//[Complete]Problem statement - Count upper and lower case letters in a string
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
        char s[200];
        int upper = 0, lower = 0;
        scanf("%[^\n]s",s);
        for( int i = 0; i < strlen(s); i++){
                if(isupper(s[i]))
                        upper++;
                if(islower(s[i]))
                        lower++;

        }
        printf("\nNo of Uppercase letters = %d ", upper);
        printf("\nNo of Lowercase letters = %d ", lower);
        return 0;
}
