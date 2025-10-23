#include<stdio.h>
#include<string.h>
int main()
{
    char a[11], b[11];
    scanf("%s %s", a, b);
    char final[strlen(a)+ strlen(b)];
    for(int i= 0; i< strlen(a); i++){
        final[i]= a[i];
    }
    for(int i= 0; i<=strlen(b); i++){
        final[i+ strlen(a)]= b[i];
    }
    printf("%s", final);

    return 0;
}