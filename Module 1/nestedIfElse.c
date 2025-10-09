#include<stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if(tk>= 5000){
        printf("Cox's Bazar jabo\n");
        if(tk>= 10000){
            printf("Saint Martin jabo\n");
        }
        else{
            printf("Saint Martin jabo na\n");
        }
    }
    else{
        printf("Kothay o jabo na\n");
    }

    return 0;
}