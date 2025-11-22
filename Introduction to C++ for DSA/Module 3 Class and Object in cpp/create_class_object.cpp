#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    char name[100];
    int roll;
    double gpa;
};
int main(){
    Student a, b;


    // char temp[100]= "Siam";
    // strcpy(a.name, temp);
    // a.roll= 1;
    // a.gpa= 3.87;
    // cout<< a.name << " "<< a.roll << " " << a.gpa<< endl;



    // cin>> a.name>> a.roll>> a.gpa;
    // cout<< endl;
    // cin>> b.name>> b.roll>> b.gpa;
    // cout<< endl;
    // cout<< a.name << " "<< a.roll << " " << a.gpa<< endl;
    // cout<< b.name << " "<< b.roll << " " << b.gpa<< endl;


    cin.getline(a.name, 100);
    cin>> a.roll>> a.gpa;
    cin.ignore();
    cin.getline(b.name, 100);
    cin>> b.roll>> b.gpa;
    cout<< a.name << " "<< a.roll << " " << a.gpa<< endl;
    cout<< b.name << " "<< b.roll << " " << b.gpa<< endl;

    return 0;
}