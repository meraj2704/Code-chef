#include <iostream>
using namespace std;

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
        for(i=0; i<n; i++)
        {
            if(a[i] > a[i+1])
            {
                cout << "No" << endl;
            }
             if(i==(n-1))
            {
                cout << "Yes" << endl;
            }

    }
	// your code goes here
	return 0;
}
}
