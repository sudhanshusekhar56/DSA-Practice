//checking if array contains duplicate enelemt or not
#include<stdio.h>
int main(){
    int arr[]={5,4,-1,7,-1,8};
    int flag=0;
    int s=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<s;i++){
        for(int j=i+1;j<s;j++){
            if(arr[i]==arr[j]){
                flag=1;
                break;
            }
        }
    }
    printf("%d",flag);
}