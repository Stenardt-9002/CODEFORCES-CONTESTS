#include<iostream>
#include <algorithm> 
using namespace std;
int main(int argc, char const *argv[])
{
    long long int x,y,z,total,ans1,r1,r2,ans2,min1;
    cin>>x>>y>>z;
    total = x+y;
    ans1 = total/z;
    r1 = x%z;
    r2 = y%z;
    if (r1+r2<z)
    {
        ans2 = 0;
    }
    else
    {
        min1 = std::min(z-r1,z-r2);
        ans2 = min1;
    }
    cout<<ans1<<" "<<ans2;
    
    return 0;
}


