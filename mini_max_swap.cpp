#include <iostream>

#include <algorithm>

using namespace std;

int main()
{

    int a, b;

    cin >> a >> b;
    // minimum valu ber kora hoise

    int c = min(a, b);
     cout << c << endl;
    int mn = min({4,3,5,6,3,5,6,3});
    cout << mn << endl;

    // maxmium valu ber kora hoise

    int d = max(a, b);

    cout << d << endl;

    int mx = max({4,5,67,4,5,7,8,3,33});

    cout << mx << endl;

    // swap kora hoise

    swap(a,b);
    cout <<a<<" "<<b << endl;

    return 0;
}
