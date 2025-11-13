#include<stdio.h>
int main(){
    int row, column;
    scanf("%d %d", &row, &column);
    int arr[ row][column];
    for(int i= 0; i<row; i++){
        for(int j= 0; j<column; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int diogonal_flag= 1, scaler_flag= 1;
    if(row== column){
        for(int i=0; i<row; i++){
            for(int j= 0; j< column; j++){
                if(i== j){
                    int value= arr[0][0];
                    if(value!= arr[i][j]){
                        scaler_flag= -1;                       
                    }
                }
                else{
                    if(arr[i][j]!= 0){
                        diogonal_flag= -1;
                        printf("This is not a primary diogonal matrix.\n");
                    }
                }
            }
        }
        if(diogonal_flag==1){
            printf("This is a primary diognal matrix.\n");
        }

        
        if(scaler_flag==1){
            printf("This is a scaler matrix.\n");
        }
        else{
            printf("This is a not scaler matrix.\n");
        }
    }
    else{
        printf("This is not a primary diogonal matrix, Because it is not a aquare matrix.\n");
    }

    return 0;
}