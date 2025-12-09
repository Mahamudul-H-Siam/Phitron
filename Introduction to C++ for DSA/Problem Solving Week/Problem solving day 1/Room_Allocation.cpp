#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        int ar[n];
        for(int i= 0; i<n; i++){
            cin>> ar[i];
        }
        int room_need= 0;
        for(int i= 0; i<n; i++){
            if(ar[i]%2== 0){
                room_need= room_need + (ar[i]/2);
            }
            else{
                room_need= room_need + ((ar[i]/2) + 1);
            }
        }
        cout<< room_need << endl;
    }

    return 0;
}