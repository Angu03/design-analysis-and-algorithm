//Problem 5: Finding Complexity using counter method
//Convert the following algorithm into a program and find its time complexity using counter method.

#include <stdio.h>

void reverse(int n) {
    int rev = 0, remainder;
    int count = 2; 

    while (n != 0) {
        count++; 
        
        remainder = n % 10;
        count++; 
        
        rev = rev * 10 + remainder;
        count++; 
        
        n /= 10;
        count++; 
    }
    count++; 

    printf("%d\n", count);
}

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        reverse(n);
    }
    return 0;
}
