/*3-Finding Floor Value
Given a sorted array and a value x, the floor of x is the largest element in array smaller than or equal to x.
Write divide and conquer algorithm to find floor of x.*/
#include <stdio.h>
#include <stdlib.h>

int findFloor(int* arr, int n, int x) {
    int low = 0;
    int high = n - 1;
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x) {
            return arr[mid];
        }

        if (arr[mid] < x) {
            ans = arr[mid];
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return ans;
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int* arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            free(arr);
            return 0;
        }
    }

    int x;
    if (scanf("%d", &x) != 1) {
        free(arr);
        return 0;
    }

    printf("%d\n", findFloor(arr, n, x));

    free(arr);
    return 0;
}
