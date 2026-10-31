/*1-DP-Playing with Numbers
Playing with Numbers:
Ram and Sita are playing with numbers by giving puzzles to each other. 
Now it was Ram term, so he gave Sita a positive integer ‘n’ and two numbers 1 and 3. 
He asked her to find the possible ways by which the number n can be represented using 1 and 3.
Write any efficient algorithm to find the possible ways.*/

#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    if (n == 0 || n == 1 || n == 2) {
        printf("1\n");
        return 0;
    }

    long long fn_3 = 1; 
    long long fn_2 = 1; 
    long long fn_1 = 1; 
    long long current = 0;

    for (int i = 3; i <= n; i++) {
        current = fn_1 + fn_3;
        fn_3 = fn_2;
        fn_2 = fn_1;
        fn_1 = current;
    }

    printf("%lld\n", current);
    return 0;
}
