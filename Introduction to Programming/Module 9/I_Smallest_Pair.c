#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int k = 0; k < t; k++)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        long long int result = 0;
        long long int compare = 1e18;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                result = arr[i] + arr[j] + j - i;
                if (result < compare)
                    compare = result;
            }
        }
        printf("%lld\n", compare);
    }


    return 0;
}