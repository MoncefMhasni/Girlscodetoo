#include<bits/stdc++.h>
#define ll long long
#define mod  20032016
#define Nmax 10001
#define Cmax 10001
using namespace std;
ll c[Nmax][Cmax];
ll der[Nmax];
void precalc(){
    der[0]=1;der[1]=0;
    c[0][0]=1;
    c[Nmax-1][Nmax-1]=1;
    for(int n = 1;n < Nmax; n ++){
        if(n>1)
            der[n]=((n-1)*(der[n-1]+der[n-2]))%mod;
        c[n][0] = 1;
        for(int k = 1 ;k<=n ;k++)
            c[n][k]=(c[n-1][k-1]+c[n-1][k])%mod;
    }
}
ll solve(int N,int C){
    ll ans = 1;
    for(int i= C; i < N-1 ; i++ ){
        ans = (ans  + (der[(N-i)]*c[N][i])%mod)%mod;
    }
    return ans ;
}
int main(){
    freopen("mdN.in","r",stdin);
    freopen("mdN.out","w",stdout);
    precalc();
    int tc;
    cin>>tc;
    while(tc--){
        int N,C;
        cin>>N>>C;
        ll ans = solve(N,C);
        cout<<ans<<endl;

    }
	return 0;
}
