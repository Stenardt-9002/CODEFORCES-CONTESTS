
#include<iostream>



typedef long long int lld ;

int min1bro(int a1,int b1)
{
    if (a1<b1)
    {
        return a1;
    }
    return b1 ;
}

using namespace std;


int main(int argc, char const *argv[])
{
    lld *a1,*b1 ; 



    int n,m ; 
    cin>>n>>m ; 
    a1 = new lld[n];
    b1 = new lld[m];

    int cunt1odd = 0;
    int cunt2odd = 0;

    for (lld i = 0; i < n; i++)
    {
        cin>>a1[i];
        cunt1odd+= (a1[i]%2);
    }
    for (lld i = 0; i < m; i++)
    {
        cin>>b1[i];
        cunt2odd+= (b1[i]%2);
    }


    int min1 = min1bro(cunt1odd,m-cunt2odd);
    int min2 = min1bro(cunt2odd,n-cunt1odd);

    cout<<min1+min2 ;




    delete []a1 ;
    delete []b1 ; 


    return 0;
}














