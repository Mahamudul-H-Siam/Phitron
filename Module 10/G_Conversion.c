#include<stdio.h>
#include<string.h>
int main()
{
    char s[100001];
    scanf("%s", &s);

    for(int i= 0; i< strlen(s); i++){
        int character= s[i];
        if(character<= 'z' && character >= 'a'){
            s[i]= s[i]- 32;
        }
        if(character<= 'Z' && character >= 'A'){
            s[i]= s[i]+ 32;
        }
        if(s[i]==','){
            s[i]= ' ';
        }
    }
    printf("%s", s);

    return 0;
}