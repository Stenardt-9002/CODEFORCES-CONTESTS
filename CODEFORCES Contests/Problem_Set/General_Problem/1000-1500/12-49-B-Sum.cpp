// https://codeforces.com/problemset/problem/49/B






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
ll solve(ll x,ll y)
{
    ll get_base = 1 ;
    ll copy_digit = x ;
    ll ans1 = 0 ;
    while(copy_digit!=0)
    {
        get_base = max(get_base , copy_digit%10);
        copy_digit/=10 ;
    }
    copy_digit = y ;
    while(copy_digit!=0)
    {
        get_base = max(get_base , copy_digit%10);
        copy_digit/=10 ;
    }

    get_base++ ;
    ll sum1 = 0,carry1 = 0 ,power1 = 0 ; 
    if(get_base ==10)
        return floor(log10(x+y))+1;
    while (x!=0||y!=0)
    {
        sum1 = (x%10 + y%10+carry1)%get_base;
        carry1 = (x%10 + y%10+carry1)/get_base;
        ans1 = ans1+ sum1*pow(10,power1++);
        x/=10;
        y/=10;
    }
    if(carry1!=0)
        ans1+=carry1*pow(10,power1);
    
    ll ans1_dig = 0 ;
    while (ans1!=0)
    {
        ans1/=10 ;
        ans1_dig++ ;
    }

    return ans1_dig;

}






int main(int argc, char const *argv[])
{
    fastIO
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output1.txt","w",stdout);
    #endif 
    ll testcases=1 ;
    // cin>>testcases;


    while (testcases--)
    {
        ll n ,x,y;
        cin>> x>>y;

        cout<<solve(x,y)<<endl;



    }

    return 0;
}





