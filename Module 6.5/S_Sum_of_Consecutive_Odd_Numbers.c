#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int k = 0; k < n; k++)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        int sum = 0;
        if (x < y)
        {
            for (int i = x + 1; i < y; i++)
            {
                if (i % 2 == 1)
                {
                    sum = sum + i;
                }
            }
        }
        else
        {
            for (int i = y + 1; i < x; i++)
            {
                if (i % 2 == 1)
                {
                    sum = sum + i;
                }
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}