#include <bits/stdc++.h>

using namespace std;

int main()

{ char a[100005];
   while( cin.getline(a,100005)){
    char z[100005];
    int c=0;

    for (int i=0;a[i]!='\0';i++)
    {
        if (a[i]>='a'&&a[i]<='z')
        {
            z[c]=a[i];
            c++;

        }
    }
    sort(z,z+c);
    for (int i=0;i<c;i++)
    {
        cout<<z[i];
    }
    cout<<endl;
    
   }

    return 0;
}