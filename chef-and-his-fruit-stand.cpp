#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	   int bananas,apples;
	   cin >> bananas >> apples;
	   int b_need = bananas/2;
	   if(b_need<apples) cout << b_need << endl;
	   else cout << apples << endl;
	}
	return 0;
}

