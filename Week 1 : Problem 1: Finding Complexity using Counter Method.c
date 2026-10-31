//Problem 1: Finding Complexity using Counter Method
//Convert the following algorithm into a program and find its time complexity using the counter method.

#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int counter = 0;
    int i = 1;
    int s = 1;
    counter += 2;
    while (1) {
        counter++;          
        if (!(s <= n))
            break;
        i++;
        counter++;          
        s += i;
        counter++;         
    }
    printf("%d", counter);
    return 0;
}
