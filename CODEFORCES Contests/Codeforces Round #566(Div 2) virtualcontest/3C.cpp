#include<iostream>
#include<vector>
#include<cstring>



using namespace std;
struct data_tipe{
    string str1;
    int voewl_count ;
    char lastvowel;
};
data_tipe procvess(string stufg)
{
 
    data_tipe a1;
    int vowel_count=0;
    char last_chr ;
    for (int i1 = 0; i1 < stufg.length(); i1++)
    {

        if (stufg[i1]=='a'||stufg[i1]=='e'||stufg[i1]=='i'||stufg[i1]=='o'||stufg[i1]=='u')
        {
            vowel_count++;
            last_chr = stufg[i1];
        }
        
        // vowel_count


    }
    a1.voewl_count = vowel_count;
    a1.lastvowel = last_chr;
    a1.str1 = stufg;
    return a1;

}





int main(int argc, char const *argv[])
{

    int num_ofwords;
    cin>>num_ofwords;
    // string <vector> arr1(num_ofwords);
    // vector<string> arr1(num_ofwords);
    vector<data_tipe> arr1(num_ofwords);
    data_tipe str1_inp ; 

    for (int i1 = 0; i1 < num_ofwords; i1++)
    {
        string atr1;
        cin>>atr1;
        // str1_inp.str1 = atr1;
        str1_inp = procvess(atr1);

        // arr1[i1] = atr1;
        




    }
    




    
    return 0;
}










