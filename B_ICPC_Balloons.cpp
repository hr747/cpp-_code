#include <bits/stdc++.h>

using namespace std;

int main()

{
int t;
cin>> t;
while (t--)
{
    int x;
    cin>> x;
    string s;
    cin >>s;
    int fre[26]={0};
    int count =0;
    for (int i=0;i<x;i++)
    {
        char ch=s[i];
        int z=ch-'A';
        if (fre[z]==0)
        {
            count +=2;
            fre[z]=1;
        }
        else{
            count +=1;
        }


    }
    cout<<count<<endl;
}

    return 0;
}