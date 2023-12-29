#include <bits/stdc++.h>
using namespace std;

void find3Numbers(int arr[], int n, int sum)
{int count=0;
	for(int i=0;i < n- 2; i++)
	{
		for (int j = i + 1; j < n- 1; j++)
{
			for (int k = j + 1; k < n; k++)
			{
				if (arr[i] + arr[j] + arr[k] == sum)
				{
					count++;

				}

			}
		}
	}
if(count==0)cout<<"NO"<<endl;
else cout<<"YES"<<endl;

}

/* Driver code */
int main()
{ int t;
cin>>t;
while(t--){
    int n,i;
    cin>>n;
	int sum ;
	cin>>sum;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
	find3Numbers(arr, n, sum);
}
	return 0;
}

