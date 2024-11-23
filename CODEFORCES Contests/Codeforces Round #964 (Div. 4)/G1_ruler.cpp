#include <bits/stdc++.h>
using namespace std; 

int MOD = 1e9+7 ; 
int main(int argc , char const *argv[])
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
    int testcase  ;
    cin>>testcase ; 
    for (int i = 0; i < testcase; i++)
    {
        int val ; 
        int l = 2, r=1000  ; 
        while (l<r)
        {
            int mid = l+((r-l)>>1); 
            cout<<"? 1 "<<mid<<endl ; 
            cin>>val ;    
            if(val!=mid)
                r = mid ; 
            else    
                l = mid+1 ; 
        }
        cout<<"! "<<l<<endl ; 
    }
    return 0 ;
}
