#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000001];
    scanf("%s", &s);
    long long int sum= 0;
    for(int i= 0; i< strlen(s); i++){
        int digit= s[i];
        int value= digit- '0';
        // printf("%c", digit);
        sum= sum + value;
    }
    printf("%lld", sum);

    return 0;
}