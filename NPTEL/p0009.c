//[Complete]Problem statement - Find largest and smallest word in a string
#include <stdio.h>
#include <string.h>

int main(){
        char s[200], maxword[30], minword[30], tempword[30];
        int maxlen = 0, minlen = 0, templen = 0,j;
        scanf("%[^\n]s",s);
        for(int i = 0; i < strlen(s); i++){
                strcpy(tempword,"");
                templen = 0;
                j = 0;
                while((s[i] != '\0') && (s[i] != ' ')){
                        templen++;
                        tempword[j] = s[i];
                        j++;i++;
                }
                tempword[j] = '\0';
                if (templen > maxlen || maxlen == 0){
                        strcpy(maxword,tempword);
                        maxlen = templen;
                }
                if (templen < minlen || minlen == 0){
                        strcpy(minword,tempword);
                        minlen = templen;
                }
        }
        printf("\nMaxword = %s",maxword);
        printf("\nMinword = %s",minword);
        return 0;
}