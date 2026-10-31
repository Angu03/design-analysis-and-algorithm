/*1-Finding Duplicates-O(n^2) Time Complexity,O(1) Space Complexity
Find Duplicate in Array.*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int freq[n + 1];

    for (int i = 0; i <= n; i++) {
        freq[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;

        if (freq[arr[i]] > 1) {
            printf("%d", arr[i]);
            break;
        }
    }

    return 0;
}
