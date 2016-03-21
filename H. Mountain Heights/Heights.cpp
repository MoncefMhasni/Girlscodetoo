#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("heights.in","r",stdin);
	freopen("o.out","w",stdout);
	int tc;cin>>tc;
	while (tc--){
		int N;
		cin>>N;
		vector<int> v(N);
		for(int i=0;i<N;i++)
			cin>>v[i];
		bool ok = 1;
		for(int i=0;i<N-2;i++){
			if(v[i+2] <= (2*v[i+1] - v[i])){
				ok=0;break;
			}
		}
			if(ok)
				cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		
	}
}