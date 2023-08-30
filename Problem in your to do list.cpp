#include<iostream>
using namespace std;


int main()
{
    int t, i,n,f=0, d[5000];
    cin >> t;
    while(t--)
    {
        cin >> n;
    for(i=1; i<=n; i++)
    {
        cin >> d[i];
    }
    for(i=1; i<=n; i++)
    {
        if(d[i]>= 1000)
        {
            f+=1;
        }
    }
    cout << f << endl;
    f=0;

    }



    return 0;
}

