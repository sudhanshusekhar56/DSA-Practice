#include<stdio.h>
#include<stdlib.h>
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

int* repeatedNumber(int* A, int n) {
    selectionSort(A,n);
     for(int i=0;i<n;i++){
      if(A[i]==A[i+1]){
        printf("Repeating no. %d",A[i]);
          break;
        }
    }
    for(int i=1;i<=n;i++){
        if(i!=A[i-1]){
            printf("\nMissing no. %d",i);
            break;
        }
    }
}

int main() {
 
    int arr[] = { 7, 3, 4, 5, 5, 6, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);
    repeatedNumber(arr,n);
    return 0;
}