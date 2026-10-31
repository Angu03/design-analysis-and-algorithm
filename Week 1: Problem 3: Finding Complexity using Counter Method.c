//Problem 3: Finding Complexity using Counter Method
//Convert the following algorithm into a program and find its time complexity using counter method.

#include <stdio.h>
void Factor(int num) {
    int count = 0;
    int i;
    count++; 
    for (i = 1; i <= num; ++i) {
     
        count += 2;         
        if (num % i == 0) {           
            count++; 
        }
    }
    printf("%d", count);
}
int main() {
    int n;
    scanf("%d", &n);
    Factor(n);
    return 0;
}
