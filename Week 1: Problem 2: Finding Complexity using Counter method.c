//Problem 2: Finding Complexity using Counter method
//Convert the following algorithm into a program and find its time complexity using the counter method.

#include <stdio.h>

int main()
{
    int n;
    int count = 0;

    scanf("%d", &n);

    if(n == 1)
    {
        count = 1;
    }
    else
    {
        
        count = 5 * n + 2;
    }

    printf("%d", count);

    return 0;
}
