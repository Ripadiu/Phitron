#include<bits/stdc++.h>
using namespace std;
int* sort_it( int a)
{  int *arr = new int[a];
    for (int i = 0; i < a; i++) cin>>arr[i];
    sort(arr, arr+a, greater<int>());
    return arr;

}
int main()
{
    int n;
    cin>>n;

   int *arr = sort_it(n);
    for(int i = 0; i <n; i++) cout<<arr[i]<<" ";
    return 0;
}
