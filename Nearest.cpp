#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("game.in","r",stdin);
	freopen("o.out","w",stdout);
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		int v,h=-1;
		for(int i=0;i<n;i++){
			cin>>v;
			if(v>h){
				cout<<i+1<<" ";
				h=v;
			}
		}
		cout<<endl;
	}
}