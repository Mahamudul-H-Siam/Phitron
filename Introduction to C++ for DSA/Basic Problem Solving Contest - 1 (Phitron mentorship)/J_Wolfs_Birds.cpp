#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    for(int i= 0; i<t; i++){
        int n;
        cin>> n;
        string s;
        cin>> s;
        int count= 0;
        for(int j= 0; j<n; j++){
            if(s[j]!='1'){
                count++;
            }
            else{
                break;
            }
        }
        cout<< count<< endl;
    }

    return 0;
}