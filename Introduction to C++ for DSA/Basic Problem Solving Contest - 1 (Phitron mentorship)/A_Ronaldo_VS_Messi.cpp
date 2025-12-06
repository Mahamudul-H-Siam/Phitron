#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, x, y;
    cin>> a>> b>> x>> y;
    int messi_cal=0, ronaldo_cal= 0;
    messi_cal= (a*2) + b;
    ronaldo_cal= (x*2) + y;
    if(messi_cal> ronaldo_cal){
        cout<< "Messi";
    }
    else if(messi_cal== ronaldo_cal){
        cout<< "Equal";
    }
    else{
        cout<< "Ronaldo";
    }

    return 0;
}