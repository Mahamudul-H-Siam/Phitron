#include<stdio.h>
long long int sum_array(int arr[], int n, long long int sum){
    if(n==0)
        return sum;
    sum= sum+ arr[n-1];
    return sum_array(arr, n-1, sum);
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    long long int sum= sum_array(arr, n, 0);
    printf("%lld", sum);

    return 0;
}