#include<bits/stdc++.h>
using namespace std;

int main() {
	
	   int first,second;
	   cin >> first >> second;
	   int total = (first+second)+(first*second);
	   //cout  << total << endl;
	   if(total==111) cout << "yes" << endl;
	   else cout << "NO" << endl;
	
	return 0;
}

