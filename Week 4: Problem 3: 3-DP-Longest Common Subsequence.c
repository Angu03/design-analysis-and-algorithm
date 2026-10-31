/* 3-DP-Longest Common Subsequence
Given two strings find the length of the common longest subsequence(need not be contiguous) between the two.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    char s1[1005], s2[1005];
    if (scanf("%s", s1) != 1) return 0;
    if (scanf("%s", s2) != 1) return 0;

    int m = strlen(s1);
    int n = strlen(s2);

    int* prev = (int*)calloc(n + 1, sizeof(int));
    int* curr = (int*)calloc(n + 1, sizeof(int));

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (s1[i - 1] == s2[j - 1]) {
                curr[j] = 1 + prev[j - 1];
            } else {
                curr[j] = max(prev[j], curr[j - 1]);
            }
        }
        for (int j = 0; j <= n; j++) {
            prev[j] = curr[j];
        }
    }

    printf("%d\n", prev[n]);

    free(prev);
    free(curr);
    return 0;
}
