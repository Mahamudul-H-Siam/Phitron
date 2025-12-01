#include<bits/stdc++.h>
using namespace std;
int main(){
    //Using String built-in functions



    //In capacity, now we are using size function
    string s= "Sami Abdullah";
    cout<< s.size()<< endl;



    //Now we use sting max_size, which is cheack how much size will take my compiler.
    //Normally using online compiler we can use 10^6, and globally we can use 10^7
    cout<< "My compiler sting maximum size is: " << s.max_size()<< endl;



    //Capacity function of a string. It is a dynamic process.
    cout<< "Before add anything: "<< s.capacity()<< endl;
    s= "Sami Abdullah Sajuti Ahmad";
    cout<< "After increasing the sting size: "<< s.capacity()<< endl;



    //Clear function using when I remove data of my variable.
    s.clear();
    cout<<"After clearing the data: "<< s<< endl; 



    //Now I work on empty function. It gives only true or false value. If my string is empty then its return true and if my string is not empty then its give false.
    cout<< "Checking the string is empty: ";
    if(s.empty() == true)
        cout<< "Yes string is empty." << endl;
    else
        cout<< "No the string is not empty." << endl;
    // This empty function actually see the string size. If the string size is zero then the string is also empty, when we check it using condition.




    // Now I learn resize function. Which is a function that's set string size how much I want to print. It's have a another power. Which is In a string it set the char in lastly, what we want.
    s= "Sami Abdullah";
    s.resize(15, 'S');
    cout<< "Here I resize my string: " << s <<endl;

    return 0;
}