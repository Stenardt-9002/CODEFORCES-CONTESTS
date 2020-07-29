#include<iostream>
#include<vector>
using namespace std;

typedef long long int lld;



lld gcdfuc(lld a , lld b)
{
    if (a==0)
    {
        return b;
        /* code */
    }
    return gcdfuc(b%a,a);
}




int main()
{
    int tesetcaes;
    cin>>tesetcaes;
    lld a,b,temp,asnwer1,asnwer2,start=0,finalsnwer1,finalsnwer2;
    double answer1,answer2;
    while (tesetcaes--)
    {
    
    cin>>a>>b;
    finalsnwer1 = -1;
    finalsnwer2 = -1;
    // cout<<a;
        //always a is smaller

    if (a>b)
    {
        temp = a;
        a = b;
        b = a;
    }


        temp = b;
        start = a;
        while (temp-->a)
        {
            lld por = temp*a;
            asnwer1 = por/gcdfuc(temp,a);
            answer1 = (float)(por/gcdfuc(temp,a));
            if (answer1 == asnwer1)
            {
                finalsnwer1 = a;finalsnwer2 = b;
            }
            
        }
        




    
    }
}
