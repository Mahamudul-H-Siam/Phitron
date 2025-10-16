#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i= 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int positive_sum= 0, negetive_sum= 0;
    for(int i= 0; i<n; i++){
        if(arr[i]<0){
            negetive_sum= negetive_sum + arr[i];
        }
        else if(arr[i]>0){
            positive_sum= positive_sum + arr[i];
        }
    }
    printf("%d %d", positive_sum, negetive_sum);

    return 0;
}