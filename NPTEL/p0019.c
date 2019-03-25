//[Complete]Problem statement - Quick Sort.
#include<stdio.h>

void quick_sort(int *, int);
void print_array(int *, int);

int main(){
        int a[10]={17,200,3,6,12,21,45,63,1,100};
        quick_sort(a,10);
        print_array(a,10);
        return 0;
}

void quick_sort(int a[],int size){
  
}

void print_array(int a[],int size){
        printf("\n");
        for(int i = 0; i<size; i++){
                printf("%d\t",a[i]);
        }
        printf("\n");
}