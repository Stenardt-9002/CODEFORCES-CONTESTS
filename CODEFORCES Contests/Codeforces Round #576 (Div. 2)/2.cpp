#include<iostream>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{

    int n ,loop,flag=0;
    cin>>n;
    int arr1[n],sum=0;
    for (size_t i = 0; i < n; i++)
    {
        cin>>arr1[i];
        sum+=arr1[i];
    }
    if(sum%2!=0 || n<4)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        sum=0;
        sort(arr1,arr1+n);
        if (n%2==0)
        {
            loop=n/2;
            sum = arr1[0]+arr1[n-1];
            for (size_t i = 0; i < loop; i++)
            {
                if (sum!=(arr1[i]+arr1[n-i-1]))
                {
                    flag=1;
                }
            }
            if (flag==0)
            {
                cout<<"YES";
            }
            
        }

        else
        {
            
        }
        
    }
    



    return 0;
}
