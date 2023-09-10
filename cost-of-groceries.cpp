#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	   int n,x;
	   cin >> n >> x;
	   int value[n],cost[n];
	   vector<int>getItems;
	   for(int i=0; i<n; i++)
        {
            cin >> value[i];
            if(value[i]>=x)
            {
                getItems.push_back(i);
            }
        }
	   for(int i=0; i<n; i++) cin >> cost[i];
	   int total=0;
	   for(int i=0; i<getItems.size();i++)
	   {
	       total += cost[getItems[i]];
	   }
	   cout << total << endl;
	}
	return 0;
}

  