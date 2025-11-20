#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char s[101];
    for(int i= 0; i<n; i++){
        scanf("%s", s);
        if(strlen(s)<=10){
            printf("%s\n", s);
        }
        else{
            printf("%c", s[0]);
            printf("%d", strlen(s)-2);
            printf("%c\n", s[strlen(s)-1]);
        }
    }

    return 0;
}