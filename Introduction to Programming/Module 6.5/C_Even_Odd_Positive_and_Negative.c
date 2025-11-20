#include<stdio.h>
int main()
{
    int n, even_count= 0, odd_count= 0, positive_count= 0, negative_count= 0;
    long long int input_value;
    scanf("%d", &n);
    for(int i= 0; i<n; i++){
        scanf("%lld", &input_value);
        if(input_value%2== 0){
            even_count++;
        }
        else{
            odd_count++;
        }

        if(input_value>= 1){
            positive_count++;
        }
        else if(input_value<0){
            negative_count++;
        }
    }

    printf("Even: %d\n", even_count);
    printf("Odd: %d\n", odd_count);
    printf("Positive: %d\n", positive_count);
    printf("Negative: %d\n", negative_count);

    return 0;
}