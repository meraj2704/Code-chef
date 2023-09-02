#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n,x,k,p;
	    cin >> n >> x >> k >> p;
	    if(x>=k)
	    {
	        int total = (k*10)+p;
	        cout << total << endl;
	    }
	    else
	    {
	        int five = (k-x)*5;
	        int ten = x*10;
	        if(n==k)
	        {
	            cout << ten + five + 20 + p << endl;
	        }
	        else
	        {
	            cout << ten + five + p << endl;
	        }
	    }
	   
	}
	return 0;
}

