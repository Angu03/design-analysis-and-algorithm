//1-G-Coin Problem
/*Write a program to take value V and  we want to make change for V Rs, and we have infinite supply of each of the denominations in Indian currency, i.e., 
we have infinite supply of { 1, 2, 5, 10, 20, 50, 100, 500, 1000} valued coins/notes, what is the minimum number of coins and/or notes needed to make the change.*/
#include <stdio.h>

int main() {
    int V;
    if (scanf("%d", &V) != 1) return 0;

    int denominations[] = {1000, 500, 100, 50, 20, 10, 5, 2, 1};
    int n = sizeof(denominations) / sizeof(denominations[0]);
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (V >= denominations[i]) {
            count += V / denominations[i];
            V %= denominations[i];
        }
    }

    printf("%d\n", count);
    return 0;
}
