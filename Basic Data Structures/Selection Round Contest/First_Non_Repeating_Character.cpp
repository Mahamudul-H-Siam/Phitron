#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>> s;
    int arr[26]= {0};
    for(int i= 0; s[i]!= '\0'; i++){
        int index= s[i]- 'a';
        arr[index]++;
    }
    int flag= -1;
    for(int i= 0; s[i]!= '\0'; i++){
        int index= s[i]- 'a';
        if(arr[index]== 1){
            cout<< s[i] << endl;
            flag= 1;
            break;
        }
    }
    if(flag== -1){
        cout<< "-1" << endl;
    }

    return 0;
}