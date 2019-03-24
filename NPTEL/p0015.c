//[Complete]Problem statement - Selection Sort.
#include<stdio.h>

void selection_sort(int *, int);
int minvalue(int *, int, int);
void swap(int *, int, int);
void print_array(int *, int);

int main(){
        int a[10]={17,200,3,6,12,21,45,63,1,100};
        selection_sort(a,10);
        print_array(a,10);
        return 0;
}

void selection_sort(int a[],int size){
        int minloc;
        for(int i = 0; i<size; i++){
                minloc = minvalue(a,i,size);
                swap(a,i,minloc);
        }
}

int minvalue(int a[],int k,int size){
        int minpos = -1;
        int min = __INT_MAX__;
        for(;k<size;k++){
                if (a[k]<min){
                        min = a[k];
                        minpos = k;
                }
        }
        return minpos;
}

void swap(int a[],int i,int minloc){
        int temp = a[i];
        a[i] = a[minloc];
        a[minloc] = temp;
}

void print_array(int a[],int size){
        printf("\n");
        for(int i = 0; i<size; i++){
                printf("%d\t",a[i]);
        }
        printf("\n");
}