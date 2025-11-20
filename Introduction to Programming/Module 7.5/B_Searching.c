#include<stdio.h>
int main()
{
    int n; 
    scanf("%d", &n);
    int arr[n];
    for(int i= 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int find;
    int key= -1;
    scanf("%d", &find);
    for(int i= 0; i<n; i++){
        if(arr[i]== find){
            key= i;
            break;
        }
    }
    if(key== -1){
        printf("-1");
    }
    else{
        printf("%d", key);
    }
    

    return 0;
}