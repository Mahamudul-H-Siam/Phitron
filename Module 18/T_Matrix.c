#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n];
    int primary_diogonal_sum= 0, secondary_diogonal_sum= 0;
    for(int i= 0; i< n; i++){
        for(int j= 0; j< n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i= 0; i< n; i++){
        for(int j= 0; j< n; j++){
            if(i== j){
                primary_diogonal_sum+= arr[i][j];
            }
            if(i+j== n-1){
                secondary_diogonal_sum+= arr[i][j];
            }
        }
    }
    int final_sum= primary_diogonal_sum - secondary_diogonal_sum;
    if(final_sum<0){
        final_sum= final_sum * -1;
    }
    printf("%d", final_sum);

    return 0;
}