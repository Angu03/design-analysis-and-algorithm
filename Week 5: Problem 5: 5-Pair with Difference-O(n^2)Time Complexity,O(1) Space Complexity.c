//5-Pair with Difference-O(n^2)Time Complexity,O(1) Space Complexity
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int *A = (int *)malloc(n * sizeof(int));
    for (int idx = 0; idx < n; idx++) {
        scanf("%d", &A[idx]);
    }

    int k;
    scanf("%d", &k);

    int i = 0, j = 1;
    int found = 0;

    while (j < n) {
        if (i == j) {
            j++;
            continue;
        }
        int diff = A[j] - A[i];
        if (diff == k) {
            found = 1;
            break;
        } else if (diff < k) {
            j++;
        } else {
            i++;
            if (i == j) j++;
        }
    }

    printf("%d\n", found);
    free(A);
    return 0;
}
