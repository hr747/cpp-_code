#include <bits/stdc++.h>

using namespace std;

int main()

{
char n[1000001];
char m[1000001];
cin >> n>>m;
long long int a=strlen(n);
long long int b=strlen(m);
long long int count=0;
long long int i=a-1;
long long int j=b-1;
while (i>=0&&j>=0&&n[i]==m[j])
{
    count++;
    i--;
    j--;
}
long long int move=((a-count)+(b-count));
cout << move<<endl;


    return 0;
}