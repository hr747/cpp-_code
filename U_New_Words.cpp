#include <bits/stdc++.h>

using namespace std;

int main()

{
string s;
cin >> s;
int fre[26]={0};
for (int i=0;i<s.size();i++)
{
 char ch =s[i];
 ch = tolower(ch);
 int z=ch-'a';
 fre[z]++;
 

}
cout<<min({fre['e'-'a'],fre['g'-'a'],fre['y'-'a'],fre['p'-'a'],fre['t'-'a']})<<endl;
    return 0;
}