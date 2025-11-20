#include<stdio.h>
void numbers(int i, int n){
    if(1+n==i){
        return;
    }
    else{
        printf("%d ", i);
        numbers(i+1, n);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    numbers(1, n);

    return 0;
}