//5-G-Product of Array elements-Minimum
/*Given two arrays array_One[] and array_Two[] of same size N. We need to first rearrange the arrays such that the sum of the product of pairs( 1 element from each) is minimum. 
That is SUM (A[i] * B[i]) for all i is minimum.*/

#include <stdio.h>
#include <stdlib.h>

int compare_asc(const void* a, const void* b) {
    long long x = *(const long long*)a;
    long long y = *(const long long*)b;
    return (x > y) - (x < y);
}

int compare_desc(const void* a, const void* b) {
    long long x = *(const long long*)a;
    long long y = *(const long long*)b;
    return (y > x) - (y < x);
}

int main() {
    int n;
    while (scanf("%d", &n) == 1) {
        if (n <= 0) continue;
        
        long long* a = (long long*)malloc(n * sizeof(long long));
        long long* b = (long long*)malloc(n * sizeof(long long));
        
        if (!a || !b) {
            free(a);
            free(b);
            continue;
        }
        
        for (int i = 0; i < n; i++) scanf("%lld", &a[i]);
        for (int i = 0; i < n; i++) scanf("%lld", &b[i]);
        
        qsort(a, n, sizeof(long long), compare_asc);
        qsort(b, n, sizeof(long long), compare_desc);
        
        long long min_sum = 0;
        for (int i = 0; i < n; i++) {
            min_sum += a[i] * b[i];
        }
        
        printf("%lld\n", min_sum);
        
        free(a);
        free(b);
    }
    return 0;
}
