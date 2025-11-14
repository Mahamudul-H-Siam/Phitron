#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int i= 0; i<t; i++){
        long long int m;
        int a, b, c;
        scanf("%lld %d %d %d", &m, &a, &b, &c);
        long long int multi= a * b * c;
        if(multi== 0){
            if(m== 0){
                printf("0");
            }
            else{
                printf("-1");
            }
        }
        else{
            if(m% multi== 0){
                long long int div= m/ multi;
                printf("%lld ", div);
            }
            else{
                printf("-1");
            }
        }
        printf("\n");
    }

    return 0;
}