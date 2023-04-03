#include<stdio.h>
void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
// Function to perform Selection Sort
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        swap(&arr[min_idx], &arr[i]);
    }
}

int findKthLargest(int* nums, int numsSize, int k){
    selectionSort(nums,numsSize);
    return nums[numsSize-k];
}
int main(){
    int nums[]={3,2,1,5,6,4};
    int n=sizeof(nums)/sizeof(nums[0]);
    int element=findKthLargest(nums,n,2);
    printf("2nd largest element is %d.",element);
}