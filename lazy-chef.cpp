#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	   int x, m, d;
	   cin >> x >> m >> d;
	   
	       int time1 = x*m;
	       int time2 = x+d;
	       cout << min(time1,time2) << endl;
	   
	}
	return 0;
}

