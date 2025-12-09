#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
        int n, d;
        cin>> n>> d;
        int a[n];
        for(int i= 0; i<n; i++)
            cin>> a[i];

        int gun_switch= 0;
        int track= 0;
        for(int i= 0; i<n; i++){
            if(track== 0){
                if(a[i]> d){
                    track= 1;
                    gun_switch++;
                }
            }
            if(track==1){
                if(a[i]<= d){
                    track= 0;
                    gun_switch++;
                }
            }
        }
        cout<< gun_switch << endl;
    }

    return 0;
}