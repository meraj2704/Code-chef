#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	   int x,y,z;
	   cin >> x >> y >> z;
	   if(!((x*y)%z)) cout << (x*y)<< " " << z << endl;
	   else if (!((x*z)%y)) cout << (x*z)<< " " <<y << endl;
	   else if (!((z*y)%x)) cout << (z*y)<< " " <<x << endl;
	   else cout << -1 << endl;
	}
	return 0;
}

