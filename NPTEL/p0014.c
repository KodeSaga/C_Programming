//[Complete]Problem statement - Binary Search. 
#include <stdio.h>

int binarysearch(int a[], int size, int key){
        int l = -1,r=size,mid;
        while(l+1 != r){
                mid = (l + r) / 2;
                if (a[mid] <= key)
                        l = mid;
                else
                        r = mid;
        }
        if( l >= 0 && a[l] == key)
                return l;
        else
                return -1;
}

int main(){
        int a[10]={-17,-5,3,6,12,21,45,63,81,100};
        int key = -5;
        int loc = binarysearch(a,10,key);
        if (loc==-1)
                printf("Key = %d Not Found\n",key);
        else
                printf("Key = %d Found at %d \n",key,loc);
        return 0;
}