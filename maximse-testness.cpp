#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	 int a,b,c,d;
	 cin >> a >> b >> c >> d;
	 int test1= a + c;
	 int test2 = b + d;
	 int test3 = a+d;
	 int test4 = b+c;
	 int big1= max(test1,test2);
	 int big2= max(test3,test4);
	 cout << max(big1,big2) << endl;
	}
	return 0;
}

