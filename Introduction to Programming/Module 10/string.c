#include<stdio.h>
int main()
{
    char arr[10];
    scanf("%s", &arr);
    printf("Printing the string: \n");
    printf("%s", arr);
    printf("\n\nPrinting the garbage value: \n");
    printf("%d", arr[9]);
    printf("\n\nPrinting the null character: \n");
    printf("%d", arr[5]);
    return 0;
}