#include<iostream>
#include<vector>
using namespace std;

typedef long long int lld;





int main()
{
    int tesetcaes;
    cin>>tesetcaes;
    // double answer1,answer2;
    lld n,k,z;
    while (tesetcaes--)
    {
    lld *arr1;
    cin>>n>>k>>z;
    arr1 = new lld[n];
    for (int i1 = 0; i1 < n; i1++)
    {
        cin>>arr1[i1];
    }
    

    

    delete [] arr1;


    }

}
