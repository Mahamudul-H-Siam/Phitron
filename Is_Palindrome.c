#include<stdio.h>
#include<string.h>

int is_palindrome(char s[]){
    int flag= 1;
    int i= 0;
    int j= strlen(s)- 1;
    while(i<j){
        if(s[i]!= s[j]){
            flag= 0; 
            return flag;
        }
        i++;
        j--;
    }
    return flag;
}

int main()
{
    char s[1001];
    scanf("%s", s);
    int flag= is_palindrome(s);
    if(flag== 1){
        printf("Palindrome");
    }
    if(flag== 0){
        printf("Not Palindrome");
    }

    return 0;
}