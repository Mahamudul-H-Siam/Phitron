#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i= 0; i<t; i++){
        string s, x;
        cin>> s >> x;
        int sz= x.size();
        while(true){
            int index= s.find(x);
            if(index!= -1){
                s.replace(index, sz, "#");
            }
            else{
                break;
            }
        }
        cout<< s << endl;
    }

    return 0;
}



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>> t;
//     for(int k= 0; k<t; k++){
//         string s, x;
//         cin>> s>> x;
//         int sz= x.size();
//         while(true){
//             int index= s.find(x);
//             if(index != -1){
//                 s.replace(index, sz, "#");
//             }
//             else{
//                 break;
//             }
//         }
//         cout<< s<< endl;
//     }

//     return 0;
// }