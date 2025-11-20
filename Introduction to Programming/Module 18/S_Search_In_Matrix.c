#include<stdio.h>
int main()
{
    int row, column;
    scanf("%d %d", &row, &column);
    int arr[row][column];
    for(int i= 0; i< row; i++){
        for(int j= 0; j< column; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int x;
    scanf("%d", &x);
    int flag= -1;
    for(int i= 0; i< row; i++){
        for(int j= 0; j< column; j++){
            if(arr[i][j]== x){
                flag= 1;
                break;
            }
        }
    }
    if(flag== 1){
        printf("will not take number");
    }
    else if(flag== -1){
        printf("will take number");
    }

    return 0;
}