//[Complete]Problem statement - Bubble Sort.
#include<stdio.h>

void bubble_sort(int *, int);
void print_array(int *, int);

int main(){
        int a[10]={17,200,3,6,12,21,45,63,1,100};
        bubble_sort(a,10);
        print_array(a,10);
        return 0;
}

void bubble_sort(int a[],int size){
        int temp,i,sorted = 0;
        while(sorted == 0){
                sorted = 1;
                for(i = 0; i<size-1; i++)
                        if(a[i] > a[i+1]){
                                temp = a[i];
                                a[i] = a[i+1];
                                a[i+1] = temp;
                                sorted = 0;
                        }       
        }    
}

void print_array(int a[],int size){
        printf("\n");
        for(int i = 0; i<size; i++){
                printf("%d\t",a[i]);
        }
        printf("\n");
}