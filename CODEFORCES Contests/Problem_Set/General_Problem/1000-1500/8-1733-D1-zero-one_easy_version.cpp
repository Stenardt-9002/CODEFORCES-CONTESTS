// https://codeforces.com/problemset/problem/1733/D1






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




ll solve( string xor_result ,ll count_1,ll x ,ll y)
{
    if(count_1==0)
        return 0 ;
    else if(count_1==2)
    {
        ll first_index = -1 , second_index = -1 ;
        for (ll i1 = 0; xor_result[i1]; i1++)
            if(xor_result[i1]=='1' &&first_index==-1)
                first_index = i1 ;
            else if(xor_result[i1]=='1' &&second_index==-1)
                second_index = i1 ;

        if(first_index+1==second_index)
            return min(x,2*y);
        else 
            return y ;

    }
    return (count_1/2)*y;
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
        cin>> n>>x>>y;
        string input1,input2 ;
        cin>>input1>>input2 ;

        string xor_result = "";
        ll count_1 = 0 ;
        for (int i1 = 0; i1 < n; i1++)
        {
            char append_character = ((input1[i1]-'0')^(input2[i1]-'0'))+'0';
            count_1+=(append_character=='1');
            xor_result+=append_character ;
        }
        
        if(count_1%2==1)
            cout<<-1<<"\n";
        else 
            cout<<solve(xor_result,count_1,x,y)<<"\n";
        // cout<<xor_result<<endl;

    }

    return 0;
}








