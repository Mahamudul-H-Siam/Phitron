// #include<bits/stdc++.h>
// using namespace std;
// int count_car(int n, int count){
//     if(n<=4){
//         return count;
//     }
//     count++;
//     n= n-4;
//     count_car(n, count);
// }
// int main(){
//     int t;
//     cin>> t;
//     for(int i= 0; i<t; i++){
//         int n;
//         cin>> n;
//         int count= 1;
//         int result= count_car(n, count);
//         cout<< result << endl;
//     }

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    for(int i= 0; i<t; i++){
        int n;
        cin>> n;
        double d= (double)n/4;

        cout<< ceil(d) << endl;
    }

    return 0;
}