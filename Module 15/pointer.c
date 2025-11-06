// #include<stdio.h>
// int main()
// {
//     int x= 10;
//     printf("%d\n", x); 
//     printf("%p\n", &x);

//     int* ptr;
//     ptr= &x;
//     printf("%p\n", ptr);
//     printf("%p\n", &ptr);
//     printf("Print using pointer variable: %d\n", *ptr);

//     return 0;
// }

#include<stdio.h>
int main()
{
    int x= 10;
    int* p= &x;
    printf("%p\n", &x);
    printf("%p\n", p);
    printf("%p\n", &p);

    *p= 20;
    printf("%d\n", x);
    printf("%d\n", *p);

    return 0;
}