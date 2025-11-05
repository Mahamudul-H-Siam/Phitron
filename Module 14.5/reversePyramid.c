/**
 * This C program takes an integer input and prints a pyramid pattern of stars with the number of rows
 * specified by the input.
 * 
 * @return The main function in the code is returning an integer value, which is 0.
 */
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i= n; i>= 1; i--){
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