// https://codeforces.com/problemset/problem/1704/C








#include <bits/stdc++.h>
#include<ext/pb_ds/tree_policy.hpp>
#include<ext/pb_ds/assoc_container.hpp>


using namespace std;
using namespace __gnu_pbds ;
typedef  long long int ll;
#define DEBUG_var 1
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


const int mod1 = (1e9+7);
const int MOD1 = 1000000007;



// int main(int argc, char const *argv[])
// {
//     fastIO
//     #ifndef ONLINE_JUDGE
//     freopen("input.txt","r",stdin);
//     freopen("output1.txt","w",stdout);
//     #endif 
//     ll testcases=1 ;
//     cin>>testcases;


//     while (testcases--)
//     {
//         ll n ,m,y;
//         cin>>n>>m;
//         vector<ll>input(m) ;
//         for (ll i1 = 0; i1 < m; i1++)
//             cin>>input[i1] ;

//         sort(input.begin(),input.end());
//         vector<ll> ans1 ;
//         for (ll i1 = 0; i1 < m-1; i1++)
//             ans1.push_back(input[i1+1]-input[i1]-1);

//         if(input[0]+n-input[m-1]-1>0)
//             ans1.push_back(input[0]+n-input[m-1]-1)        ;  

//         sort(ans1.begin(),ans1.end(),greater<ll>());

//         ll save_count = 0 ,infected_factor = 0;
//         for (ll i1 = 0; i1 < ans1.size(); i1++)
//         {
//             if(ans1[i1]-infected_factor*2>0)
//                 save_count+=(max(ans1[i1]-save_count*2-1,1ll));

//             infected_factor+=2;
//         }
        
//         cout<<n-save_count<<endl;

//     }

//     return 0;
// }


ll solve(ll n , ll m , vector<ll> array)
{
    sort(array.begin(),array.end());
    vector<ll> ans1 ;
    for (ll i1 = 0; i1 < m-1; i1++)
        ans1.push_back(array[i1+1]-array[i1]-1);

    if(array[0]+n-array[m-1]-1>0)
        ans1.push_back(array[0]+n-array[m-1]-1);

    sort(ans1.begin(),ans1.end() ,[](ll a , ll b){return a>b;});
    ll save_count = 0 , spread_factor = 0 ;

    for (ll i1 = 0; i1 < ans1.size(); i1++)
    {
        if(ans1[i1]-spread_factor*2>0)
            save_count+=(max(1ll,array[i1]-spread_factor*2 -1));
        
        spread_factor+=2 ;
    }
    
    return n-save_count ;


}



int main(int argc, char const *argv[])
{
    fastIO
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output1.txt","w",stdout);
    #endif 
    const int N = 500005, inf = 2147483647, M = 1004535809;
    int  n, m, a[N], T, k;


    scanf("%d", &T);
	while (T--) {
		k = 0;
		scanf("%d %d", &n, &m);
		for (int i = 1; i <= m; ++i)
			scanf("%d", &a[i]);
		sort(a + 1, a + 1 + m);
		for (int i = 2; i <= m; ++i)
			
            t[++k] = { a[i] - a[i - 1] - 1,2 };
		int num_tmp = a[1] + n - a[m] - 1;
		if (num_tmp > 0) {
			t[++k] = { num_tmp, 2 };
		}
		sort(t + 1, t + 1 + k, [](str a, str b) {return a.x > b.x; });
		long long ans = 0, cnt = 0;
		for (int i = 1; i <= k; ++i) {
		    if (t[i].x - cnt * 2 > 0) {
		      int num_tmp = max(1ll, t[i].x - cnt * 2 - 1);
			  ans += num_tmp;
		    }
		    cnt += 2;
		}
		printf("%lld\n", n - ans);
	}




    // ll testcases=1 ;
    // cin>>testcases;


    // while (testcases--)
    // {
    //     ll n ,m,y;
    //     cin>>n>>m;
    //     vector<ll>input(m) ;
    //     for (ll i1 = 0; i1 < m; i1++)
    //         cin>>input[i1] ;


    //     cout<<solve(n,m,input)<<endl;

    // }

    // return 0;
}










