#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--){
        char s[1002];
        scanf("%s", s);
        int char_ar[26]= {0};
        for(int i= 0; s[i]!= '\0'; i++){
            char_ar[s[i]- 'a']++;
        }
        int count= 0;
        for(int i= 0; i<26; i++){
            if(char_ar[i]% 2!= 0){
                count ++;
            }
        }
        if(count<= 1){
            printf("0\n");
        }
        else
            printf("%d\n", count-1);
    }

    return 0;

    return 0;
}