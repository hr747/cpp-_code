#include <bits/stdc++.h>

using namespace std;
int n;

int x;

int *get_array()
{
    cin >> n;

    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> x;

    int *b = new int[x];
    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
    }
    delete[] a;
    for (int i = n; i < x; i++)
    {
        cin >> b[i];
    }

    return b;
}

int main()

{

    int *z = get_array();

    for (int i = 0; i < x; i++)
    {
        cout << z[i] << " ";
    }

    return 0;
}