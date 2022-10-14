// https://codeforces.com/problemset/problem/1739/B






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
    int testcases=1 ;
    cin>>testcases;
    while (testcases--)
    {
        int n ;
        cin>> n;
        bool done = true ;
        vector<int> darray(n) , origarr ;
        for (int i1 = 0; i1 < n; i1++)
            cin>>darray[i1];

        origarr.push_back(darray[0]);
        for (int i1 = 1; i1 < n && done; i1++)
        {
            if(darray[i1]>origarr[i1-1] ||(darray[i1]<=origarr[i1-1] &&  (darray[i1]+origarr[i1-1] == origarr[i1-1]-darray[i1]) ))
                origarr.push_back(darray[i1]+origarr[i1-1]);
            else 
                done = false ;
        }
        
        if(done)
            for (int i1 = 0; i1 < n; i1++)
                cout<<origarr[i1]<<" ";
        else 
            cout<<-1;            
        cout<<endl;
    }
    

    return 0;
}





