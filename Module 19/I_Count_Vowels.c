// #include<stdio.h>

// int total_vowels(char s[], int n, int count){
//     if(s[n]== '\0'){
//         return count;
//     }
//     if(s[n]== 'A' || s[n]== 'a' || s[n]== 'E' || s[n]== 'e' || s[n]== 'I' || s[n]== 'i' || s[n]== 'O' || s[n]== 'o' || s[n]== 'U' || s[n]== 'u'){       
//         count++;
//         return total_vowels(s, n+1, count);
//     }
//     return total_vowels(s, n+1, count);
// }
// int main()
// {
//     char s[201];
//     fgets(s, 201, stdin);
//     int count= total_vowels(s, 0, 0);
//     printf("%d", count);

//     return 0;
// }

#include<stdio.h>
int total_vowels(char s[], int n){
    if(s[n]== '\0'){
        return 0;
    }
    int count= total_vowels(s, n+1);
    if(s[n]== 'A' || s[n]== 'a' || s[n]== 'E' || s[n]== 'e' || s[n]== 'I' || s[n]== 'i' || s[n]== 'O' || s[n]== 'o' || s[n]== 'U' || s[n]== 'u'){
        return count + 1;
    }
    else{
        return count;
    }
}
int main()
{
    char s[201];
    fgets(s, 201, stdin);
    int answer= total_vowels(s, 0);
    printf("%d", answer);

    return 0;
}