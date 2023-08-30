#include <iostream>
using namespace std;

int main() {
	int t;
    cin >> t;
	while(t--)
	{
	    int a,b,c;
        cin >> a>>b;
         a = max(a,b);
	    if(a==1)
	    {
	        c=0;
	    }
	    else
	    {
	        c = (a-1)*(2*b-a);
	    }
	    cout << c << endl;
	}
	return 0;
}
