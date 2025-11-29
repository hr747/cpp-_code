#include <bits/stdc++.h>

using namespace std;

int main()

{
    char a[10001];

    cin >> a;

    int n= strlen(a);
     int l = 0;
     int r=n-1;
     while (l<=r)
     {
        if (a[l]=='?'&&a[r]=='?')
        {
            a[l]=a[r]='a';
            
        }
        else if (a[l]=='?')
        {
            a[l]=a[r];
        }
          else if (a[r]=='?')
        {
            a[r]=a[l];
        }
        else if (a[l]!=a[r])
        {
            cout<< "-1";
            return 0;
        }
        l++;
     r--;
     
     }
     cout<< a;
    return 0;
}