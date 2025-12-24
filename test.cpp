#include<bits/stdc++.h>
using namespace std;
int getChoco(int wrappers){
    if(wrappers < 3) 
        return 0;
    int newChoco = wrappers / 3;
    int rem = wrappers % 3;
    return newChoco + getChoco(newChoco + rem);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int bought = n / 5;
        int extra = getChoco(bought);

        cout << bought + extra << endl;
    }
    return 0;
}
