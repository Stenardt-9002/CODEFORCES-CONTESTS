

#include <bits/stdc++.h>
#include<ext/pb_ds/tree_policy.hpp>
#include<ext/pb_ds/assoc_container.hpp>


using namespace std;
using namespace __gnu_pbds ;
typedef  long long int ll;
#define DEBUG_var 1
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

// ll solve(ll n , ll m)
// {
//     ll ans1= 0 ;

//     long long int nsqrt = sqrt(n);
//     long long int msqrt = sqrt(m);

//     if(nsqrt==msqrt)
//     {
//         ans1+=(n%nsqrt==0);
//         ans1+=(floor(((double)(m-n))/nsqrt)) ;
//     }
//     // else if()
//     else 
//     {
//         // ans1+=((msqrt-nsqrt-1)*3);

//         // ans1+=(n%nsqrt==0);
//         // if(((nsqrt+1)*(nsqrt+1))-2-n>=0 )
//         //     ans1+=( floor(  ((double)( ((nsqrt+1)*(nsqrt+1))-2-n )/nsqrt))  ) ;
//         // ans1+=(((nsqrt+1)*(nsqrt+1)-1)%nsqrt==0);

//         // // cout<<"DEUG1 "<<ans1<<endl ;
//         // ans1+=( ceil(((double)(m- ((msqrt)*(msqrt)) )/msqrt) )) ;
//         // ans1+=(m%msqrt==0);
//         // // cout<<"DEUG2 "<<ans1<<endl ;

//         ans1+=((msqrt-nsqrt-1)*3);

//         ans1+=(((nsqrt+1)*(nsqrt+1)-1)%msqrt==0);
//         ans1+=((((nsqrt+1)*(nsqrt+1))-n )/nsqrt);


//         ans1+=( ceil(((double)(m- ((msqrt)*(msqrt)) )/msqrt) )) ;
//         ans1+=(m%msqrt==0);
//         // cout<<"DEUG2 "<<ans1<<endl ;


//     }
//     return ans1 ;
// }




ll bs_sqrt(ll x)
{
    ll left = 0 ,right = 2000000123 ;
    while (left<right)
    {
        ll mid = (left+right)>>1 ;
        if(mid*mid>x)
            right = mid ;
        else 
            left = mid+1 ;
    }
    return left-1 ;
}







ll solve(ll n , ll m)
{
    ll ans1= 0 ;

    long long int nsqrt = bs_sqrt(n);
    long long int msqrt = bs_sqrt(m);

    if(nsqrt==msqrt)
    {
        for (int i = 0; i < 3; i++)
            if(n<=nsqrt*(nsqrt+i)&& nsqrt*(nsqrt+i)<=m )
                ans1++ ;
        
    }
    else 
    {
        ans1+=((msqrt-nsqrt-1)*3);
        for (int i = 0; i < 3; i++)
        {

            if(n<=nsqrt*(nsqrt+i)&& nsqrt*(nsqrt+i)<=m )
                ans1++ ;
            if(n<=msqrt*(msqrt+i)&& msqrt*(msqrt+i)<=m )
                ans1++ ;
        }


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
        ll ans1 = 0 ;
        ll n,m ;
        cin>> n>>m;
        cout<<solve(n,m)<<endl ;//<<"   "<<execute(n,m)<< endl;
    }
    

    return 0;
}




