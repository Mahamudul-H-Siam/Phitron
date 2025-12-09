#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
        int n, k;
        cin>> n>> k;
        int a[n];
        for(int i= 0; i<n; i++){
            cin>> a[i];
        }
        int waste_track[n]= {0};
        int flag= 0;
        for(int i= 0; i<n; i++){
            if(a[i]>=k){
                waste_track[i]= a[i]% k;
                flag= 1;
            }
            else{
                waste_track[i]= INT_MAX;
            }
        }
        int min= waste_track[0];
        for(int i= 0; i<n; i++){
            if(min> waste_track[i]){
                min= waste_track[i];
            }
        }
        if(flag== 1){
            cout<< min << endl;
        }
        else{
            cout<< -1 << endl;
        }
    }

    return 0;
}