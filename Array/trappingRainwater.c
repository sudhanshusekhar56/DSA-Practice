// Given n non-negative integers representing an elevation map where the width of each bar is 1,
//compute how much water it can trap after raining.

#include<stdio.h>

int min(int a,int b){
    if (a<b)
        return a;
    else
        return b;
}

int trap(int* height, int heightSize){
    int left[heightSize],right[heightSize];
    int bigLeft = height[0],bigRight = height[heightSize-1], total=0;
    for(int i=0,j=heightSize-1;i<heightSize;i++,j--){
        if(height[i]>bigLeft){
            bigLeft=height[i];
        }
        if(height[j]>bigRight){
            bigRight=height[j];
        }
        right[j]=bigRight;
        left[i]=bigLeft;
    }

    for(int i=0;i<heightSize;i++){
        total+=min(left[i],right[i])-height[i];
    }
    return total;
}

int main(){
    int a[]={0,1,0,2,1,0,1,3,2,1,2,1};
    int n=sizeof(a)/sizeof(a[0]);
    int water=trap(a,n);
    printf("total water trapped is %d.",water);
}