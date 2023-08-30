#include<iostream>
using namespace std;


int main()
{
    int t,x,y;
    cin >> t;
    while(t--)
    {
        cin >> x >> y ;
        if(x==y)
        {
            cout << 0 ;
        }
        else if(x+8 >= y)
        {
            cout << 1;
        }
        else
        {
            cout << 2;
        }
    }

    return 0;
}

