/*given an array of n integers where each value represents the number of chocolates in a packet.
Each packet can have a variable number of chocolates. There are m students, the task is to distribute chocolate packets such that:
-Each student gets only one packet.
-The difference between the number of chocolates in the packet
with maximum chocolates and the packet with minimum chocolates given to the students is minimum.*/


#include<stdio.h>


    void printArray(int arr[],int n){
        for(int i=0;i<n;i++){
            printf("%d ",arr[i]);
        }
    }
    void swap(int *a,int *b){
        int temp=*a;
        *a=*b;
        *b=temp;
    }
    void sortArray(int arr[],int n){
        int i,j;
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(arr[j]>arr[j+1]){
                    swap(&arr[j],&arr[j+1]);
                }
            }
        }
    }

    int findMinDiff(int arr[],int n, int m){
        sortArray(arr,n);
        //printArray(arr,n);
        
        int minDiff= 100;
        
        for(int i=0;i+m-1<n;i++){
            //printf("i=%d m=%d n=%d,",i,m,n);
            int diff=arr[i+m-1]-arr[i];
            if(diff<minDiff)
                minDiff=diff;
        }
        return minDiff;
    }

int main()
{
    int arr[] = { 12, 4,  7,  9,  2,  23, 25, 41, 30,
                  40, 28, 42, 30, 44, 48, 43, 50 };
    int m = 7; // Number of students
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = findMinDiff(arr, n, m);
    printf("The minimum difference is %d.",d);
    return 0;
}