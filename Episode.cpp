#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("ep.in","r",stdin);
	freopen("o.out","w",stdout);
	int tc;cin>>tc;
	while(tc--){
		int N;cin>>N;
		vector<int> v(N,0);
		for(int i=0;i<N-1;i++){
			int a;cin>>a;
			v[a-1]=1;
		}
		for(int ans=0;ans<N;ans++)
		if(v[ans]==0)
		{
			cout<<ans+1<<endl;
			break;
		}
	}
}
