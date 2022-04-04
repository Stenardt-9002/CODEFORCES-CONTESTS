// #include <bits/stdc++.h>
// #include<ext/pb_ds/tree_policy.hpp>
// #include<ext/pb_ds/assoc_container.hpp>


// using namespace std;
// using namespace __gnu_pbds ;


// typedef vector<int> vi ;
// typedef vector<vi> vii ;

// const int mod1 = (1e9+7);
// const long long int mod2 =  1e18 ;
// #define mii map<int,int>
// #define msi map<string,int>
// #define musi unordered_map<string,int>


// typedef  long long int lld;

// #define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);



// int main(int argc, char const *argv[])
// {
//     fastIO
//     lld testcase=1 ;

//     cin>>testcase ;


//     lld m,n ;
//     lld a,b,c ;

//     while (testcase--)
//     {
//         cin>>n>>m ;
//         vector<vector<lld>> graph1 ;
//         for (int i1 = 0; i1 <= n; i1++)
//         {
//             vector<lld>temp1(n+1,1) ;
//             graph1.push_back(temp1) ;
//             graph1[i1][i1] = 0;
//         }
        
//         while (m--)
//         {
//             cin>>a>>b>>c ;
//             graph1[a][b] = 0;
//             graph1[b][a] = 0;

//             graph1[b][c] = 0;
//             graph1[c][b] = 0;


//         }
        
//         vector<lld> visted(n,false );
//         // set<lld> visted ;
//         //all node
//         vector<pair<int,int>> ans1 ;
//         for (int i1 = 1; i1 <=n; i1++)
//         {
//             visted[i1] = true ;
//             // visted.insert(i1) ;
//             for (int j1 = 0; j1 < n; j1++)
//             {
//                 // if(visted.find(j1)==visted.end() && graph1[i1][j1]==1)
//                 if(!visted[j1] && graph1[i1][j1]==1)
//                     ans1.push_back({i1,j1}) ;
//             }
//         }
        
//         for (auto x : ans1)
//             cout<<x.first<<" "<<x.second<<endl;

//     }

//     return 0;
// }




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
    lld testcase=1 ;

    cin>>testcase ;


    lld m,n ;
    lld a,b,c ;

    while (testcase--)
    {
        cin>>n>>m ;
        set<lld> hash_1 ; 
        while (m--)
        {
            cin>>a>>b>>c ;
            hash_1.insert(b);
        }
        lld passthorugh =-1;        
        for (int i1 = 1; i1 <=n; i1++)
        {
            if(hash_1.find(i1)==hash_1.end())
            {
                passthorugh = i1 ;
                break ; 
            }
        }
        
        for (int i1 = 1; i1 <=n; i1++)
        {
            if(i1==passthorugh)
                continue ;
            cout<<i1<<" "<<passthorugh<<endl;
        }

    }

    return 0;
}



