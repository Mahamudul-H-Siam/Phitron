#include<stdio.h>
void print_order(int x){
    if(x==0){
        return;
    }
    print_order(x/10);
    int value= x%10;
    printf("%d ", value);
}
int main()
{
    int n;
    scanf("%d", &n);
    for(int i= 1; i<= n; i++){
        int x;
        scanf("%d", &x);
        if(x==0){
            printf("0");
        }
        print_order(x);
        printf("\n");
    }

    return 0;
}