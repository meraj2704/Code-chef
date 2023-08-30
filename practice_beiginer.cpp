#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,s=0;
        cin >> n;
        int a[n],b[n];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        b[0] = a[n-1];
        for(int i=1; i<=n; i++)
        {
            b[i] = a[i-1];
        }
        
        for(int i=0; i<n; i++)
        {
            if(b[i]==b[n-1])
            {
                s = b[0] + b[n-1];
            }
        }
        cout << s << endl;
    }
}