#include<iostream>
#include<math.h>
namespace miller
{
    unsigned long long int multiply(unsigned long long int a,unsigned long long int b,unsigned long long int p)
    {
        unsigned long long int ans=0;
        a=a%p;
        b=b%p;
        if(a>>32==0&&b>>32==0)
            return (a*b)%p;
        if(b>a)
        {
            b=a^b;
            a=a^b;
            b=a^b;
        }
        for(;b!=0;b=b>>1)
        {
            if(b&1)
                ans=(ans+a)%p;
            a=(a<<1)%p;
        }
        return ans;
    }
    unsigned long long int power(unsigned long long int a,unsigned long long int b,unsigned long long int p)
    {
        unsigned long long int ans=1;
        for(;b!=0;b=b>>1)
        {
            if(b&1)
                ans=multiply(ans,a,p);
            a=multiply(a,a,p);
        }
        return ans;
    }
    int single_test(unsigned long long int a,unsigned long long int d,unsigned long long int p)
    {

        unsigned long long int m=power(a,d,p);
        if(m==1||m==p-1)
            return 1;
        while(d!=p-1)
        {
            m=multiply(m,m,p);
            d=d<<1;
            if(m==1)
                return 0;
            if(m==p-1)
                return 1;
        }
        return 0;
    }
    int bruteforce(int n)
    {
        int m;
        if(n==2)
            return 1;
        if(n%2==0)
            return 0;
        for(m=3;m*m<=n;m=m+2)
        {
            if(n%m==0)
            return 0;
        }
        return 1;
    }
    int prime(unsigned long long int p)
    {
        if(p<1000)
            return bruteforce(p);
        if((p%2&&p%5&&p%7&&p%11&&p%13&&p%17&&p%19&&p%23)==0)
            return 0;
        unsigned long long int d=p-1;
        while(d%2==0)
            d=d>>1;
        unsigned long long int t=p;
        if(!single_test(2,d,p))
            return 0;
        if(t>>10==0)
            return 1;
        if(!single_test(3,d,p))
            return 0;
        if(t>>20==0)
            return 1;
        if(!single_test(5,d,p))
            return 0;
        if(t>>24==0)
            return 1;
        if(!single_test(7,d,p))
            return 0;
        if(t>>31==0)
            return 1;
        if(!single_test(11,d,p))
            return 0;
        if(t>>40==0)
            return 1;
        if(single_test(13,d,p)&&single_test(17,d,p)&&single_test(19,d,p)&&single_test(23,d,p))
            return 1;
        return 0;
    }
}
long long int ispower(long long int n,int m)
{
    long long int k=pow(n,(float)1/m);
    if(pow(k,m)==n)
        return k;
    if(pow(k-1,m)==n)
        return k-1;
    if(pow(k+1,m)==n)
        return k+1;
    return 0;
}
long long int answer(long long int n)
{
    int j=1;
    long long int i;
    for(i=2;i<=n;i=i*2)
    {
        if(miller::prime(ispower(n,j)))
            return ispower(n,j);
        j++;
    }
    return 1;
}
int main()
{
    long long int n;
    std::cin>>n;
    std::cout<<answer(n)<<'\n';
    return 0;
}
