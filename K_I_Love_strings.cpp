#include <bits/stdc++.h>

using namespace std;

int main()

{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        string re = "";
        cin >> a >> b;
        int lanta = a.size();
        int lantb = b.size();
        int sum = min(lanta, lantb);
        for (int i = 0; i < sum; i++)
        {
            re += a[i];

            re += b[i];
        }
        for (int i = sum; i < lanta; i++)
        {
            re += a[i];
        }
        for (int i = sum; i < lantb; i++)
        {
            re += b[i];
        }

        cout << re << endl;
    }

    return 0;
}