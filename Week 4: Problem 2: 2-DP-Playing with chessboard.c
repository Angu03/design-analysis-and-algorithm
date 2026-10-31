/* 2-DP-Playing with chessboard
Playing with Chessboard:
Ram is given with an n*n chessboard with each cell with a monetary value. 
Ram stands at the (0,0), that the position of the top left white rook. 
He is been given a task to reach the bottom right black rook position (n-1, n-1) constrained 
that he needs to reach the position by traveling the maximum monetary path under the condition
that he can only travel one step right or one step down the board.
Help ram to achieve it by providing an efficient DP algorithm.*/

#include <stdio.h>
#include <stdlib.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int* dp = (int*)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int val;
            if (scanf("%d", &val) != 1) return 0;

            if (i == 0 && j == 0) {
                dp[j] = val;
            } else if (i == 0) {
                dp[j] = dp[j - 1] + val;
            } else if (j == 0) {
                dp[j] = dp[j] + val;
            } else {
                dp[j] = max(dp[j], dp[j - 1]) + val;
            }
        }
    }

    printf("%d\n", dp[n - 1]);

    free(dp);
    return 0;
}
