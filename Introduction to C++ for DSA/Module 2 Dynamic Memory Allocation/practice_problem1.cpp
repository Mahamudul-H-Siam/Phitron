#include<bits/stdc++.h>
using namespace std;
int * get_array(int n){
    int * arr= new int[n];
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }
    return arr;
}

int main(){
    int n;
    cin>> n;
    int * recived_arr= new int[n];
    recived_arr= get_array(n);
    for(int i=0; i<n; i++){
        cout<< recived_arr[i]<< " ";
    }

    return 0;
}