#include<bits/stdc++.h>
using namespace std;
int main(){
    // vector <int> v= {1, 2, 3, 4, 5, 6, 7, 8};
    // vector <int> v2;
    // v2= v;
    // for(int i= 0; i<v2.size(); i++){
    //     cout<< v2[i] << " ";
    // }

    
    // vector <int> v= {1, 2, 3, 4, 5, 6, 7, 8};
    // vector <int> v2;
    // v2= v;
    // v2.insert(v2.begin()+ 2, 500);
    // for(int i= 0; i<v2.size(); i++){
    //     cout<< v2[i] << " ";
    // }

    
    // vector <int> v= {1, 2, 3, 4, 5, 6, 7, 8};
    // vector <int> v2= {100, 200, 300, 400, 500};

    // v.insert(v.begin()+5, v2.begin(), v2.end());
    // for(int x: v){
    //     cout<< x << " ";
    // }
    // cout<< endl;

    // v2.erase(v2.begin()+1, v2.begin()+ 4);
    // for(int i= 0; i<v2.size(); i++){
    //     cout<< v2[i] << " ";
    // }

    vector<int> v5= {10, 20, 30, 40, 50, 60, 70, 80};
    replace(v5.begin(), v5.end()-1, 2, 100);
    auto it= find(v5.begin(), v5.end(), 400);
    cout<< *it << endl;
    for(int x: v5){
        cout<< x << " ";
    }

    return 0;
}