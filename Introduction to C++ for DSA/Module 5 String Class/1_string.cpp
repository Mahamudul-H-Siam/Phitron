#include <bits/stdc++.h>
using namespace std;
int main()
{
    // char s[10]= "Hello";
    // strcpy(s, "Gello");
    // cout<< s<< endl;


    // In C++ we can use string for an character array.
    //A string is an build in class in c++.
    //This is more easier and simple version.
    string s = "Hello!!";
    cout << s << endl;
    // s= "Gello!!";
    cout << s << endl;



    // Here I cheack two string using normal way
    string t = "Hello!!";
    if (s == t)
    {
        cout << "The both string are same.";
    }
    else
    {
        cout << "The both string are not same.";
    }



    // After decalring a stirng we can increase our string size, as much as I need.
    s = "Hi sir, How are you? Sir you give me poor marks in my exam, why sir you did it with me?";
    cout << endl;
    cout << s << endl;

    return 0;
}