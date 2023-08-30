#include <iostream>
using namespace std;

bool check(int a[])
{
    int l=0;
    for(int i=0; sizeof(a); i++)
    {
        if(a[i] <l)
        {
            return false;
        }
        l=a[i];
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int i,a[n],f=0;
        for(i=0; i<n; i++)
        {
            cin >> a[i];
        }
        if(check (a))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
	// your code goes here
	return 0;
}
