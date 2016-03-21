#include <bits/stdc++.h>
using namespace std;
int solve(int x,int y){
	return max(x,y);
}
int main()
{

	freopen("route.in","r",stdin);
	freopen("o.out","w",stdout);
	int tc;cin>>tc;
	while(tc--){
		int n,m;
		cin>>n>>m;
		int ans = solve(n,m);
		cout<<ans<<endl;
	}

}
