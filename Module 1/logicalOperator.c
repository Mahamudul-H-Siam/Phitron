#include<stdio.h>
int main(){
    int a= 10;
    int b= 20;
    int c= 10;

    //for and
    if(a==b && a==c){
        printf("True...\n");
    }
    else
        printf("False!!!!!\n");

    //for or
    if(a<=b || a==c){
        printf("True...\n");
    }
    else
        printf("False!!!!!\n");

    return 0;
}