#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i= 1; i<=n; i++){
        for(int j= 1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

//23 rim boro kagoj a khata hoy 50 ta:   83 taka porbo