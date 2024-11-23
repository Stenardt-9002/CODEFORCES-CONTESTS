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
        int l =1 , r= 999,val;    
        while(r-l>2)
        {
            int fr = (2*l+r)/3;
            int se = (2*r+l)/3;
            cout<<"? "<<fr<<" "<<se<<endl;
            cin>>val ; 
            if(val == (fr+1)*(se+1))
                r = fr ;
            else if(val==fr*se)
                l = se ; 
            else 
                l = fr , r = se ;

        }
        if(r-l==2)
        {
            cout<<"? 1 "<<r-1<<endl;
            cin>>val ;
            if(val==l+1)
                l++ ; 
            else 
                r = l+1;
        }
        cout<<"! "<<r<<endl;
    }
    return 0 ;
}