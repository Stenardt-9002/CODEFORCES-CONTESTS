// https://codeforces.com/problemset/problem/785/B







#include<iostream>
#include<vector>
#include<algorithm>

// #include <bits/stdc++.h>
// #include<ext/pb_ds/tree_policy.hpp>
// #include<ext/pb_ds/assoc_container.hpp>


using namespace std;
// using namespace __gnu_pbds ;
typedef  long long int ll;
// #define DEBUG_var 1
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


ll solve(ll n , ll m ,vector<pair<ll,ll>> arr1 , vector<pair<ll,ll>> arr2)
{
    ll min1 =INT_MAX , max1 = INT_MIN  ;
    ll min2 =INT_MAX , max2 = INT_MIN  ;

    for (ll i1 = 0; i1 < n; i1++)
    {
        max1 = max(arr1[i1].first,max1);
        min1 = min(arr1[i1].second,min1);
    }

    for (ll i1 = 0; i1 < m; i1++)
    {
        max2 = max(arr2[i1].first,max2);
        min2 = min(arr2[i1].second,min2);
    }
    return std::max({0ll , max1-min2 ,max2-min1});
    
}

int main(int argc, char const *argv[])
{
    fastIO
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output1.txt","w",stdout);
    #endif
    ll testcases=1 ,n,m;
    // cin>>testcases;
    while (testcases--)
    {
        cin>>n ;
        vector<pair<ll,ll>> arr1(n);
        for (ll i1 = 0; i1 < n; i1++)
            cin>>arr1[i1].first>>arr1[i1].second ;
        cin>>m ;
        vector<pair<ll,ll>> arr2(m);
        for (ll i1 = 0; i1 < m; i1++)
            cin>>arr2[i1].first>>arr2[i1].second ;
        


        cout<<solve(n,m,arr1,arr2)<<endl;
    }


    return 0;
}








