/*4-DP-Longest non-decreasing Subsequence
Find the length of the Longest Non-decreasing Subsequence in a given Sequence.*/

#include <stdio.h>
#include <stdlib.h>

int upper_bound(int* arr, int length, int target) {
    int low = 0;
    int high = length;
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] <= target) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }
    return low;
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int* seq = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &seq[i]) != 1) {
            free(seq);
            return 0;
        }
    }

    int* tails = (int*)malloc(n * sizeof(int));
    int len = 0;

    for (int i = 0; i < n; i++) {
        int idx = upper_bound(tails, len, seq[i]);
        tails[idx] = seq[i];
        if (idx == len) {
            len++;
        }
    }

    printf("%d\n", len);

    free(seq);
    free(tails);
    return 0;
}
