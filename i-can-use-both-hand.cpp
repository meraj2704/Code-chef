#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int left,right,miniute;
	    cin >> left >> right >> miniute;
	    int page = miniute/left;
	    int code = miniute /right;
	    int incomplete = miniute%left;
	    if(incomplete==0)
	    cout << page +code << endl;
	    else
	    cout << (page + code + 1) << endl;
	   
	}
	return 0;
}

