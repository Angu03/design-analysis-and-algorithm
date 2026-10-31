//2-G-Cookies Problem
/*Assume you are an awesome parent and want to give your children some cookies. But, you should give each child at most one cookie.
Each child i has a greed factor g[i], which is the minimum size of a cookie that the child will be content with; and each cookie j has a size s[j]. If s[j] >= g[i], 
we can assign the cookie j to the child i, and the child i will be content.
Your goal is to maximize the number of your content children and output the maximum number.*/

#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int *)a > *(int *)b) - (*(int *)a < *(int *)b);
}

int main()
{
    int n, m;

    scanf("%d", &n);

    int *g = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
        scanf("%d", &g[i]);

    scanf("%d", &m);

    int *s = (int *)malloc(m * sizeof(int));

    for (int i = 0; i < m; i++)
        scanf("%d", &s[i]);

    qsort(g, n, sizeof(int), compare);
    qsort(s, m, sizeof(int), compare);

    int child = 0;
    int cookie = 0;
    int content = 0;

    while (child < n && cookie < m)
    {
        if (s[cookie] >= g[child])
        {
            content++;
            child++;
        }

        cookie++;
    }

    printf("%d", content);

    free(g);
    free(s);

    return 0;
}
