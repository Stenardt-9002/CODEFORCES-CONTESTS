// https://codeforces.com/problemset/problem/787/B








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
	ll n, m;
	cin >> n >> m;
    bool allterror = true,foundonce= true ;
    ll k ,temp;
    while (m-- )
    {
        vector<int> array1(n+1,0);
        cin>>k ;
 
        foundonce= true ;
        for (int i1 = 0; i1 < k; i1++)
        {
            cin>>temp ;
            if(temp<0) 
            {
                temp = abs(temp);
                array1[temp] -=1;
            } 
            else 
                array1[temp] +=1;

            if(array1[temp]==0)
                foundonce = false;
        }
        if(foundonce)
            allterror = false;
    
    }
    if(!allterror)
        cout<<"Yes\n";
    else 
        cout<<"No\n";


}
 




int main(int argc, char const *argv[])
{
    fastIO
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output1.txt","w",stdout);
    #endif
    int testcases=1 ;
    // cin>>testcases;
    while (testcases--)
        solve();


    return 0;
}



























