#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001], t[1001];
    scanf("%s", &s);
    scanf("%s", &t);
    printf("%d %d\n", strlen(s), strlen(t));
    int lengthS= strlen(s);
    int lengthT=  strlen(t);
    int length= lengthS + lengthT+ 2;
    char final [length];
    for(int i= 0; i<lengthS; i++){
        final[i]= s[i];
    }
    final[lengthS]= ' ';
    for(int i= 0; i< lengthT; i++){
        final[lengthS+ 1+ i]= t[i];
    }
    final[lengthS+ 1+ lengthT]= '\0';
    printf("%s", final);

    return 0;
}