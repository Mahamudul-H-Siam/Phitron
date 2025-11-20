#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int x;
    x= n%10;
    n= n/ 10;
    if(x== 0){
        printf("YES");
    }
    else{
        if(n%x== 0 || x% n== 0){
            printf("YES");
        }
        else{
            printf("NO");
        }
    }
    
    return 0;
}