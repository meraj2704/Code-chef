#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	   int sit;
	   cin >> sit;
	   if(sit<=10) cout << "Lower Double" << endl;
	   else if (sit<=15 && sit > 10) cout << "Lower Single" << endl;
	   else if (sit <=25 && sit >15) cout << "Upper Double" << endl;
	   else cout << "Upper Single" << endl;
	}
	return 0;
}

