#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	   double salary;
	   cin >> salary;
	   double hra,da;
	   if(salary<1500)
	   {
	       hra = salary *0.1;
	       da = salary * 0.9;
	   }
	   else{
	       hra = 500;
	       da = salary * 0.98;
	   }
	   double gross = salary + hra + da;
	   cout <<fixed << setprecision(2) << gross << endl;
	}
	return 0;
}

