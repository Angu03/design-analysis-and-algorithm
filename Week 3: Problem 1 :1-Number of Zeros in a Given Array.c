/*1-Number of Zeros in a Given Array
Given an array of 1s and 0s this has all 1s first followed by all 0s. Aim is to find the number of 0s. 
Write a program using Divide and Conquer to Count the number of zeroes in the given array.*/

#include <stdio.h>
#include <stdlib.h>

int findFirstZeroDAC(int arr[], int low, int high) {
    if (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == 0 && (mid == 0 || arr[mid - 1] == 1)) {
            return mid;
        } 
        else if (arr[mid] == 1) {
            return findFirstZeroDAC(arr, mid + 1, high);
        } 
        else {
            return findFirstZeroDAC(arr, low, mid - 1);
        }
    }
    return -1;
}

int countZeros(int arr[], int m) {
    if (m <= 0) return 0;
    
    int firstZeroIdx = findFirstZeroDAC(arr, 0, m - 1);
    
    if (firstZeroIdx == -1) {
        return (arr[0] == 0) ? m : 0;
    }
    
    return m - firstZeroIdx;
}

int main() {
    int m;
    if (scanf("%d", &m) != 1) {
        return 0;
    }
    
    int *arr = (int *)malloc(m * sizeof(int));
    if (arr == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }
    
    for (int i = 0; i < m; ++i) {
        scanf("%d", &arr[i]);
    }
    
    int result = countZeros(arr, m);
    printf("%d\n", result);
    
    free(arr);
    return 0;
}
