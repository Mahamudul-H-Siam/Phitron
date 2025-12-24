#include <iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    int arr[n];
    for(int i= 0; i<n; i++){
        cin>> arr[i];
    }
    int index= arr[0];
    int final= 1;
    int temp= 1;
    for(int i= 0; i<n; i++){
        if(arr[i]== arr[i+ 1]){
            temp++;
        } 
        else{
            if(temp> final){
                final= temp;
                index= arr[i- 1];
            }
            temp= 1;
        }
    }
    if(temp> final){
        final= temp;
        index= arr[n- 1];
    }
    cout<< index << " " << final;
    return 0;
}
