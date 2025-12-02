#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    string cheack, word;
    cin>> cheack;
    stringstream ss(s);
    int count= 0;
    while(ss>> word){
        if(word == cheack){
            count++;
        }
    }
    cout<< count<< endl;

    return 0;
}