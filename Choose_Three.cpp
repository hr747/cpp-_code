#include <bits/stdc++.h>

using namespace std;

int main()

{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int result;
        cin >> n >> result;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if (result == a[i] + a[j] + a[k])
                    {
                        sum = 1;
                        break;
                    }
                }
                if (sum)
                {
                    break;
                }
            }
            if (sum)
            {
                break;
            }
        }
        if (sum)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

        return 0;
       
       }