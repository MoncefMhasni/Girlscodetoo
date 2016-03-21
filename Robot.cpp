#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("robot.in","r",stdin);
	freopen("robot1.out","w",stdout);
	int tc;
	cin>>tc;
	while(tc--){
		int n;cin>>n;
		vector<double> l(n+1);
		double x=0,y,t,sum;
		cin>>y;
		for(int i=0;i<n;i++)cin>>l[i];
		sum=0;
		for(int i=0;i<n;i++){
			cin>>t;
			sum+=t;
			x+=l[i]*sin(sum);
			y+=l[i]*cos(sum);
		}
		printf("%f %f\n",x,y);

	}
}
