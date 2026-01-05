#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin>> n>> m;
    int arr[n][m];
    for(int i= 0; i< n; i++){
        for(int j= 0; j<m; j++){
            cin>> arr[i][j];
        }
    }
    if(n==1){
        cout<< "YES" << endl;
        return 0;
    }
    long long fixedSum= 0;
    for(int i= 0; i< n; i++){
        long long rowSum= 0;
        int zeroCount= 0;
        for(int j= 0; j<m; j++){
            rowSum= rowSum + arr[i][j];
            if(arr[i][j]== 0){
                zeroCount= 1;
            }
        }
        if(zeroCount== 0){
            if(fixedSum== 0) {
                fixedSum= rowSum;
            } 
            else if(rowSum!= fixedSum){
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout<< "YES" << endl;

    return 0;
}