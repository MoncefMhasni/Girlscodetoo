#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("music.in","r",stdin);
	freopen("music.out","w",stdout);
	int tc;
	cin>>tc;
	while(tc--){
	int N;cin>>N;
	std::vector<string> n(N),c(N);
	string P;
	getchar();
	for(int i=0;i<N;i++){
		getline(cin,n[i]);
		getline(cin,c[i]);
	}
	getline(cin,P);string err="Error";int j=-1;
	for(int i=0;i<N;i++){
		if(c[i].find(P)!=string::npos)
			if(j==-1)
				j=i;
			else break;

	}
	cout<<(j==-1 ? err : n[j])<<endl;
	}

}
