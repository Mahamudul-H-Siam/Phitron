#include <stdio.h>

void m(int *p)
{
    int i = 0;
    for (i = 0; i < 5; i++)
        printf("%d ", p[i]);  // This will print: 6 5 3 0 0 (with spaces)
    printf("\n");  // New line for clarity
}

int main()
{
    int a[5] = {6, 5, 3};  // a[3] and a[4] are automatically 0
    m(a);
    return 0;
}