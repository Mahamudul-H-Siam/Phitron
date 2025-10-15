#include<stdio.h>
int main()
{
    int a; 
    scanf("%d", &a);
    for(int i= 1; i<= a; i++){
        int n;
        long long fact= 1;;
        scanf("%d", &n);
        for(int j= 1; j<= n; j++){
            fact = fact* j;
        }
        printf("%lld\n", fact);
    }

    return 0;
}