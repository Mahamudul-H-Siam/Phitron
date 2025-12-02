#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int ar[n];
        for (int j = 0; j < n; j++)
        {
            cin >> ar[j];
        }
        int even_count = 0, odd_count = 0;
        if (n % 2 != 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                if (ar[j] % 2 == 0)
                {
                    even_count++;
                }
                else
                {
                    odd_count++;
                }
            }

            int cheaker = n / 2;
            int final_value = 0;
            if (even_count == odd_count)
            {
                cout << "0" << endl;
            }
            else
            {
                if (even_count < cheaker)
                {
                    final_value = cheaker - even_count;
                    cout << final_value << endl;
                }
                else if (odd_count < cheaker)
                {
                    final_value = cheaker - odd_count;
                    cout << final_value << endl;
                }
            }
        }
    }

    return 0;
}