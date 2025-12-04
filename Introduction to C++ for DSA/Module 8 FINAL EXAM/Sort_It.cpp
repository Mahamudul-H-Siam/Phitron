#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int english_marks;
    int marks;
};
bool cmp(Student l, Student r){
    if(l.marks == r.marks){
        return l.id< r.id;
    }
    else{
        return l.marks> r.marks;
    }
}
int main(){
    int n;
    cin>> n;
    Student a[n];
    for(int i= 0; i<n; i++){
        cin>> a[i].nm >> a[i].cls>> a[i].s>> a[i].id>> a[i].math_marks>> a[i].english_marks;
    }

    for(int i= 0; i<n; i++){
        a[i].marks= a[i].math_marks + a[i].english_marks;
    }
    sort(a, a+n, cmp);

    for(int i= 0; i<n; i++){
        cout<< a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " " << a[i].math_marks << " " << a[i].english_marks << endl; 
    }

    return 0;
}