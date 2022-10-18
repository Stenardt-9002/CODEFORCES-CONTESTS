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




// string solve( string s )
// {
//     ll n = s.length();
//     string backup = s ;

//     sort(backup.begin(), backup.end());
//     string ans1 ="";
//     ll min1 = INT_MAX ;
//     ll last_min_index = 0 ;
//     for (ll i1 = 0; i1 < n; i1++)
//         if (s[i1]-'0'<=min1)
//         {
//             min1 = s[i1]-'0';
//             last_min_index = i1;
//         }
//     vector<int>hash_09(10,0);
//     for (ll i1 = 0; i1 < last_min_index; i1++)
//     {
//         int num = s[i1]-'0' ;
//         if(num==min1 || num==9)
//             hash_09[num]++ ;
//         else 
//             hash_09[num+1]++ ;
//     }

//     for (ll i1 = last_min_index; i1 < n; i1++)
//         hash_09[s[i1]-'0']++ ;

//     for (int i1 = 0; i1 < 10; i1++)
//     {
//         string temp1 = "";
//         while (hash_09[i1]--)
//             temp1+=to_string(i1);
//         ans1+=temp1 ;        
//     }
        

    
//     return ans1 ;

// }











string solve( string s )
{
    ll n = s.length();
    string ans1 ="";
    vector<int> to_num(n,0);
    vector<int> min_prefix(n+1,9);
    vector<int>hash_val(10,0);
    for (ll i = 0; i < n; i++)
        to_num[i] = int(s[i]-'0');
    
    for (ll i1 = n-1; i1 >=0; i1--)
        min_prefix[i1] = min(to_num[i1] , min_prefix[i1+1]);

    for (ll i1 = 0; i1 < n; i1++)
    {
        for (ll j1 = 0; j1 < min_prefix[i1]; j1++)
        {
            while (hash_val[j1])
            {
                hash_val[j1]--;
                ans1+=to_string(j1);
            }
        }
        if(to_num[i1]==min_prefix[i1])
            ans1+=to_string(to_num[i1]);
        else 
            hash_val[min(to_num[i1]+1 , 9)]++;
        
    }
    for (int i1 = 0; i1 < 10; i1++)
        while (hash_val[i1])
        {
            hash_val[i1]--;
            ans1+=to_string(i1);
        }
    
    return ans1 ;

}








// string solve(string s)
// {
//     int n = s.size();
//     vector<int> to_num(n);
//     vector<int> prefix_min(n + 1, 9);
//     vector<int> hash_val1(10,  0);
//     for(int i = 0; i < n; i++)
//         to_num[i] = int(s[i] - '0');

//     for(int i = n - 1; i >= 0; i--)
//         prefix_min[i] = min(prefix_min[i + 1], to_num[i]);
    
//     string ans = "";
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < prefix_min[i]; j++)
//         {
//             while(hash_val1[j])
//             {
//                 hash_val1[j]--;
//                 ans += to_string(j);
//             }
//         }

//         if(to_num[i] == prefix_min[i])
//             ans += to_string(to_num[i]);
//         else
//             hash_val1[min(9, to_num[i] + 1)]++;
//     }
//     for(int j = 0; j < 10; j++){
//         while(hash_val1[j]){
//             hash_val1[j]--;
//             ans += to_string(j);
//         }
//     }
//     // cout << ans << endl;
//     return ans ;
// }











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
        string s ;
        cin>> s;
        cout<<solve(s )<<endl ;//<<"   "<<execute(n,m)<< endl;

    }

    return 0;
}






