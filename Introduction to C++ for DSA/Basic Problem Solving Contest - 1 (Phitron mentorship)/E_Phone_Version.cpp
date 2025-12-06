#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>> x;
    if( x>= 1973 && x<= 2024){
        int value1= x% 10;
        int cut_x= x/10;
        int value2= cut_x% 10;
        char k= 'K'; 
        char c1= value2+ '0';
        char c2= value1+ '0';
        cout<< k << c1 << c2;
    }

    return 0;
}