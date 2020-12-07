#include<vector>
#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;


typedef long long int lld ;

lld gcd1(lld a1 , lld b1)
{
    if (a1>b1)
    {
        lld temp1 = a1;
        a1 = b1;
        b1 = temp1;
    }
    
    if (a1==0)
    {
        return b1;
    }
    return gcd1(b1%a1,a1);
    
}




int main(int argc, char const *argv[])
{

    lld a ,b ;
    cin>>a>>b;
    lld te1mp ;
    if (a>b)
    {
        te1mp = a ; 
        a = b;
        b = te1mp;
    }
    
    lld diif = abs(a-b);

    vector<lld> v1 ; 
    for (lld i1 = 1; i1*i1 <=diif; i1++)
    {
        if (diif%i1==0)
        {
            v1.push_back(i1);
            if (i1!=diif/i1)
            {
                v1.push_back(diif/i1);
            }
            

        }
        


    }
    lld k1;
    sort(v1.begin(),v1.end());
    lld leastlcm=(1LL<61);
    lld temp2 ;
    lld savedisor ;

    for (unsigned int ij = 0; ij < v1.size(); ij++)
    {
        savedisor = v1[ij];
        cout<<savedisor<<" ";
        if (a%savedisor!=b%savedisor)
        {
            continue ;
        }

        if (a%savedisor==0)
        {
            // k = 0//
            temp2 = (a*b)/gcd1(a,b);

            if (temp2<leastlcm)
            {
                leastlcm = temp2 ; 
                k1 = 0 ;
            }
            
        }
        else
        {
//gcd(a+k,b+k)== gcd(b-a,a+k)  
        cout<<"prick";
            temp2 = ((a+savedisor-(a%savedisor))*(b+savedisor-(a%savedisor)))/(gcd1((a+savedisor-a%savedisor),(b+savedisor-a%savedisor))) ; 
            if (temp2<leastlcm)
            {
                leastlcm = temp2 ;
                k1 = savedisor-(a%savedisor);
            }
            

        }
        



    }
    cout<<k1<<endl;
    





    return 0;
}

















