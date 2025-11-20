#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i= 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int i= 0;
    int i_value= 0; int j_value= n-1;
    while(i<n){
        if(i%2== 0){
            printf("%d ", arr[i_value]);
            i_value++;
        }
        else{
            printf("%d ", arr[j_value]);
            j_value--;
        }
        i++;
    }

    return 0;
}