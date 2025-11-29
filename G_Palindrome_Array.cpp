#include <bits/stdc++.h>

using namespace std;

int main()

{
int n;
cin>>n;
int a[n];
for (int i=0;i<n;i++)
{
    cin>>a[i];
}
bool x=true;
for(int i=0;i<n/2;i++)
{
    if (a[i]!=a[n-i-1])
    {
        x=false;
        break;
    }
}
if (x)
{
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
    return 0;
}