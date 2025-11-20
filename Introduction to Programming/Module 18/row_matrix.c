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
    if(row== column)
        printf("This is a square matrix.");
    else
        printf("This is not a square matrix.");

    return 0;
}