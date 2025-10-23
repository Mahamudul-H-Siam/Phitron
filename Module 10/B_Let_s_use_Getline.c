#include<stdio.h>
#include<string.h>
int main()
{
    char arr[1000001];
    fgets(arr, 1000001, stdin);
    for(int i= 0; i<1000001; i++){
        if(arr[i]== '\\'){
            break;
        }
        printf("%c", arr[i]);
    }

    // for (int i = 0; arr[i]!='\\'; i++)
    // {
    //     printf("%c", arr[i]);
    // }
    

    return 0;
}