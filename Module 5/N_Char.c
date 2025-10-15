#include<stdio.h>
int main()
{
    char a;
    scanf("%c", &a);
    int num= a;
    // printf("%d", a);
    if(num<= 90 && num>= 65){ 
        printf("%c", a+32);
    }
    if(num>= 97 && num<= 122){
        printf("%c", a-32);
    }

    return 0;
}