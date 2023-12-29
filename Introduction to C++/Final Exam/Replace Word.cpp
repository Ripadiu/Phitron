#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string n,m;
        cin>>n>>m;
        while(n.find(m)!=-1)
        {
            int index=n.find(m);
            n.replace(index, m.size(),"#");
        }
        cout<<n<< endl;
    }
    return 0;
}

