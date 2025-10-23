#include<stdio.h>
#include<string.h>
int main()
{
    char a[11], b[11];
    scanf("%s", a);
    scanf("%s", b);
    int aSize= strlen(a);
    int bSize= strlen(b);
    int size= aSize+ bSize;
    printf("%d %d\n", aSize, bSize);
    char final[size+1];
    for(int i= 0; i<aSize; i++){
        final[i]= a[i];
    }
    for(int i= 0; i<bSize; i++){
        int val= aSize+i;
        final[val]= b[i];
    }
    final[size]= '\0';
    printf("%s\n", final);
    int temp= a[0];
    a[0]= b[0];
    b[0]= temp;
    for(int i= 0; i<aSize; i++){
        printf("%c", a[i]);
    }
    printf(" ");
    for(int i= 0; i<bSize; i++){
        printf("%c", b[i]);
    }

    return 0;
}