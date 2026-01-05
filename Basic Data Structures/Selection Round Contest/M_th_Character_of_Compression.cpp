#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int m;
    cin>> s>> m;
    string full = "";
    char previous;
    for(int i= 0; i< s.length(); i++){
        if(s[i]>= 'a'&& s[i]<= 'z'){
            full= full+ s[i];
            previous= s[i];
        }
        else{
            int times= s[i]- '0';
            for(int j= 1; j< times; j++){
                full= full+ previous;
            }
        }
    }
    cout<< full[m- 1]<< endl;

    return 0;
}