#include<bits/stdc++.h>
using namespace std;
int main(){
    int x, y;
    cin>> x>> y;
    int travel_distance= x * y;
    if(travel_distance>= 100){
        cout<< "Yes";
    }
    else{
        cout<< "No";
    }

    return 0;
}