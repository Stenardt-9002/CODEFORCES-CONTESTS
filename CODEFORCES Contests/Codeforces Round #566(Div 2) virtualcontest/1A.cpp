#include<iostream>
#include<stdio.h>

#include<string>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int n,asnwer1 ;
    cin>>n;
    if (n%2==0)
    {
        asnwer1 = 1<<(n/2);
    }
    else
    {
        asnwer1 = 0;
    }
    cout<<asnwer1<<endl;
    
    
    
    

    return 0;
}















