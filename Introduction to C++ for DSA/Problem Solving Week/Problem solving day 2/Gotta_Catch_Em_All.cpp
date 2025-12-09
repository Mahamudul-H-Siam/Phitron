#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
        int n, x, y;
        cin>> n >> x >> y;
        int ar[n];
        for(int i=0; i<n; i++){
            cin>> ar[i];
        }
        int result= 0;
        for(int i= 0; i<n; i++){
            if((ar[i]*x)<=y){
                result= result + (ar[i]* x);
            }
            else if((ar[i]*x)>=y){
                result+= y;
            }
        }
        cout<< result << endl;
    }

    return 0;
}




/*
int maxi= ar[0];
        int index= 0;
        for(int i= 1; i< n; i++){
            if(maxi< ar[i]){
                maxi= ar[i];
                index= i;
            }
        }
        int calc= maxi * x;
        int result= 0;
        if(calc<= y){
            for(int i= 0; i<n; i++){
                result= result + (ar[i]*x);
            }
        }
        else{
            for(int i= 0; i<n; i++){
                if(i== index){
                    result= result + y;
                }
                else if(ar[i]=>y){
                    result= result + (ar[i]* x);
                }
            }
        }
*/


/*

        int maxi= ar[0];
        // for(int i= 0; i<n; i++){
        //     if(ar[i]>= maxi){
        //         if((ar[i]*x)<=y){
        //             result= result + (ar[i]* x);
        //         }
        //         else{
        //             result+= y;
        //         }
        //     }
        //     else{
        //         result= result + (ar[i]* x);
        //     }
        // }

*/