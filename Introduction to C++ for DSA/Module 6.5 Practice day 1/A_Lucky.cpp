#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>> n;
    for(int i= 0; i<n; i++){
        string s;
        cin>> s;
        string first= s;
        first.erase(3);
        string second= s;
        second.erase(0, 3);

        int first_sum= 0, second_sum= 0;
        
        for(int i= 0; i<3; i++){
            first_sum+= (int)first[i]- '0';
        }
        for(int i= 0; i<3; i++){
            second_sum+= (int)second[i]- '0';
        }


        if(first_sum == second_sum){
            cout<< "YES" << endl;
        }
        else{
            cout<< "NO" << endl;
        }
    }

    return 0;
}