// https://codeforces.com/problemset/problem/1735/C




#include <bits/stdc++.h>
#include<ext/pb_ds/tree_policy.hpp>
#include<ext/pb_ds/assoc_container.hpp>


using namespace std;
using namespace __gnu_pbds ;
typedef  long long int ll;
#define DEBUG_var 1
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);



string solve(int n , string str1)
{
    string ans1= "";
    char cur_char ;
    vector<char>map1(26,1);
    vector<bool> indegree_allowed(26, true);
    vector<bool> outdegree_allowed(26, true);
    
    for (int i1 = 0; i1<n; i1++)
    {
        cur_char = str1[i1];
        char last_char = 'a';

        if(map1[cur_char-'a']==1)
        {
            while (last_char==cur_char || !indegree_allowed[last_char-'a'])
                last_char++ ;

            indegree_allowed[last_char-'a'] = false ;
            map1[cur_char-'a'] = last_char;
        }
        ans1+=map1[cur_char-'a'];
    }
    
    return ans1 ;
}


int main(int argc, char const *argv[])
{
    fastIO
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output1.txt","w",stdout);
    #endif 
    int testcases=1 ;
    cin>>testcases;
    while (testcases--)
    {
        int n;//,m ;
        string s ;
        cin>> n>>s;
        cout<<solve(n,s)<<endl ;//<<"   "<<execute(n,m)<< endl;

    }

    return 0;
}

