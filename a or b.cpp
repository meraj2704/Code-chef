
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x,y,a,b;
        cin >> x >> y;
        int m1 = 500 - (x *2);
        int m2 = 1000 -((x+y)*4);
         a = m1+m2;
         int m3 = 1000 - (y *4);
         int m4 = 500 - ((x+y)*2);
         b = m3 + m4;
         cout << max(a,b);

    }
}
