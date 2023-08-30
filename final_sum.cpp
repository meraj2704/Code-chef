#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	   int n,n1;
	   cin >> n >> n1;
	   int arr[n]; //query[n1][2];
	   for(int i=0; i<n; i++)
	   {
	       cin >> arr[i];
	   }
	   int ts[n1][2];
	   int k=0;
	   for(int i=0; i<n1; i++)
	   {
	       cin >> ts[i][k];
	       cin >> ts[i][++k];
	       k=0;
	   }
	   //for(int i=0; i<n1; i++)
	   //{
	   //    for(int j=0; j<2; j++)
	   //    {
	   //        cin >> query[i][j];
	   //    }
	   //}
	   
	   
	   int x=0;
	   while(x<n1)
	   {
	      int op=0;
	      for(int i= ts[x][0]-1; i<ts[x][1]; i++)
	      {
	          if(op==0)
	          {
	              arr[i]+=1;
	              op++;
	          }
	          else
	          {
	              arr[i]-=1;
	              op--;
	          }
	      }
	      x++;
	   }
	   
	   int sum=0;
	   
	   for(int i=0; i<n; i++)
	   {
	      sum +=arr[i];
	   }
	   cout << sum<< endl;
	   //for(int i=0; i<n1; i++)
	   //{
	   //    for(int j=0; j<2; j++)
	   //    {
	   //        cout << ts[i][j] << " ";
	   //    }
	   //     cout << endl;
	   //}
	   // cout << endl;
	//     k=0;
	//    for(int i=0; i<n1; i++)
	//    {
	//        cout <<  ts[i][k] << " ";
	//        cout <<  ts[i][++k] << endl;
	//        k=0;
	//    }
	}
	return 0;
}

