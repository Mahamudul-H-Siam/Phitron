#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i= 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int flag= 1;
    for(int i= 0, j= n-1; i<j; i++, j--){
        if(arr[i]!= arr[j]) flag= -1;
    }
    if(flag== 1)
        printf("YES");
    else
        printf("NO");

    return 0;
}