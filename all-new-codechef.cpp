#include<bits/stdc++.h>
using namespace std;

int main() {
	int old,neww;
	cin >> old >> neww;
	if(old<neww)cout << "OLD"<<endl;
	else if(old==neww)  cout << "same" << endl;
	else cout << "NEW" << endl;
	
	return 0;
}

