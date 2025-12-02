#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    string name;
    int id;
    int math;
    int english;

    Student(string name, int id, int math, int english){
        this->name= name;
        this->id= id;
        this->math= math;
        this->english= english;
    }

    //declaring a function in a class
    void greating(){
        cout<< "Hello sir." << endl;
    }

    void welcome(){
        cout<< "Hello sir/mam from " << name << endl;
    }

    void total_marks(){
        cout<< name << " in math and english, got total "<< math+ english << " marks." << endl;
    }
};

int main(){
    Student sami("Sami Abdullah", 6, 33, 100);
    cout<<sami.name << " " << sami.id << endl;
    sami.greating();    //access function in a class.

    Student sajuti("Sajuti Ahmad", 1, 85, 100);

    sami.welcome();
    sajuti.welcome();

    sami.total_marks();
    sajuti.total_marks();

    return 0;
}