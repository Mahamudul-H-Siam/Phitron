#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    scanf("%s", s);
    int flag= 1;
    for(int i= 0, j= strlen(s)-1; i<j; i++, j--){
        if(s[i]!= s[j]){
            flag= -1;
            break;
        }
    }
    if(flag== 1){
        printf("YES");
    }
    else printf("NO");

    return 0;
}