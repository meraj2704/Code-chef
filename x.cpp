#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	   int n;
	   cin >> n;
	   char a[n];
	   char b[n];
	   for(int i=0; i<n; i++)
	   {
	       cin >> a[i];
	   }
	   for(int i=0; i<n; i++)
	   {
	       cin >> b[i];
	   }
	   sort(a, a+n);
	   sort(b, b+n);
	   vector<char> v1;
	   int i=0;
	   int j=0;
	   while(i<n)
	   {
	       if(a[i] == b[j])
	       {
	           v1.push_back(a[i]);
	           i++;
	           j++;
	       }
	       else
	       {
	           i++;
	       }
	   }
	   int size = v1.size();
	   char new1[size];
	   char new2[size];
	   
	   for(int i=0, j=size-1; i<size, j>=0; i++, j++)
	   {
	       new1[i]= v1[i];
	       new2[i]= v1[j];
	   }
	   int count =0;
	    i=0;
	    j=0;
	   while(i<size)
	   {
	       if(a[i] == b[j])
	       {
	           count++;
	           i++;
	           j++;
	       }
	       else
	       {
	           i++;
	       }
	   }
	   cout << count << endl;
	   
	}
	return 0;
}

