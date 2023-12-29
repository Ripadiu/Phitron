#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int s = n - 1;
    int a = 1;
    int s2 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < s; j++)
            printf(" ");
        if (s2 % 2 == 0)
        {
            for (int k = 0; k < a; k++)
                printf("#");
            s2++;
        }
        else
        {
            for (int k = 0; k < a; k++)
                printf("-");
            s2++;
        }
        printf("\n");
        s--;
        a += 2;
    }
    s+=2;
    a -= 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = s; j > 0; j--)
            printf(" ");
        if (s2 % 2 == 0)
        {
            for (int k = a; k > 0; k--)
                printf("#");
            s2++;
        }
        else
        {

            for (int k = a; k > 0; k--)
                printf("-");
            s2++;
        }

        printf("\n");
        s++;
        a -= 2;
    }
    return 0;
}
