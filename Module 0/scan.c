#include<stdio.h>
int main(){
    int n;
    float f;
    char c;
    
    scanf("%d", &n);
    scanf("%f %c", &f, &c);

    printf("The integer value is: %d\n", n);
    printf("The float value is: %.3f\n", f);
    printf("The Character is: %c\n", c);

    return 0;
}