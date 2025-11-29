#include <bits/stdc++.h>

using namespace std;
class student
{
    public:
    string name;
    int roll;
    int english;
    int math;
    student(string name,int roll,int english,int math)
    {
        this->name=name;
        this->roll=roll;
        this->english=english;
        this->math=math;
    }
    void sum()
    {
       int nun= english+math;
       cout<<name<<" "<<roll<<'='<<nun<<endl;
    }



};
int main()

{
student sakib("shakib ahmad",2,33,34);
sakib.sum();
student rabib("rakib ahmad",1,22,44);
rabib.sum();

    return 0;
}