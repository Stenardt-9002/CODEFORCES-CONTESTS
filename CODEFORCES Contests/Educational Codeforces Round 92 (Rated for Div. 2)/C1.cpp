#include<string.h>
#include<iostream>
#include<vector>
using namespace std;

typedef long long int lld;

int checkshit(string s)
{
    //left rotate and check right rotate
    int count = s.length();
    // bool chill = false;
    for (int i = 0; i < count; i++)
    {
     
    if (i>0 &&i<count-1)
    {
        if(s[i-1] != s[i+1])
        {
            // chill = false;
            return 0;
        }

    }
    else if (i==0)
    {
        if (s[count-1]!=s[1])
        {
            return 0;
            // chill = false;
        }
        
    }
    else if (i==count-1)
    {
        if (s[count-2]!=s[0])
        {
            return 0;
            // chill = false
        }
        

    }
    
    


    }

    return 1;
       
}



int main()
{
    int tesetcaes;
    cin>>tesetcaes;
    // double answer1,answer2;
    lld lengthn;
    string str1;
    while (tesetcaes--)
    {
    cin>>str1;
    // string *dp ;
    // cout<<str1[0]<<" "<<str1[1]<<" "<<str1[2]<<" "<<str1[3];
    lengthn = str1.length();
    int **dp;
    int **dp2;
    int **dp3;


    string temp1upuntil= "";
    string temp2tillend="" ;


    string temp1once= "";
    string temp2oncend="" ;

    // dp = new string[str1.length()];
    dp = new int*[lengthn];
    dp2 = new int*[lengthn];
    dp3 = new int*[lengthn];

    for (lld i1 = 0; i1 < lengthn; i1++)
    {

        temp1upuntil+=str1[i1];
        temp2tillend="" ;
        temp1once =  str1[i1];
        dp[i1] = new int[lengthn];
        dp2[i1] = new int[lengthn];
        dp3[i1] = new int[lengthn];

        // for (lld j1 = i1+1; j1 < lengthn; j1++)
        for (lld j1 = lengthn-1; j1 >=0; j1--)
        {
            // dp[i1][j1] = 0;
            temp2tillend=str1[j1]+temp2tillend;
            temp2oncend = str1[j1];
            dp[i1][j1] = checkshit(temp1upuntil+temp2tillend);
            dp2[i1][j1] = checkshit(temp1once+temp2tillend);
            dp3[i1][j1] = checkshit(temp1upuntil+temp2oncend);
        }

        // for (lld j1 = i1+1; j1 < lengthn; j1++)
        // {

        // }
        

    }
    lld max = 0;
    for (lld i = 0; i < lengthn; i++)
    {
        for (lld j = i+1; j < lengthn; j++)
        {
            if (dp[i][j]==1)
            {
                if (max<lengthn-j+1+i)
                {
                    max = lengthn-j+1+i;
                }
                
            }

            if (dp2[i][j]==1)
            {
                if (max<lengthn-j+1)
                {
                    max = lengthn-j+1;
                }
                
            }
            
            if (dp3[i][j]==1)
            {
                if (max<i+2)
                {
                    max = 2+i;
                }
                
            }

        }
        
    }
    

    cout<<lengthn-max<<"\n";




    
    for (lld ij1 = 0; ij1 < lengthn; ij1++)
    {
        delete [] dp[ij1];
        delete [] dp2[ij1];
        delete [] dp3[ij1];

    }
    

    delete[] dp;delete[] dp2;delete[] dp3;



    // int x = checkshit(str1);
    // cout<<" "<<x;

    }

}
