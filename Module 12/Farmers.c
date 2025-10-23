#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i= 0; i<n; i++){
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);
        int m1Works= m1* d;
        int workTogether= m1+ m2;
        int finalWorkingDays= m1Works/ workTogether;
        finalWorkingDays= d- finalWorkingDays;
        printf("%d\n", finalWorkingDays);
    }

    return 0;
}