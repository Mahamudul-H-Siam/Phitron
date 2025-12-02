#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>> s;
    cout<< "Before sorting the string: " << s << endl;
    sort(s.begin(), s.end());
    cout<< s << endl;

    return 0;
}