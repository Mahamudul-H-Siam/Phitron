#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
        char c[6];
        for(int i= 0; i<6; i++){
            cin>> c[i];
        }
        int hat_trick= 0;
        for(int i= 0; i<6; i++){
            if(c[i]== 'W'){
                if(c[i]== c[i+1] && c[i+1]== c[i+2] && c[i]== c[i+2]){
                    hat_trick= 1;
                    break;
                }
            }
        }
        if(hat_trick== 1)
            cout<< "YES" << endl;
        else
            cout<< "NO" << endl;
    }

    return 0;
}