#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int arr[3];
    arr[0]= a;
    arr[1]= b;
    arr[2]= c;
    for(int i=0, j= 2; i<j; i++, j--){
        if(arr[i]>arr[j]){
            printf("%d", arr[i]);
            int temp= arr[i];
            arr[i]= arr[j];
            arr[j]= temp;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("\n");
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    

    return 0;
}