// https://codeforces.com/problemset/problem/1734/C




#include <bits/stdc++.h>
#include<ext/pb_ds/tree_policy.hpp>
#include<ext/pb_ds/assoc_container.hpp>


using namespace std;
using namespace __gnu_pbds ;
typedef  long long int ll;
#define DEBUG_var 1
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);



// ll solve(ll n , string s , vector<ll> prime_numbers_vec)
// {
//     ll sum1 = 0 ;
//     unordered_set<ll> s1 ;
//     for (ll i1 = 0; i1 < n; i1++)
//         if (s[i1]=='1')
//             s1.insert(i1+1)        ;


//     unordered_map<ll,ll> dp1 ;
//     for (ll i1 = n; i1 >=1; i1--)
//         for (ll j1 = i1; j1 <=n; j1+=i1)
//         {
//             if(s1.find(j1)!=s1.end())
//                 break ;
//             dp1[j1] = i1;
//         }
        
//     for (ll i1 = 1; i1 <= n; i1++)
//         if(s1.find(i1)==s1.end())
//             sum1+=dp1[i1];
    

    
//     return sum1 ;

// }


ll solve(ll n , string s )
{
    ll sum1 = 0 ;
    unordered_set<ll> s1 ;
    for (ll i1 = 0; i1 < n; i1++)
        if (s[i1]=='1')
            s1.insert(i1+1)        ;


    unordered_map<ll,ll> dp1 ;
    for (ll i1 = n; i1 >=1; i1--)
        for (ll j1 = i1; j1 <=n; j1+=i1)
        {
            if(s1.find(j1)!=s1.end())
                break ;
            dp1[j1] = i1;
        }
        
    for (ll i1 = 1; i1 <= n; i1++)
        if(s1.find(i1)==s1.end())
            sum1+=dp1[i1];
    

    
    return sum1 ;

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
        ll n;//,m ;
        string s ;
        cin>> n>>s;
        cout<<solve(n,s )<<endl ;//<<"   "<<execute(n,m)<< endl;

    }

    return 0;
}










