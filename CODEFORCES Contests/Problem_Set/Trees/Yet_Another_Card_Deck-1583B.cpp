#include <bits/stdc++.h>
#include<ext/pb_ds/tree_policy.hpp>
#include<ext/pb_ds/assoc_container.hpp>


using namespace std;
using namespace __gnu_pbds ;


typedef vector<int> vi ;
typedef vector<vi> vii ;

const int mod1 = (1e9+7);
const long long int mod2 =  1e18 ;
#define mii map<int,int>
#define msi map<string,int>
#define musi unordered_map<string,int>


typedef  long long int lld;

#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);



int main(int argc, char const *argv[])
{
    fastIO


    lld n,q;
    cin>>n>>q ;
    lld temp1 ;
    vector<lld>colr_indx(55,-1);
    set<lld> color_list ;
    for (int i1 = 0; i1 < n; i1++)
    {
        cin>>temp1   ;
        if(color_list.find(temp1)==color_list.end())
        {
            if(colr_indx[temp1]==-1)
                colr_indx[temp1] = i1 ;//save first index 
            color_list.insert(temp1);
        }
    }
    lld origndx ;
    for (int i1 = 0; i1 < q; i1++)
    {
        //queries 
        cin>>temp1 ; //you got color 
        cout<<colr_indx[temp1]+1<<" ";
        origndx = colr_indx[temp1];
        colr_indx[temp1] = 0;
        for (auto x : color_list)
        {
            //all colours except temp1 go their indexes moved  all only move till orginal index
            if(x!=temp1 && colr_indx[x]<origndx)
                colr_indx[x]++;
        }
        
    }
    

    return 0;
}


