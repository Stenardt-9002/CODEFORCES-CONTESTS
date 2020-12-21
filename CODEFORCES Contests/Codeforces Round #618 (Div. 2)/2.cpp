#include<iostream>
#include <stdio.h>
typedef long long int lld;
using namespace std;

#define LARGENUNMBER 1000000000
int main(int argc, char const *argv[])
{
  int testcasre;
  std::cin >> testcasre;
  lld noumbrel;
  lld *arinput;

  while (testcasre--)
  {
    cin>>noumbrel;
    // std::cout <<endl<< noumbrel << '\n';
    arinput = new lld[LARGENUNMBER];
    for (lld i = 0; i < noumbrel; i++)
    {
      cin>>arinput[i];


    }
    for (lld i = 0; i < noumbrel; i++)
    {
      cout<<arinput[i];
    }


  }


  return 0;
}
