#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	   int a[n];
	   string b;
	   for(int i=0; i<n; i++)
	   {
	       cin >> a[i];
	   }
	   cin >> b;
	   int j=0;
	   int z[n];
	   for(int i=0; i<n; i++)
	   {
	       if(b[i]==1)
	       {
	           z[j] = i;
	           j++;
	       }
	   }
	   int k =0;
	   int mini =100;
	   int m;
	   for(int i=0; i<n; i++)
	   {
	       if(i==z[k])
	       {
	           k++;
	           continue;
	       }
	       else if(mini>a[i])
	       {
	           mini = a[i];
	           m = i;
	       }
	   }
	   cout << a[m] << endl;
	}
	return 0;
}
