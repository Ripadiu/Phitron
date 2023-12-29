#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss;
    ss<<s;
    int c1=0;
    string word;
    while(ss>>word)
    {
        if(word=="Jessica") c1=1;
    }
    if(c1==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
