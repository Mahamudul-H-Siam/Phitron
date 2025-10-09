#include<stdio.h>
int main()
{
    int n= 8;
    int cal= 1;
    for(int i= 1; i<=200; i++){
        cal= i* 8;
        if(cal<=200){
            printf("%d * 8 = %d \n", i, cal);
        }
        else{
            break;
        }
    }

    return 0;
}