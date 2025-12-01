#include <bits/stdc++.h>

using namespace std;

int main()

{
string s;
cin >> s;
int z=s.find("EGYPT");
while (z!=string::npos)
{
    s.replace(z,5," ");
     z=s.find("EGYPT",z);

}
cout<<s<<endl;

    return 0;
}