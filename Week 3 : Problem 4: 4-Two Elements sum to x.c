/*4-Two Elements sum to x
Given a sorted array of integers say arr[] and a number x.
Write a recursive program using divide and conquer strategy to check if there exist two elements in the array whose sum = x. 
If there exist such two elements then return the numbers, otherwise print as “No”.
Note: Write a Divide and Conquer Solution */

#include <stdio.h>

int findPair(int arr[], int left, int right, int x, int *a, int *b)
{
    if (left >= right)
        return 0;

    if (arr[left] + arr[right] == x)
    {
        *a = arr[left];
        *b = arr[right];
        return 1;
    }

    if (arr[left] + arr[right] > x)
        return findPair(arr, left, right - 1, x, a, b);

    return findPair(arr, left + 1, right, x, a, b);
}

int main()
{
    int n, x, a, b;
    int arr[100000];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &x);

    if (findPair(arr, 0, n - 1, x, &a, &b))
    {
        printf("%d\n", a);
        printf("%d\n", b);
    }
    else
    {
        printf("No\n");
    }

    return 0;
}
