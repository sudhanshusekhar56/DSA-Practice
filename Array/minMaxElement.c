//finding minimum and maximum element in given array
#include<stdio.h>
int main(){
    int arr[]={13,24,53,2,9,19,25,43,68};
    int min=arr[0],max=arr[0],i;
    for(i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        if(arr[i]>max)
            max=arr[i];
        if(arr[i]<min)
            min=arr[i];
    }
    printf("\nMIN: %d\nMAX: %d\n",min,max);
}