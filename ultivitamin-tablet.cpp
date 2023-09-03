#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	   int day,tablets;
	   cin >> day >> tablets;
	   if((tablets/3)>=day) cout << "YES" << endl;
	   else cout << "NO" << endl;
	}
	return 0;
}

