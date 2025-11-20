#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star= 1;
    int space= n- 1;
    for(int i= 1; i<= n; i++){
        for(int j=1; j<= space; j++){
            printf(" ");
        }
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        star= star+ 2;
        space--;
        printf("\n");
    }
    for(int i= n-1; i>= 1; i--){
        for(int j= n; j> i; j--){
            printf(" ");
        }
        for(int j= 1; j<= (2*i - 1); j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}