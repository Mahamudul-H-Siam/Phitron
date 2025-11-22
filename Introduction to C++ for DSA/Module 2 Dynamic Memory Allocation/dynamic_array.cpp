#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<< "Enter the number of array size: ";
    cin>> n;
    int * a= new int[n];
    for(int i= 0; i<n; i++){
        cin>> a[i];
    }
    for(int i= 0; i<n; i++){
        cout<< a[i] << " ";
    }

    return 0;
}