#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i= 0; i<n; i++){
        int capitalCount= 0, smallCount= 0, digitCount= 0;
        char s[10001]; 
        scanf("%s", s);
        for(int i= 0; i< strlen(s); i++){
            if(s[i]>= 'a' && s[i]<= 'z'){
                smallCount++;
            }
            else if(s[i]>= 'A' && s[i]<= 'Z'){
                capitalCount++;
            }
            else if(s[i]>= '0' && s[i]<= '9'){
                digitCount++;
            }
        }
        printf("%d %d %d\n", capitalCount, smallCount, digitCount);
    }

    return 0;
}