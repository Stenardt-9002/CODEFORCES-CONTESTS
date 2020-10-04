
#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{

    int height1,wdthi2;
    cin>>height1>>wdthi2;
    // cout<<height1<<wdthi2<<"\n";
    string str1[height1];
    vector<vector<bool>> half1(height1,vector<bool>(wdthi2,false) );



    for (int i1 = 0; i1 < height1; i1++)
    {
        // for (int j1 = 0; j1 < height1; j1++)
        // {
        //     cin>>str1[i1][j1];
        // }
        cin>>str1[i1];
        // cout<<str1[i1]<<"\n";
    }

    // for (int i1 = 0; i1 < wdthi2; i1++)
    // {
    //     cin>>str1[i1];
    // }
    

    //find center 
    for (int i1 = 1; i1 < height1; i1++)
    {
        for (int j1 = 1; j1 < wdthi2; j1++)
        {
            if (str1[i1][j1]=='*' && str1[i1][j1-1]=='*' && str1[i1][j1+1]=='*' && str1[i1+1][j1]=='*' && str1[i1-1][j1]=='*' )
            {
                int uptravar = i1,downtravar=i1,lefttravar=j1,rightravar = j1;

                while (uptravar>=0 && str1[uptravar][j1]=='*')
                {
                    half1[uptravar--][j1] = true;
                }
                while (downtravar<height1  && str1[downtravar][j1]=='*')
                {
                    half1[downtravar++][j1] = true;

                }
                
                while (lefttravar>=0  && str1[i1][lefttravar]=='*')
                {
                    half1[i1][lefttravar--] = true;
                }

                while (rightravar<wdthi2  && str1[i1][rightravar]=='*')
                {
                    half1[i1][rightravar++] = true;
                }


                //ceck outside area NO 
                for (int i2 = 0; i2 < height1; i2++)
                {
                    for (int j2 = 0; j2 < wdthi2; j2++)
                    {
                        if (half1[i2][j2]!=(str1[i2][j2]=='*'))
                        {
                            //OUSIDE
                            cout<<"NO\n";
                            return 0;
                        }
                        
                    }
                    
                }
                
                cout<<"YES\n";
                return 0;



                
            }
            
        }
        
    }
    
    cout<<"NO\n";
    return 0;
}















