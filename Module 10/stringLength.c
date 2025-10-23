#include<stdio.h>
#include<string.h>
int main()
{
    char arr[101];
    scanf("%s", &arr);
    int count= 0;
    // for(int i= 0; i<101; i++){
    //     if(arr[i]=='\0'){
    //         break;
    //     }
    //     count++;
    // }

    for(int i= 0; arr[i]!= '\0'; i++){
        count++;
    }

    int length= strlen(arr);
    printf("The length of string using length function: %d\n", length);

    printf("The length of string manually: %d\n", count);

    return 0;
}