#include <bits/stdc++.h>

using namespace std;

int main()

{
    string s;
    cin >> s;
    int z = 0;
    int i = 0;
    int j = s.size() - 1;
    while (i < j)
    {
        /* code */
        if (s[i] != s[j])
        {
             z = 1;
            break;
        }
        i++;
        j--;
    }
    if (z == 0)
    {
        cout << "YES" << endl;
    }
    else
    {

        cout << "NO" << endl;
    }

    return 0;
}