#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n,d;
	    cin >> n >> d;
	    int a[n];
	    for(int i=0; i<n; i++)
	    {
	        cin >> a[i];
	    }
	    if(d==1)
	    {
	        cout << n << endl;
	    }
	    else
	    {
	    // sort(a,a+n);
	    int risk=0;
	    for(int i=0; i<n; i++)
	    {
	        if(a[i]<=9 || a[i]>=80)
	        {
	            risk ++;
	        }
	    }
	    cout << "risk =" <<risk << endl;
	    int t_d = risk/d;
	    cout << "t-d 1 0 = " << t_d << endl;
	    if(risk%d!=0)
	    {
	        t_d+=1;
	        cout << "t-d 1 1 = " << t_d << endl;
	    }
	    t_d+=(n-risk)/d;
	     cout << "t-d 2 0 = " << t_d << endl;
	    if((n-risk)%d!=0)
	    {
	        t_d+=1;
	         cout << "t-d 2 1 = " << t_d << endl;
	    }
	    cout << t_d << endl;
	    }
	   
	}
	return 0;
}

