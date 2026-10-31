//Problem 4: Finding Complexity using Counter Method
//Convert the following algorithm into a program and find its time complexity using counter method.

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int count =0;
    int c =0;

    for (int i = n / 2;(++count &&  i < n); i++)
    {
        for (int j = 1;(++count &&  j < n); j = 2 * j)
        {
            for (int k = 1;(++count &&  k < n); k = k * 2)
                {
                    count++;
                    c++;
               }
        }
    }
     count++;
     printf("%d",count);
    return 0;
}
