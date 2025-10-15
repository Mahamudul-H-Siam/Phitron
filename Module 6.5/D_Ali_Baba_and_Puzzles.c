#include<stdio.h>
int main()
{
    long long int a, b, c;
    long long int d;
    long long int cheacker1= 0, cheacker2= 0, cheacker3= 0, cheacker4= 0;
    long long int cheacker5= 0, cheacker6= 0;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    cheacker1= a+ b- c;
    cheacker2= a+ b* c;
    cheacker3= a* b+ c;
    cheacker4= a* b- c;
    cheacker5= a- b* c;
    cheacker6= a- b+ c;
    if(cheacker1== d){
        printf("YES");
    }
    else if (cheacker2== d){
        printf("YES");
    }
    else if (cheacker3== d){
        printf("YES");
    }
    else if (cheacker4== d){
        printf("YES");
    }
    else if (cheacker5== d){
        printf("YES");
    }
    else if (cheacker6== d){
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}