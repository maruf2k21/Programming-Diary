// In The Name of ALLAH SUBHANAHU WA TA’ALA //
#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tst;
	cin>>tst;
	while(tst--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		if(a+b==c || b+c==a || c+a==b)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}


	return 0;
}
