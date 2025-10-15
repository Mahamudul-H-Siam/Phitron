#include<stdio.h>
int main()
{
    char a;
    scanf("%c", &a);
    int value= a;
    if(value == 'z'){
        printf("a");
    }
    else{
        value+= 1;
        printf("%c", value);
    }

    return 0;
}