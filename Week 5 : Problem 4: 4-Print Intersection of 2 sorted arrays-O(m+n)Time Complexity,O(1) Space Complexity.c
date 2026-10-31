//4-Print Intersection of 2 sorted arrays-O(m+n)Time Complexity,O(1) Space Complexity

#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int n1, n2;

        scanf("%d", &n1);
        int a[n1];

        for (int i = 0; i < n1; i++) {
            scanf("%d", &a[i]);
        }

        scanf("%d", &n2);
        int b[n2];

        for (int i = 0; i < n2; i++) {
            scanf("%d", &b[i]);
        }

        int i = 0, j = 0;
        int first = 1;

        while (i < n1 && j < n2) {
            if (a[i] == b[j]) {
                if (!first)
                    printf(" ");

                printf("%d", a[i]);
                first = 0;

                i++;
                j++;
            }
            else if (a[i] < b[j]) {
                i++;
            }
            else {
                j++;
            }
        }

        printf("\n");
    }

    return 0;
}
