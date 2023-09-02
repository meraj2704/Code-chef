#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	   int x ,y;
	   cin >> x >> y;
	   int kilo = x*5;
	   if(kilo>=y) cout << "YES" << endl;
	   else cout << "NO" << endl;
	}
	return 0;
}

