// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

#include<stdio.h>

int maxProfit(int *arr,int n){
    int minimum=100,maximum=0,k=-1;
        for(int i=0;i<n;i++){
        if(arr[i]<minimum){
            minimum=arr[i];
            k++;
        }       
    }
    for(int i=k+1;i<n;i++){
        if(arr[i]>maximum){
            maximum=arr[i];
        }
    }
    if(maximum>minimum)
        return maximum-minimum;
    else
        return 0;
}

int main(){
    int arr[]={7,1,5,3,6,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int profit=maxProfit(arr,n);
    printf("Maximum possible profit: %d",profit);
    return 0;
}