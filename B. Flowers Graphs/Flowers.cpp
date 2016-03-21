#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pb push_back
#define ll long long
#define mod 1000000007
#define Nmax 1001
ll c[Nmax][Nmax];
void precalc(){
    c[0][0]=1;
    c[Nmax-1][Nmax-1]=1;
    for(int n = 1;n < Nmax; n ++){
     c[n][0] = 1;
     for(int k = 1 ;k<=n ;k++)
        c[n][k]=(c[n-1][k-1]+c[n-1][k])%mod;
    }
}
int main(){
	precalc();
	freopen("flower.in","r",stdin);
	freopen("o.out","w",stdout);
	int T;cin>>T;
	while(T--){
		int n,m,d;cin>>n>>m>>d;
		vi g(n);
		while(m--){
			int a,b;cin>>a>>b;
			a--;b--;
			g[a]++;
			g[b]++;
		}
		ll ans = 0 ;
		for(int i=0;i<n;i++){
			if(g[i]>=d)
				ans = (ans%mod + c[g[i]][d]%mod)%mod;
		}
		cout<<ans<<endl;
	}
}
