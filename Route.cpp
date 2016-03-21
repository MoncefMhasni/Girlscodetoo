#include <bits/stdc++.h>
#include <ctime >

using namespace std;
int solve(int x,int y){
	int m=min(x,y);
	return m + max(x-m,y-m);
}
int main()
{
int start_s=clock();

	freopen("route.in","r",stdin);
	freopen("o.out","w",stdout);
	int tc;cin>>tc;
	while(tc--){
		int n,m;
		cin>>n>>m;
		int ans = solve(n,m);
		cout<<ans<<endl;
	}
int stop_s=clock();


cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;

}
