#include<iostream>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,c=0,d=0;
        cin >> n;
        string h[n];
        string x = "START38";
        for(int i =0 ; i <n; i++)
        {
            cin >> h[i];
            if(h[i].compare(x)==0)
            {
               c++;
            }
            else
            {
                d++;
            }

        }
        cout << c << " " << d << endl;
    }


    return 0;
}
