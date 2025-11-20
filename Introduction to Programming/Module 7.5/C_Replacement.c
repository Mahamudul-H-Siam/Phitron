#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int positive= 1, negetive= 2;
    for(int i= 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i= 0; i<n; i++){
        if(arr[i]<0){
            arr[i]= negetive;
            printf("%d ", arr[i]);
        }
        else if(arr[i]>0){
            arr[i]= positive;
            printf("%d ", arr[i]);
        }
        else{
            printf("%d ", arr[i]);
        }
    }

    return 0;
}