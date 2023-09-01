#include<bits/stdc++.h>
using namespace std;

int main() {
	int mGoal , mAssist, rGoal,rAssist;
	   cin >> mGoal >> mAssist >> rGoal >> rAssist;
	   int mPoints = (mGoal*2)+mAssist;
	   int rPoints = (rGoal*2)+rAssist;
	   if(mPoints>rPoints) cout << "Messi" << endl;
	   else if(rPoints>mPoints) cout << "Ronaldo" << endl;
	   else cout << "Equal" << endl;
	
	return 0;
}

