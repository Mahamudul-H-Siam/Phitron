#include<stdio.h>
int maxi(int arr[], int n){
    int a= arr[0];
    for(int i= 0; i<n; i++){
        if(a<arr[i]){
            a= arr[i];
        }
    }
    return a;
}
int mini(int arr[], int n){
    int a= arr[0];
    for(int i= 0; i<n; i++){
        if(a>arr[i]){
            a= arr[i];
        }
    }
    return a;
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i= 0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int max_value= maxi(arr, n);
    int min_value= mini(arr, n);
    printf("%d %d", min_value, max_value);
    return 0;
}