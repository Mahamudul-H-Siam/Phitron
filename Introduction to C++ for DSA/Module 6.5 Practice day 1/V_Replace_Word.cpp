#include<bits/stdc++.h>
using namespace std;
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s; // read the input

    string ans = ""; // result string

    for (int i = 0; i < (int)s.size(); ) {
        // Check if "EGYPT" starts at position i
        if (i + 4 < (int)s.size() && s.substr(i, 5) == "EGYPT") {
            ans += ' '; // add a space instead
            i += 5;     // skip over "EGYPT"
        } else {
            ans += s[i];
            i++;
        }
    }
    cout << ans << endl;
    return 0;
}