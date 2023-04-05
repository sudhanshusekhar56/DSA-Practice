// Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
// You must write an algorithm that runs in O(n) time and without using the division operation.

#include<stdio.h>
#include<stdlib.h>

int* productExceptSelf(int* nums, int numsSize){
    int *ans = (int *)malloc(sizeof(int)*numsSize);
    int p=1,temp=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i] != 0)
            p*=nums[i];
        else
            temp=1;
    }
    for(int i=0;i<numsSize;i++){
        if(temp==1){
            if(nums[i] != 0)
                ans[i]=0;
            else
                ans[i]=p;
        }
        else{
            ans[i]=p/nums[i];
        }
        
    }
    return ans;
}

int main(){
    int arr[]={-1,1,0,-3,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int *prodArray = productExceptSelf(arr,n);
    printf("Multplication table\n");
    for(int i=0;i<n;i++)
        printf("%d ",prodArray[i]);
}