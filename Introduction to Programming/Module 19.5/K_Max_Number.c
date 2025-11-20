#include<stdio.h>
int find_max(int arr[], int n){
    if(n==0){
        return arr[0];
    }
    int max_value= find_max(arr, n-1);
    if(arr[n-1]> max_value){
        return arr[n-1];
    }
    else{
        return max_value;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i= 0; i< n; i++){
        scanf("%d", &arr[i]);
    }
    int ans= find_max(arr, n);
    printf("%d", ans);

    return 0;
}