#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    for(int i= 0; i<t; i++){
        int w, p, k;
        cin>> w>> p>> k;
        int result= 0;
        if(w<=k){
            result= w*2;
            result= result + (k-w);
        }
        else{
            result= k*2; 
        }
        cout<< result<< endl;
    }

    return 0;
}