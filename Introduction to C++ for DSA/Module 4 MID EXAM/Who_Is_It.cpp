#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
    int id;
    string name;
    char section;
    int marks;
};

int main(){
    int t;
    cin>> t;
    for(int x= 0; x<t; x++){
        Student a, b, c;
        cin>> a.id>> a.name>> a.section>> a.marks;
        cin>> b.id>> b.name>> b.section>> b.marks;
        cin>> c.id>> c.name>> c.section>> c.marks;
        Student best= a;

        if(b.marks> best.marks){
            best= b;
        } 
        else if(b.marks== best.marks){
            if(b.id< best.id){
                best= b;
            }
        }

        if(c.marks> best.marks){
            best= c;
        } 
        else if(c.marks== best.marks){
            if(c.id< best.id){
                best= c;
            }
        }
        cout<< best.id<< " "<< best.name<< " "<< best.section<< " "<< best.marks<< endl;
    }

    return 0;
}
