#include<stdio.h>
int main()
{
    int row, column;
    scanf("%d %d", &row, &column);
    int arr[row][column];
    for(int i= 0; i<row; i++){
        for(int j= 0; j<column; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int flag= 1;
    for(int i= 0; i<row; i++){
        for(int j= 0; j<column; j++){
            if(arr[i][j]!= 0){
                flag= -1;
                break;
            }
        }
    }
    if(flag== 1)
        printf("This is a zero matrix.");
    else if(flag== -1)
        printf("This is not a zero matrix.");

    return 0;
}