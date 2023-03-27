//finding subarray with maximum sum
#include<stdio.h>
int main(){
    int arr[]={5,4,-1,7,8};
    int s=sizeof(arr)/sizeof(arr[0]);
    int maxTillNow=0,maxAll=0;
    for(int i=0;i<s;i++){
        maxTillNow+=arr[i];
        if(maxAll<maxTillNow){
            maxAll=maxTillNow;
        }
        if(maxTillNow<0){
            maxTillNow=0;
        }
    }
    printf("Max sized subarray is %d:",maxAll);

}