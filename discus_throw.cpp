#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	   int a,b,c;
	   cin >> a >> b >> c;
	   int m1 = max(a,b);
	   cout << max(m1,c) << endl;
	}
	return 0;
}

