#include <bits/stdc++.h>

using namespace std;

int main()


{
    int z;
    cin>>z;
    while (z--)
    {
        
    
    
    int count=0;
    long long int a[100001];
long long int n,s;
cin>>n>>s;
long long max=(n*(n+1)/2);
if (s>max)
{
    cout<<"-1"<<endl;
    continue;

}

// while (n>=1&&s>0)
// {if (n<=s)
//     {
//         a[count]=n;
//         count++;
//         s-=n;
//     }
//     n--;
    
// }

long long current_sum = 0;
        long long current_num = 1;

        // 1. 1, 2, 3, ... যোগ করা 
        // যতক্ষণ না যোগফল s কে অতিক্রম করছে এবং সংখ্যাটি n এর চেয়ে ছোট
        while (current_num <= n && current_sum + current_num < s)
        {
            a[count] = current_num;
            current_sum += current_num;
            count++;
            current_num++;
        }
long long remainder = s - current_sum;

        // নিশ্চিত করা যে অবশিষ্ট মানটি 1 এবং n এর মধ্যে আছে
        if (remainder >= 1 && remainder <= n) {
            a[count] = remainder;
            count++;
            s = 0; // s কে 0 করে দেওয়া হলো
        } 
        else {
            s = 1; // যদি কোনো কারণে বৈধ সেট না পাওয়া যায়
        }
if (s==0)
{
        
    cout<<count<<" ";
    sort(a, a + count);
    for (int i=0;i<count;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

else {
    cout<<"-1"<<endl;

}
    }



    return 0;
}