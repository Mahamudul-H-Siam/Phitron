#include<bits/stdc++.h>
using namespace std;
int main(){
    int x, y, k;
    cin>> x>> y>> k;
    if(x<0){
        x= x* -1;
    }
    if(x>= 1 && x<=20 && k>= 1 && k<=20 && k>= 1 && k<=20){
        int result= x-y;
        if(result<0){
            result= result * -1;
        }
        if(result<= k){
            cout<< "Yes";
        }
        else{
            cout<< "No";
        }
    }

    return 0;
}