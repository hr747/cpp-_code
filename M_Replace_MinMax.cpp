#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin>> a[i];
    }
    int *z= min_element (a,a+n);
    int *b= max_element(a,a+n);
    swap(*z,*b);
     for (int i=0;i<n;i++)
    {
        cout<< a[i]<<" ";
    }



    return 0;
}