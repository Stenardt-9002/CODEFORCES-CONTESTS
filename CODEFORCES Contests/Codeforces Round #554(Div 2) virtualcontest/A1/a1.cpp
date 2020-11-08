
#include<iostream>



typedef long long int lld ;



using namespace std;

struct datatipe1
{
    lld val ,visited ; 
    int odd ;
};



int main(int argc, char const *argv[])
{

    // lld *a1,*b1 ; 
    datatipe1 *a1,*b1 ; 


    int n,m ; 
    cin>>n>>m ; 
    a1 = new datatipe1[n];
    b1 = new datatipe1[m];

    for (lld i = 0; i < n; i++)
    {
        cin>>a1[i].val;
        a1[i].visited = -1;
        a1[i].odd = a1[i].val%2;
    }
    for (lld i = 0; i < m; i++)
    {
        cin>>b1[i].val;
        b1[i].visited = -1;
        b1[i].odd = b1[i].val%2;


    }

    lld i1,j1 ;
    i1 = 0 ;j1 = 0;
    lld answer1 = 0;
    while (i1<n)
    {
        
        if (a1[i1].visited==-1 && b1[i1].visited==-1&& (a1[i1].odd!=b1[j1].odd) )
        {
            
            i1++;
            answer1++;
            j1++;
        }

        else
        {
            i1++;
        }
        

    }
    
    
    




    delete []a1 ;
    delete []b1 ; 


    return 0;
}









