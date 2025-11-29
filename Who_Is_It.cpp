#include <bits/stdc++.h>

using namespace std;
class Student
{
public:
    int roll;
    char name[10000];
    char great;
    int mark;
};

int main()

{
    int t;
    cin >> t;
    while (t--)
    {
        Student sakib, rakib, akib;

        cin >> sakib.roll >> sakib.name >> sakib.great >> sakib.mark;
        cin >> rakib.roll >> rakib.name >> rakib.great >> rakib.mark;
        cin >> akib.roll >> akib.name >> akib.great >> akib.mark;

        Student max =sakib;
        
        if(rakib.mark>max.mark||(rakib.mark==max.mark&&rakib.roll<max.roll))
        {
            max=rakib;

        }
        if(akib.mark>max.mark||(akib.mark==max.mark&&akib.roll<max.roll))
        {
            max=akib;

        }

        cout<<max.roll<<" "<<max.name<<" "<<max.great<<" "<<max.mark<<endl;





    }

    return 0;
}