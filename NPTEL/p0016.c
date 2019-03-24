//[Complete]Problem statement - Insertion Sort.
#include<stdio.h>

void insertion_sort(int *, int);
void print_array(int *, int);

int main(){
        int a[10]={17,200,3,6,12,21,45,63,1,100};
        insertion_sort(a,10);
        print_array(a,10);
        return 0;
}

void insertion_sort(int a[],int size){
        int temp,i,j;
        for(i = 1; i<size; i++){
                temp = a[i];
                for(j=i-1; ((j>=0) && (a[j]>temp)); j--)
                       a[j+1]=a[j];
                a[j+1]=temp;
        }
}

void print_array(int a[],int size){
        printf("\n");
        for(int i = 0; i<size; i++){
                printf("%d\t",a[i]);
        }
        printf("\n");
}