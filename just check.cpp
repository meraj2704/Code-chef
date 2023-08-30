
#include <iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin >> n;
    int a[n], a2[n];
    for ( i = 1; i <= n; i++)
    {
        a[i] = i;
    }
    for ( i = 1; i <= n; i++)
    {
        a2[i] = 0;
    }

    int n2;
    cin >> n2;
    int b[n2];
    for ( i = 1; i <= n2; i++)
    {
        cin >> b[i];
    }
    int n3;
    cin >> n3;
    int c[n3];
    for ( i = 1; i <= n3; i++)
    {
        cin >> c[i];
    }
    for ( i = 1; i <= n2; i++)
    {
        for ( j = 1; j <= n; j++)
        {
            if (b[i] == j)
            {
                a2[j] = b[i];
            }
        }
    }
    for (i = 1; i <= n3; i++)
    {
        for ( j = 1; j <= n; j++)
        {
            if (c[i] == j)
            {
                a2[j] = [i];
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << a2[i] << endl;
    }
}
