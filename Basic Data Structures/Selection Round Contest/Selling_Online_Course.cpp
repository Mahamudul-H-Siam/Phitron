#include<bits/stdc++.h>
using namespace std;
int main(){
    long long x;
    cin>> x;
    if(x== 0){
        cout<< 0 << endl;
        return 0;
    }
    double cal= x*0.2;
    long long result= ceil(100/ cal);
    cout<< result << endl;

    return 0;
}