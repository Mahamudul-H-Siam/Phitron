#include<stdio.h>
void print_recursion(int n, int i){
    if(n+1== i)
        return;
    printf("%d\n", i);
    print_recursion(n, i+1);
}
int main()
{
    int n;
    scanf("%d", &n);
    print_recursion(n, 1);

    return 0;
}