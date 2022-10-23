// https://codeforces.com/problemset/problem/1706/B







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
        // vector<ll> aray1(n);
        // ll temp1;
        // vector<vector<ll>>colors(n);
        // for (ll i1 = 0; i1 < n; i1++)
        // {
        //     cin>>temp1 ;
        //     colors[temp1-1].push_back(i1);
        // }

        //     // colors[aray1[i1]-1].push_back(i1);
        //     // cin>>aray1[i1]        ;

        // // for(ll i1 = 0 ; i1<n;i1++)


        // vector<int>ans1(n) ;

        // // for (ll i = 0; i < n; i++)
        // //     if(colors[i].size()==0)
        // //         ans1[i] = 0 ;
        // //     else 
        // //     {
        // //         ll max_ans1 = 1;
        // //         ll odd_cunt = 0,even_count =0 ;
        // //         for(ll j1 = 0 ;j1<colors[i].size() ; j1++)
        // //         if(colors[i][j1]%2)
        // //             odd_cunt++;
        // //         else 
        // //             even_count++;

        // //         max_ans1 = max({max_ans1 , odd_cunt , even_count});
        // //         ans1[i] = max_ans1 ;
        // //     }

        // for (ll i = 0; i < n; i++)
        // {
        //     ll max_ans1 = 1;
        //     if(colors[i].size()==0)
        //         ans1[i] = 0 ;
        //     else 
        //     {
        //         vector<ll> dp1(colors[i].size(),1);
        //         for(ll j1 = 1 ;j1<colors[i].size() ; j1++)
        //             for (ll k1 = 0; k1 < j1; k1++)
        //                 if((colors[i][j1]-colors[i][k1])%2)
        //                 {
        //                     dp1[j1] = max(dp1[j1],dp1[k1]+1);
        //                     max_ans1 = max(max_ans1,dp1[j1]);
        //                 }
                
        //         ans1[i] = max_ans1 ;

        //     }
                
        // }
            
            vector<vector<ll>>dp1(2,vector<ll>(n+1,0));
            ll temp1;
            for (ll i1 = 0; i1 < n; i1++)
            {
                cin>>temp1 ;
                dp1[i1&1][temp1] = max(dp1[(i1^1)&1][temp1]+1 , dp1[i1&1][temp1]);
            }


 
        for (ll i = 1; i <= n; i++)
        cout << max(dp1[0][i], dp1[1][i]) << " \n"[i == n];






    }

    return 0;
}






