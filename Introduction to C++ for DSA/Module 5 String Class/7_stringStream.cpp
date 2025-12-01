#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    cout<<"After input the string is: ";
    cout<< s<< endl;
    // stringstream ss;
    // ss<< s;
    stringstream ss(s);
    string word;
    while(ss >> word){
        cout<< word << endl;
    }

    return 0;
}