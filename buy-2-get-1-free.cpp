#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	   int n,p;
	   cin >> n >> p;
	   int cost = (n/3)*(p*2);
	   int remain = (n%3) * p;
	   cout << cost + remain << endl;
	}
	return 0;
}

