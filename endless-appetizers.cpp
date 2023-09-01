#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	   int x,y,r;
	   cin >> x >> y >> r;
	   int extra = r/30;
	   int total = x + extra;
	   if(total%y) cout << ((total/y)+1) << endl;
	   else cout << (total/y) << endl;
	}
	return 0;
}

