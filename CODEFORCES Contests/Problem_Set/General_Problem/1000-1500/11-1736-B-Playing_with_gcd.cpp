// https://codeforces.com/problemset/problem/1736/B








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

string solve(ll n , vector<ll> array1)
{
    ll a1 = 1,gcd_val = 1;
    vector<ll>new_barray;
    for (ll i1 = 0; i1 < n; i1++)
    {
        gcd_val = __gcd(a1,array1[i1]);
        new_barray.push_back(a1*array1[i1]/gcd_val);
        a1 = array1[i1];
    }
    gcd_val = __gcd(a1,1ll);
    new_barray.push_back(a1/gcd_val);
    for (ll i1 = 0; i1 < n; i1++)
        if(__gcd(new_barray[i1],new_barray[i1+1])!=array1[i1])
            return "No";

    return "Yes"    ;
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
        ll n ,x,y;
        cin>> n;
        vector<ll> aray1(n);
        // ll temp1;
        // vector<vector<ll>>colors(n);
        for (ll i1 = 0; i1 < n; i1++)
            cin>>aray1[i1];
        

        cout<<solve(n,aray1)<<endl;



    }

    return 0;
}













