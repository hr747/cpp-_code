#include <bits/stdc++.h>

using namespace std;

int main()

{
int n,m,x;
char a,b;
cin>>n>>a>>m>>b>>x;
if (a=='+'&&n+m==x)
{
    cout<<"Yes";

}
else if (a=='-'&&n-m==x)
{
    cout<<"Yes";
}
else if (a=='*'&&n*m==x)
{
    
    cout<<"Yes";
}
else if (a=='*'&&n*m!=x)
{int c=n*m;
    
    cout<<c;
}


    return 0;
}