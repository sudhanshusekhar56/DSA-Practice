//searching an element in sorted array that is notated at some pivot point.
//[10,20,30,40,50,60,70,80,90] is rotated at pivot point 3 -
//[40,50,60,70,80,90,10,20,30] looks something like this.


#include<stdio.h>
int search(int arr[],int key, int left, int right){
    if(left>right)
        return -1;
    else{
    int mid = (left+right)/2;
    if(arr[mid]==key){
        return mid;
    }
    if(arr[left]<arr[mid]){ //left part of the array is sorted
        if(arr[left]<=key && key<=arr[mid]){
            return search(arr,key,left,mid);
        }
        else{
            return search(arr,key,mid+1,right);
        }
    }
    else{                     // right part of array is sorted
        if(arr[mid]<=key && key<=arr[right]){
            return search(arr,key,mid,right);
        }
        else{
            return search(arr,key,left,mid-1);
        }
    }
    }
}

int main(){
    int arr[9]={40,50,60,70,80,90,10,20,30};
    int v = search(arr,70,0,8);
    (v==-1)?printf("not found!"):printf("found at %d",v);
}