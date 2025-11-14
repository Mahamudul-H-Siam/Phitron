#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i= 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int max= arr[0];
    int min= arr[0];
    int maxIndex= 0;
    int minIndex= 0;
    for(int i= 0; i<n; i++){
        if(arr[i]< min){
            min= arr[i];
            minIndex= i;
        }
        if(arr[i]> max){
            max= arr[i];
            maxIndex= i;
        }
    }
    arr[maxIndex]= min;
    arr[minIndex]= max;
    for(int i= 0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}