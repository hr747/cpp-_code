#include <bits/stdc++.h>

using namespace std;
void fun(int a[], int n)
{
    int z = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            a[z] = a[i];
            z++;
        }
    }
    while (z < n)
    {
        a[z] = 0;
        z++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()

{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    fun(a, n);

    return 0;
}