#include <stdio.h>
int main()
{
    char a;
    scanf("%c", &a);
    int n= a;
    if (n >= 48 && n <= 57)
    {
        printf("IS DIGIT\n");
    }
    else
    {
        printf("ALPHA\n");
        if(n>= 60 && n<= 90){
            printf("IS CAPITAL\n");
        }
        if(n>= 97 && n<= 122){
            printf("IS SMALL\n");
        }
    }

    return 0;
}