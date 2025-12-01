#include<bits/stdc++.h>
using namespace std;
int main(){

    // Work of += function in a string.
    string s= "Hello World";
    // string s2= ", Sami Abdullah.";
    s+= ", Sami Abdullah.";
    cout<< "Concate a string: " << s << endl;



    // Append are same like upper function
    string s3, s4;
    s3= "Hello, I am ";
    s4= "Sami Abdullah.";
    s3.append(s4);
    cout<< "Append: " << s3 << endl;



    // Id we want to add a Character in the last of a string then we use push_back function in c++
    string s5;
    s5= "Sajuti Ahmad";
    s5.push_back('S');
    cout<< "Push BacK: " << s5 << endl;



    //pop_back function just remove a character from a string in last.
    string s6;
    s6= "Sajuti Ahmadd";
    s6.pop_back();
    cout<< "Pop BacK: " << s6 << endl;



    //Assign string variable value one to another string.
    //I can use a "=" operator or I can use assign() function for this work.
    string a, b;
    a= "Mahamudul Hasan";
    b= a;
    cout<< "Assigning value: " << b << endl;



    //In a string if I want to erase a protion then I use erase() function.
    string c= "How are you?";
    c.erase(3);
    cout<< "Only command to erase: " << c << endl;

    string d= "I am and siam.";
    d.erase(4, 4);
    cout<< "Erase a protion: " << d << endl;




    //replace() function replacing a protion of a string.
    string e= "I live in Dhaka.";
    e.replace(10, 5, "Chandpur");
    cout<< "Printing after using replace function: " << e << endl;

    //If I want to do not delete anything then in the parameter I write 0.
    e.replace(10, 0, "Dhaka and ");
    cout<< "Again replace function add a protion: " << e << endl;




    //insert() function work is add a part in my string.
    string f= "Hello I am";
    f.insert(10, " Siam.");
    cout<< "After insert a protion in my string: " << f << endl;

    return 0;
}