#include<stdio.h>
int main()
{
    long long int a, b, c, d, val1, val2, val;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    val1= (a*b);
    val2= (c*d);
    val= val1- val2;
    printf("Difference = %lld", val);

    return 0;
}