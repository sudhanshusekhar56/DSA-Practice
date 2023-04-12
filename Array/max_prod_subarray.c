//Given an integer array nums, find a subarray that has the largest product, and return the product.

#include<stdio.h>

int maxProduct(int* nums, int numsSize){
    int prod=1;
    int maxProd=0;
    for(int i=0;i<numsSize;i++){
        for(int j=i;j<numsSize;j++){
            for(int k=i;k<=j;k++){
                printf("%d ",nums[k]);
                prod*=nums[k];
            }
            printf("\n");
            if(maxProd<prod){
                maxProd=prod;
            }
            prod=1;
        }
    }
    return maxProd;
}

int main(){
    int arr[]={-2,0,-1};
    int s=sizeof(arr)/sizeof(arr[0]);
    int prod=maxProduct(arr,s);
    printf("the max product is %d",prod);
}