#include<stdio.h>
#include<string.h>
int main()
{
    char s[100001];
    scanf("%s", s);
    long long int count= 0;
    for(int i= 0; i<=strlen(s); i++){
        if(s[i]== 'a' || s[i]== 'e' || s[i]== 'i' || s[i]== 'o' || s[i]== 'u'){
            count++;
        }
    }
    long long int consonents= strlen(s)- count;
    printf("%lld", consonents);

    return 0;
}