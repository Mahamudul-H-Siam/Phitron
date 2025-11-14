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
    if(row==column){
        for(int i= 0; i<row; i++){
            for(int j= 0; j<column; j++){
                if(i==j || i+j== row-1){
                    if(arr[i][j]!= 1){
                        flag= -1;
                    }
                }
                else{
                    if(arr[i][j]!= 0){
                        flag= -1;
                    }
                }
            }
        }
        if(flag==1){
            printf("YES");
        }
        else{
            printf("NO");
        }
    }
    else{
        printf("NO");
    }

    return 0;
}