#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>> x;
    if(x>= 100 && x<= 999){
        if(x== 404){
            cout<< "NOT FOUND";
        }
        else{
            cout<< "FOUND";
        }
    }

    return 0;
}