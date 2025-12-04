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
};
bool cmp(Student l, Student r){
    if(l.english_marks> r.english_marks){
        return true;
    }
    else if(l.english_marks< r.english_marks){
        return false;
    }
    else{
        if(l.math_marks> r.math_marks){
            return true;
        }
        else if(l.math_marks< r.math_marks){
            return false;
        }
        else{
            if(l.id< r.id){
                return true;
            }
            else{
                return false;
            }
        }
    }
}
int main(){
    int n;
    cin>> n;
    Student a[n];
    for(int i= 0; i<n; i++){
        cin>> a[i].nm >> a[i].cls>> a[i].s>> a[i].id>> a[i].math_marks>> a[i].english_marks;
    }

    sort(a, a+n, cmp);

    for(int i= 0; i<n; i++){
        cout<< a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " " << a[i].math_marks << " " << a[i].english_marks << endl; 
    }

    return 0;
}