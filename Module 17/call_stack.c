#include<stdio.h>
void mello(){
    printf("Hi, I am in mello!!\n");
}
void gello(){
    printf("Hi, I am in gello!!\n");
    mello();
}
void hello(){    
    printf("Hi, I am in hello!!\n");
    gello();
}

int main(){
    printf("Hi, I am in main!!\n");
    hello();

    return 0;
}