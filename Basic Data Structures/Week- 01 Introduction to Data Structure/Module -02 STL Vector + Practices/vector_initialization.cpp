#include<bits/stdc++.h>
using namespace std;
int main(){
    // vector<int> v;   Type- 01
    // vector <int> v(10); //Type- 02
    //cout<< v.size() << endl;

    vector <int> v(5, 10);  //Type- 03
    // for(int i= 0; i<v.size(); i++){
    //     cout<< v[i] << " ";
    // }

    vector <int> v2(v); //Type- 04
    // for(int i= 0; i<v2.size(); i++){
    //     cout<< v2[i] << " ";
    // }

    // int arr[5]= {1, 2, 3, 4 ,5};
    // vector <int> v3 (arr, arr+5);   //Type- 05
    // for(int i= 0; i<v3.size(); i++){
    //     cout<< v3[i] << " ";
    // }

    vector <int> v4= {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for(int i= 0; i<v4.size(); i++){
        cout<< v4[i] << " ";
    }

    return 0;
}