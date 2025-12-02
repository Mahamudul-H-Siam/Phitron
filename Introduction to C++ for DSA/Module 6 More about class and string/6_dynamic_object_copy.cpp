#include<bits/stdc++.h>
using namespace std;

class Cricketer{
public:
    string country;
    int jersey;

    Cricketer(string country, int jersey){
        this->country= country;
        this->jersey= jersey;
    }
};

int main(){
    Cricketer* dhoni= new Cricketer("India", 7);
    Cricketer* kohli= new Cricketer("India", 18);
    // cout<< dhoni->jersey << endl;
    // cout<< kholi->jersey << endl;

    // // kohli= dhoni;    //This is wrong appraoch. 
    // delete dhoni;
    // cout<< kohli->country << " " << kohli->jersey << endl;


    // kohli->country= dhoni->country;  //Too time consuming for many inputs.
    // kohli->jersey= dhoni->jersey;
    // delete dhoni;
    // cout<< kohli->country << " " << kohli->jersey << endl;


    *kohli= *dhoni; //when I derefference the value of dhoni, then delete no problem happen.
    delete dhoni;
    cout<< kohli->country << " " << kohli->jersey << endl;

    return 0;
}