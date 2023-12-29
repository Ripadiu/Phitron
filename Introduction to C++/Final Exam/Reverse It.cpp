#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
};
int main()
{
    int n,i;
    cin>>n;
    Student arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i].nm>>arr[i].cls>>arr[i].s>>arr[i].id;
    }
    for(i=0; i<n/2; i++)
    {
        swap(arr[i].s,arr[n-i-1].s);
    }
    for(i=0; i<n; i++)
    {
        cout<<arr[i].nm<<" "<<arr[i].cls<<" "<<arr[i].s<<" "<<arr[i].id<<endl;
    }
    return 0;
}
