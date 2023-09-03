#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	   int patties, bun;
	   cin >> patties >> bun;
	   int burger = min(patties,bun);
	   cout << burger << endl;
	}
	return 0;
}

