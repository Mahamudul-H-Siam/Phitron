#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    if(a> 0){
        printf("Positive number\n");
    }
    else if(a< 0){
        printf("Negative number\n");
    }
    else{
        printf("Zero\n");
    }
    return 0;
}