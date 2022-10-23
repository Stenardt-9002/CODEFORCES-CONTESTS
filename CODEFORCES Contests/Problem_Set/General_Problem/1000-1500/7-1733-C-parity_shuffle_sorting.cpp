// https://codeforces.com/problemset/problem/1730/C

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

vector<pair<ll,ll>> solve( ll n , vector<ll>array1  )
{
    vector<pair<ll,ll>> ans1 ;
    if(n==1)
        return {};
    ans1.push_back({1,n});
    ll sum1 = (array1[0]+array1[n-1])%2?array1[0]:array1[n-1];
    for (ll i1 = 1; i1 < n-1; i1++)
    if( (sum1%2)^(array1[i1]%2) )
        ans1.push_back({1,i1+1});
    else 
        ans1.push_back({i1+1,n});



    return ans1 ;
}














int main(int argc, char const *argv[])
{
    fastIO
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output1.txt","w",stdout);
    #endif 
    ll testcases=1 ;
    cin>>testcases;


    while (testcases--)
    {
        ll n ;
        cin>> n;
        vector<ll> array(n);
        for(auto &x:array)
            cin>>x ;
        vector<pair<ll,ll>> ans1 = solve(n,array );//<<"   "<<execute(n,m)<< endl;
        cout<<ans1.size()<<endl;
        for(auto p:ans1)
            cout<<p.first<<" "<<p.second<<endl ;

    }

    return 0;
}



