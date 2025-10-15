#include<stdio.h>
int main()
{
    int n;
    long long int input_value, max_value= 0;;
    scanf("%d", &n);
    for(int i= 0; i< n; i++){
        scanf("%lld", &input_value);
        if(max_value<input_value){
            max_value= input_value;
        }
    }
    printf("%d", max_value);

    return 0;
}