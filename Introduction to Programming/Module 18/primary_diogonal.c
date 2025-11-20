#include<stdio.h>
int main()
{
    int row, column;
    scanf("%d %d", &row, &column);
    int arr[row][column];
    if(row!= column){
        printf("This is not a diogonal matrix.");
        return 0;
    }
    for(int i= 0; i<row; i++){
        for(int j= 0; j<column; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int flag= 1;
    for(int i= 0; i<row; i++){
        for(int j= 0; j<column; j++){
            if(i==j && arr[i][j]== 0){
                flag= -1;
                break;
            }
            if(i!= j && arr[i][j]!= 0){
                flag= -1; 
                break;
            }
        }
    }
    if(flag== 1)
        printf("This is a diogonal matrix.");
    else if(flag== -1)
        printf("This is not a diogonal matrix.");

    return 0;
}