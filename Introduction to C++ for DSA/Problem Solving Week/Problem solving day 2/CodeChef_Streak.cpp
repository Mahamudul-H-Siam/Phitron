#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        int a[n], b[n];
        for(int i= 0; i<n; i++){
            cin>> a[i];
        }
        for(int i= 0; i<n; i++){
            cin>> b[i];
        }
        int count_a[n]= {0};
        int count_b[n]= {0};
        int count_track_a= 0;
        int count_track_b= 0;
        for(int i= 0; i<n; i++){
            if(a[i]!= 0){
                count_a[count_track_a]= count_a[count_track_a] + 1;
            }
            else if(a[i]== 0){
                count_track_a++;
            }

            if(b[i]!= 0){
                count_b[count_track_b]= count_b[count_track_b] + 1;
            }
            else if(b[i]== 0){
                count_track_b++;
            }
        }
        int a_max= count_a[0];
        int b_max= count_b[0];
        for(int i= 1; i<n; i++){
            if(a_max<=count_a[i]){
                a_max= count_a[i];
            }
            if(b_max<=count_b[i]){
                b_max= count_b[i];
            }
        }
        if(a_max> b_max){
            cout<< "Om" << endl;
        }
        else if(a_max< b_max){
            cout<< "Addy" << endl;
        }
        else{
            cout<< "Draw" << endl;
        }
    }

    return 0;
}