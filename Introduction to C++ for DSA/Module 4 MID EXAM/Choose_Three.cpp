#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    for(int x= 0; x< t; x++){
        int n, s;
        cin>> n>> s;
        int arr[n];
        for(int i= 0; i<n; i++){
            cin>> arr[i];
        }
        int flag= -1;
        for(int i= 0; i<n; i++){
            for(int j= i+ 1; j<n; j++){
                for(int k= j+ 1; k<n; k++){
                    if(arr[i]+ arr[j]+ arr[k]== s){
                        flag= 1;
                        break;
                    }
                }
            }
        }
        if(flag== 1){
            cout<< "YES"<< endl;
        }
        else{
            cout<< "NO"<< endl;
        }
    }

    return 0;
}