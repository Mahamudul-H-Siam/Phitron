#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
        int n, x, y;
        cin>> n >> x >> y;
        if(n%2==0){
            if((x*n)>=((n/2)*y)){
                cout<< x *n << endl;
            }
            else{
                cout<< ((n/2)* y) << endl;
            }
        }
        else{
            int x_side= x* n;
            int y_side= ((n/2)*y) + x;
            if(x_side>= y_side){
                cout<< x_side << endl;
            }
            else{
                cout<< y_side << endl;
            }
        }
    }

    return 0;
}