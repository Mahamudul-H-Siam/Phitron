#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        cin.ignore();
        string s;
        cin>> s;
        int a_flag= 1;
        int b_flag= 0;
        int a_count= 0;
        int b_count= 0;
        for(int i= 0; i<n; i++){
            if(s[i] == 'A'){
                if(a_flag==1){
                    a_count++;
                }
                else if(a_flag== 0){
                    a_flag= 1;
                    b_flag= 0;
                }
            }
            else if(s[i]== 'B'){
                if(b_flag== 1){
                    b_count++;
                }
                else if(b_flag== 0){
                    b_flag= 1;
                    a_flag= 0;
                }
            }
        }
        cout<< a_count << " " << b_count<< endl;
    }

    return 0;
}