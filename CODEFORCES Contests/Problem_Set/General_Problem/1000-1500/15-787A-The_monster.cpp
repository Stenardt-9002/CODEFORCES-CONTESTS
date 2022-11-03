// https://codeforces.com/problemset/problem/787/A








#include <bits/stdc++.h>
#include<ext/pb_ds/tree_policy.hpp>
#include<ext/pb_ds/assoc_container.hpp>


using namespace std;
using namespace __gnu_pbds ;
typedef  long long int ll;
#define DEBUG_var 1
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


int solve(int a , int b , int c , int d)
{
    //b +xa 
    //d +yc

    for (int x = 0; x < 1001; x++)
        for (int y = 0; y < 1001; y++)
            if((a*x-c*y)==(d-b))     
                return a*x+b ;
        

    return -1; 
}

// int solve(int a , int b , int c , int d)
// {
//     //b +xa 
//     //d +yc



//     for (int x = 0; x < 101; x++)
//         for (int y = 0; y < 101; y++)
//             if(a*x-c*y>0 && ((a*x-c*y)==(d-b)) )    
//                 return a*x+b ;
        

//     return -1; 



//     // int ans1 = -1;
//     // if(d>b)
//     // {
//     //     int val = d-b ;
//     //     for (int x = 0; x < 101; x++)
//     //         for (int y = 0; y < 101; y++)
//     //             if(a*x-c*y>0 && ((a*x-c*y)==(d-b)) )    
//     //                 return a*x+b ;
            
        
//     // }
//     // else
//     // {

//     // }
    




// }

int main(int argc, char const *argv[])
{
    fastIO
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output1.txt","w",stdout);
    #endif
    int testcases=1 ,a,b,c,d;
    // cin>>testcases;
    while (testcases--)
    {
        cin>>a>>b>>c>>d ;
        cout<<solve(a,b,c,d)<<endl;
    }


    return 0;
}
























