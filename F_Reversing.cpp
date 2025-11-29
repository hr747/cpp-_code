#include <bits/stdc++.h>

using namespace std;

int main()

{
int x;
cin>>x;
int a[x];
for(int i=0;i<x;i++)
{
    cin>>a[i];

}
int b[100001];
for(int i=0;i<x;i++)
{

b[i]=a[x-1-i];


}

// bulting funcation
// reverse (a,b+x);


for(int i=0;i<x;i++)
{
    cout<<b[i] <<" ";

}



    return 0;
}