//The next permutation of an array of integers is the next lexicographically greater permutation of its integer.
//[1,2,3] -> [1,3,2] ; [1,3,5,4,2] -> [2,4,5,3,1]
//traverse from back, find if arr[i]<arr[i+1] then, traverse from back again and find arr[j]>arr[i], then swap them.
//lastly, reverse all the element after index i. i.e i+1 to last element.


#include<stdio.h>
void printArray(int *arr,int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

void swap(int* a, int * b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void rev(int* arr,int i, int n){
    int j=i+1;
    int k=n-1;
    while(j<k){
        swap(&arr[j],&arr[k]);
        //printf("%d - %d\n",arr[j],arr[k]);
        j++;
        k--;
    }
}

int next(int* arr, int n){
    for(int i=n-2;i>=0;i--){
        if(arr[i] < arr[i+1]){
            //printf("%d ",i);
            for(int j=n-1;j>=0;j--){
                if(arr[j] > arr[i]){
                    //printf("%d\n",j);
                    swap(&arr[i],&arr[j]);
                    rev(arr,i,n);
                    //printArray(arr,n);
                    return 0;
                }
            }
        }
    }
    rev(arr,-1,n);
    //printArray(arr,n);
    return 0;
}

int main(){
    int arr[]={5,4,3,2,1};
    int s=sizeof(arr)/sizeof(arr[0]);
    next(arr,s);
    printArray(arr,s);
}