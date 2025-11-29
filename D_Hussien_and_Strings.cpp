// #include <bits/stdc++.h>

// using namespace std;

// int main()

// {
// char a[1000001];
// char b[1000001];
// cin >> a>>b;
// int n=strlen(a);
// int m=strlen(b);
// if (n!=m)
// {
//     cout << "NO";
//     return 0;
// }

// // a sting ke coto theke boro vabe sajaya nilam
// for (int i=0;i<n-1;i++)
// {
//     for (int j=i+1;j<n;j++)
//     {
//         if (a[i]>a[j])
//         { char tmp=a[i];
//             a[i]=a[j];
//             a[j]=tmp;

//         }
//     }
// }
// // b sting ke coto theke boro vabe sajaya nilam

// for (int i=0;i<m-1;i++)
// {
//     for (int j=i+1;j<m;j++)
//     {
//         if (b[i]>b[j])
//         { char tmp=b[i];
//             b[i]=b[j];
//             b[j]=tmp;

//         }
//     }
// }
// if (strcmp(a, b) == 0)
// {
//     cout<<"YES";
// }
// else{
//     cout<<"NO";
// }

//     return 0;
// }

// answer ai ta

#include <bits/stdc++.h>

using namespace std;

int main()

{
    char a[1000001];
    char b[1000001];
    cin >> a >> b;
    int n = strlen(a);
    int m = strlen(b);
    if (n != m)
    {
        cout << "NO";
        return 0;
    }
    int count = 0;
    int dex[2];

    for (int i = 0; i < n; i++)
    {

        if (a[i] != b[i])
        {

            if (count == 2)
            {
                cout << "NO" << endl;
                return 0;
            }
            dex[count] = i;
            count++;
        }
    }
    if (count == 0)
    {
        int fr[26] = {0};
        int number = 0;
        for (int i = 0; i < n; i++)
        {
            int latter = a[i] - 'a';
            fr[latter]++;
            if (fr[latter] > 1)
            {
                number = 1;
                break;
            }
        }
        if (number)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
        else if (count == 2)
        {
            int q = dex[0];
            int w = dex[1];

            if (a[q] == b[w] && b[q] == a[w])
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    
    return 0;
}
