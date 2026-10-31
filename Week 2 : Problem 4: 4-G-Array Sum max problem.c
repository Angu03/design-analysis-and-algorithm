//4-G-Array Sum max problem
/*Given an array of N integer, 
we have to maximize the sum of arr[i] * i, where i is the index of the element (i = 0, 1, 2, ..., N).
Write an algorithm based on Greedy technique with a Complexity O(nlogn).*/

#include <stdio.h>
#include <stdlib.h>

// Comparison function for ascending order (qsort)
int compare(const void* a, const void* b) {
    long long int arg1 = *(const long long int*)a;
    long long int arg2 = *(const long long int*)b;
    if (arg1 < arg2) return -1;
    if (arg1 > arg2) return 1;
    return 0;
}

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) return 0;
    
    long long* arr = (long long*)malloc(n * sizeof(long long));
    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }
    
    // Greedy step: sort ascending - O(n log n)
    qsort(arr, n, sizeof(long long), compare);
    
    // Calculate weighted sum using long long to prevent potential overflow
    long long max_sum = 0;
    for (int i = 0; i < n; i++) {
        max_sum += arr[i] * i;
    }
    
    printf("%lld\n", max_sum);
    
    free(arr);
    return 0;
}
