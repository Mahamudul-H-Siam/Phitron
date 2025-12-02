#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        string s, t;
        cin >> s >> t;
        string ss = "";
        int size = max((int)s.size(), (int)t.size());
        for (int i = 0; i < size; i++)
        {
            if (i < s.size())
            {
                ss += s[i];
            }
            if (i < t.size())
            {
                ss += t[i];
            }
        }
        cout << ss << endl;
    }

    return 0;
}