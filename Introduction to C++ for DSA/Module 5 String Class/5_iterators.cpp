#include<bits/stdc++.h>
using namespace std;
int main(){
    //for knowing begin & end
    string s= "Hello";
    cout<< *s.begin() << endl;
    cout<< *(s.end() - 1) << endl;



    //Iterator of a string
    string a= "Sami Abdullah";
    for(string:: iterator it= a.begin(); it< a.end(); it++){        // we can also use here "auto" by replacing "string:: iterator"
    // for(auto it= a.begin(); it< a.end(); it++){    //both condition are same.
        cout<< *it << endl; 
    }
    

    return 0;
}