#include<iostream>
using namespace std;

#include<string.h>
  int
main ()
{

int t;

cin >> t;

while (t--)
    {

int n, c2 = 0, c1 = 0;
      cin >> n;

while (n--)
	{

string st;

cin >> st;

if (st == "START38")
	    {

c1++;

}

	  else
	    {

c2++;

}

}

cout << c1 << " " << c2 << endl;

}

return 0;

}
