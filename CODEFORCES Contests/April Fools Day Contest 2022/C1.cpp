#include <bits/stdc++.h>
#include<ext/pb_ds/tree_policy.hpp>
#include<ext/pb_ds/assoc_container.hpp>


using namespace std;
using namespace __gnu_pbds ;

typedef  long long ll1d;



using namespace std;
int main(int argc, char const *argv[])
{
    ll1d n ,*arr1 ;
    cin>>n ;
    arr1 = new ll1d[n];
    for (int i1 = 0; i1 < n; i1++)
    {
        cin>>arr1[i1];
    }
    cout<<arr1[1]<<endl;
    delete[] arr1 ;
    return 0;
}
