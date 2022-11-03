// https://codeforces.com/problemset/problem/789/A







#include <bits/stdc++.h>
#include<ext/pb_ds/tree_policy.hpp>
#include<ext/pb_ds/assoc_container.hpp>


using namespace std;
using namespace __gnu_pbds ;
typedef  long long int ll;
#define DEBUG_var 1
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);



void solve()
{
	ll n, k;
	cin >> n >> k;
	vector<double> s(n);
	for (ll i = 0; i < n; ++i)
		cin >> s[i];

    double ans1 = 0 ;
    for (ll i1 = 0; i1 < n; i1++)
        ans1+=ceil(s[i1]/k);
    
    ans1/=2;
    ll ans2 = ceil(ans1);

    cout<<ans2<<endl;


}
 
int main()
{
	// int tests;
	// cin >> tests;
	// while (tests--)
    solve();
	return 0;
}

















