#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};
bool stu(Student n,Student m)
{

    if((n.math_marks+n.eng_marks)==(m.math_marks+m.eng_marks))
    {
        return n.id<m.id;
    }
    else return(n.math_marks+n.eng_marks)>(m.math_marks+m.eng_marks);
}
int main()
{
    int n,i;
    cin >> n;
    Student arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i].nm>>arr[i].cls>>arr[i].s>>arr[i].id>>arr[i].eng_marks>>arr[i].math_marks;
    }
    sort(arr,arr+n,stu);
    for(i=0;i<n; i++)
    {
        cout<<arr[i].nm<< " " <<arr[i].cls<< " " <<arr[i].s<< " " <<arr[i].id<< " " <<arr[i].eng_marks<< " " <<arr[i].math_marks<<endl;
    }
    return 0;
}
