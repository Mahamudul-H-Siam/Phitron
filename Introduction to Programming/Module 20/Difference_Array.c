#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int i= 0; i<t; i++){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int j= 0; j<n; j++){
            scanf("%d", &arr[j]);
        }
        int arr_b[n];
        for(int j= 0; j<n; j++){
            arr_b[j]= arr[j];
        }
        for(int x= 0; x<n; x++){
            for(int y= x+1; y<n; y++){
                if(arr_b[x]>arr_b[y]){
                    int temp= arr_b[x];
                    arr_b[x]= arr_b[y];
                    arr_b[y]= temp;
                }
            }
        }
        int arr_c[n];
        for(int x= 0; x<n; x++){
            arr_c[x]= arr[x]- arr_b[x];
            if(arr_c[x]<0){
                arr_c[x]= arr_c[x] * -1;
            }
            printf("%d ", arr_c[x]);
        }
        printf("\n");
    }

    return 0;
}