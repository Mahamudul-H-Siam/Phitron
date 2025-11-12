#include<stdio.h>
void print_recursion(int n, int original){
    if(n== 0)
        return;
    if(n!= original){
        printf(" ");
    }
    printf("%d", n);
    print_recursion(n-1, original);
}
int main()
{
    int n;
    scanf("%d", &n);
    print_recursion(n, n);

    return 0;
}