
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,k;
    while(getline(cin, s)){

    int n=s.length();
    int c=0;
    for(int i=0;i<n;i++){
        if(s[i]!=' '){
        s[c++]=s[i];

        }
    }
    s.erase(c);
    sort(s.begin(),s.end());
    cout<<s<<endl;
    }
}
