//

#include<cmath>
#include<iostream>


typedef long long int lld;

using namespace std;

int pwer2fuc(lld val1)
{
    // float val1 = log2(val);
    if (val1 ==0 )
    {
        return false ;
    }
    return (ceil(log2(val1))==floor(log2(val1)));
    
}

int main(int argc, char const *argv[])
{
    
    lld x ;
    cin>>x ; 

    if (pwer2fuc(x))
    {
        
    }
    



    return 0;
}










