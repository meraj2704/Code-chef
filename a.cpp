#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long n;
	    cin>>n;
	    string a ,b;
	    cin>>a>>b;
	unordered_map<char,int> m1;
	unordered_map<char,int >m2;
	for(int i=0;i<n;i++)
	{
	    m1[a[i]]++;
	    m2[b[i]]++;
	}
	 map<int, char>::iterator itr;
	for (itr = m1.begin(); itr != m1.end(); ++itr) {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
    }
	int an=INT_MAX;
	int ans=INT_MIN;
	for(int i=0;i<n;i++)
	{
	    int x=m1[a[i]];
	    int y=m2[a[i]];
	    an=min(x,y);
	    ans=max(ans, an);
	}
	cout<<ans<<endl;
	}
	
	return 0;
}
