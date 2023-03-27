//reversing an array
#include<stdio.h>

void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int arr[]={13,24,53,2,9,19,25,43,68};
    int s=sizeof(arr)/sizeof(arr[0]);
    for(int i=0,j=s-1;i<s/2;i++,j--){
        swap(&arr[i],&arr[j]);
    }
    for(int i=0;i<s;i++)
    printf("%d ",arr[i]);
}