#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int input_values;
        scanf("%d", &input_values);
        do
        {
            printf("%d ", input_values% 10);
            input_values /= 10;
        } while (input_values!= 0);
        
        printf("\n");
    }

    return 0;
}