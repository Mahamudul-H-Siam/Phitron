#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    int flag= -1;
    string target= "Jessica";
    string word;
    while(ss>> word){
        if(target== word){
            flag= 1;
        }
    }
    if(flag== 1){
        cout<< "YES";
    }
    else{
        cout<< "NO";
    }

    return 0;
}